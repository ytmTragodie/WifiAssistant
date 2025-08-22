#include "serialportmanager.h"


SerialPortManager::SerialPortManager(QObject * parent) : QObject(parent), serialPort(nullptr) {}

SerialPortManager::~SerialPortManager(){
    closePort();
}



void SerialPortManager::openPort(const QString &portName, qint32 baudRate,
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


}
