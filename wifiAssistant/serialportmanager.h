#ifndef SERIALPORTMANAGER_H
#define SERIALPORTMANAGER_H

#include "QWidget"
#include "QtSerialPort/QSerialPort"
#include "QtSerialPort/QSerialPortInfo"
#include "QThread"


class SerialWorker : public QObject
{
    Q_OBJECT
public:
    explicit SerialWorker(QObject *parent = nullptr);
    ~SerialWorker();

public slots:
    void openPort(const QString &portName, qint32 baudRate,
                  QSerialPort::DataBits dataBits,
                  QSerialPort::StopBits stopBits,
                  QSerialPort::Parity parity,
                  QSerialPort::FlowControl flowControl);
    void closePort();
    void writeData(const QByteArray &data);

signals:
    void dataReceived(const QByteArray &data);
    void statusChanged(const QString &message);
    void connectionChanged(bool connected);
    void countersUpdated(qint64 rxBytes, qint64 txBytes);

private slots:
    void handleReadyRead();
    void handleError(QSerialPort::SerialPortError error);

private:
    QSerialPort *serialPort;
    qint64 rxBytes = 0;
    qint64 txBytes = 0;
};

class SerialPortManager: public QWidget
{
    Q_OBJECT
public:
    explicit SerialPortManager(QWidget *parent = nullptr);
    ~SerialPortManager();

    void sendData(const QByteArray & data);

signals:
    void dataReceived(const QByteArray& data);
    void statusChanged(const QString & message);
    void connectionChanged(bool connected);
    void countersUpdated(qint64 rxBytes,qint64 txBytes);
private slots:
    void refreshPorts();
    void toggleConnection();
    void updateStatus(const QString &message);
private:
    QThread workerThread;
    SerialWorker *worker;
    bool isConnected = false;
};



#endif // SERIALPORTMANAGER_H
