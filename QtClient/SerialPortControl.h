#ifndef SERIALPORTCONTROL_H
#define SERIALPORTCONTROL_H

#include <QDialog>
#include "qextserialport/posix_qextserialport.h"
#include <QTimer>
#include <QString>

class SerialPortControl :public QDialog
{
    Q_OBJECT

private:
    Posix_QextSerialPort *myCom;
    QTimer *readTimer;

private slots:
    void initMyCom(const QString &portName);
    void readMyCom();  //¶ÁÈ¡´®¿Ú

};

#endif // SERIALPORTCONTROL_H
