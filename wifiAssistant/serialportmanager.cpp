#include "serialportmanager.h"


SerialWorker::SerialWorker(QObject * parent) : QObject(parent), serialPort(nullptr) {}

SerialWorker::~SerialWorker(){
    closePort();
}



void SerialWorker::openPort(const QString &portName, qint32 baudRate,
              QSerialPort::DataBits dataBits,
              QSerialPort::StopBits stopBits,
              QSerialPort::Parity parity,
                                 QSerialPort::FlowControl flowControl){
    if(serialPort){
        serialPort->close();
        delete serialPort;
        serialPort = nullptr;
    }

    serialPort = new QSerialPort(portName);
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);

    if(serialPort->open(QIODevice::ReadWrite)){
        connect(serialPort,&QSerialPort::readyRead,this,&SerialWorker::handleReadyRead);
        emit(statusChanged(tr("已连接%1").arg(portName)));
        emit connectionChanged(true);
    }else{
        emit statusChanged(tr("连接失败:%1").arg(serialPort->errorString()));
        emit connectionChanged(false);
        delete serialPort;
        serialPort = nullptr;
    }

}



void SerialWorker::closePort(){
    if(serialPort && serialPort->isOpen()){
        serialPort->close();
        emit statusChanged("串口已断开");
        emit connectionChanged(false);
    }
    if(serialPort){
        delete serialPort;
        serialPort = nullptr;
    }
}


void SerialWorker::writeData(const QByteArray &data){
    if(serialPort && serialPort->isOpen()){
        qint64 bytesWritten = serialPort->write(data);
        if(bytesWritten==-1){
            emit statusChanged(tr("发送失败:%1").arg(serialPort->errorString()));
        } else if(bytesWritten != data.size()){
            emit statusChanged(tr("发送不完整:%1/ %2字节").arg(bytesWritten).arg(data.size()));
        } else{
            txBytes += bytesWritten;
            emit countersUpdated(0,bytesWritten);
        }
    }
}

void SerialWorker::handleReadyRead(){
    if(serialPort && serialPort->isOpen()){
        QByteArray data = serialPort->readAll();
        if(!data.isEmpty()){
            rxBytes += data.size();
            emit dataReceived(data);
            emit countersUpdated(data.size(),0);
        }
    }
}

void SerialWorker::handleError(QSerialPort::SerialPortError error){
    if(error == QSerialPort::NoError) return;
    QString errorMsg;
    switch(error){
    case QSerialPort::DeviceNotFoundError:
        errorMsg = tr("设备没有找到");
        break;
    case QSerialPort::PermissionError:
        errorMsg = tr("权限不足");
        break;
    case QSerialPort::OpenError:
        errorMsg = tr("打开失败");
        break;
    case QSerialPort::NotOpenError:
        errorMsg = tr("设备未打开");
        break;
    case QSerialPort::WriteError:
        errorMsg = tr("写入失败");
        break;
    case QSerialPort::ReadError:
        errorMsg = tr("读取失败");
        break;
    case QSerialPort::ResourceError:
        errorMsg = tr("资源错误，设备可能已断开");
        break;
    default:
        errorMsg = tr("未知错误: %1").arg(error);
    }

    emit statusChanged(tr("错误: %1").arg(errorMsg));
    if (error == QSerialPort::ResourceError) {
        closePort();
    }
}

SerialPortManager::SerialPortManager(QWidget * parent):QWidget(parent){
    worker = new SerialWorker;
    worker->moveToThread(&workerThread);
    connect(&workerThread,&QThread::finished,worker,&QObject::deleteLater);
    workerThread.start();
    refreshPorts();
}

SerialPortManager::~SerialPortManager(){
    workerThread.quit();
    workerThread.wait();
}

