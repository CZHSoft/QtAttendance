#include <QtGui>
#include "RefreshData.h"
#include "DataObiect.h"
#include <QDebug>


void RefreshData::getAction ()
{
    QMessageBox::information(this,
                             "Information dialog",
                             "str");
    qDebug() << "log";


//    this->setDate (dataO);
}

void RefreshData::setDate ()
{
//    BasicHttpBinding_USCOREIService service;
////    SOAP_CMAC _tempuri__ExecuteScalar_USCOREString reqString=new SOAP_CMAC _tempuri__ExecuteScalar_USCOREString();
////    SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse repString=new SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse();
//    SOAP_CMAC _tempuri__ExecuteScalar_USCOREString reqString;
//    SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse repString;
//    std::string sql="select personphoto from person where personname='001'";
//    reqString.SqlTxt=&sql;
//    if(service.__tempuri__ExecuteScalar_USCOREString (&reqString,&repString)==SOAP_OK)
//    {

//        dataObject.setName ("002");
//        qDebug()<<repString.ExecuteScalar_USCOREStringResult->c_str ();
//        dataObject.setPhoto (QString::fromStdString(repString.ExecuteScalar_USCOREStringResult->c_str ()));


//    }
//    else
//    {
//        qDebug ()<<"Error";
//    }

    qDebug ()<<"Begin..";
//    dataObject.setPhoto ("http://localhost/testfiletran/picture/person/2.jpg");
//    qDebug()<<dataObject::
}
