#include <QDebug>
#include "SerialPortControl.h"

void SerialPortControl::initMyCom (const QString &portName)
{
     myCom = new Posix_QextSerialPort(portName,QextSerialBase::Polling);//���崮�ڶ���ָ���������Ͳ�ѯģʽ������ʹ��Polling

     myCom ->open(QIODevice::ReadWrite);//�Զ�д��ʽ�򿪴���

     myCom->setBaudRate(BAUD9600);//���������ã���������Ϊ9600

     myCom->setDataBits(DATA_8);//����λ���ã���������Ϊ8λ����λ

     myCom->setParity(PAR_NONE); //��żУ�����ã���������Ϊ��У��

     myCom->setStopBits(STOP_1);//ֹͣλ���ã���������Ϊ1λֹͣλ

     myCom->setFlowControl(FLOW_OFF);//�������������ã���������Ϊ������������

     myCom->setTimeout(10);//��ʱ���ã���������Ϊ��ʱ10ms


     readTimer = new QTimer(this);
     readTimer->start(100);//������ʱΪ100ms

     connect(readTimer,SIGNAL(timeout()),this,SLOT(readMyCom()));//�źźͲۺ�����������ʱһ��ʱ�䣬���ж����ڲ���

}

void SerialPortControl::readMyCom ()
{
    QByteArray tempByteArray = myCom->readAll();//��ȡ���ڻ��������������ݸ���ʱ����temp

//    ui->textBrowser->insertPlainText(temp);//�����ڵ�������ʾ�ڴ��ڵ��ı��������

}
