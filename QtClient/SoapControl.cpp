#include <QDebug>
#include "SoapControl.h"
#include "gsoap/soapBasicHttpBinding_USCOREIServiceProxy.h"
#include "gsoap/BasicHttpBinding_USCOREIService.nsmap"

QString SoapControl::getString (const QString &requestSQL)
{

    BasicHttpBinding_USCOREIService service;

    SOAP_CMAC _tempuri__ExecuteScalar_USCOREString* reqString=new SOAP_CMAC _tempuri__ExecuteScalar_USCOREString();
    SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse* repString=new SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse();

    std::string sql=requestSQL.toLatin1 ().data ();
    qDebug ()<<sql.c_str ();
    reqString->SqlTxt=&sql;
    if(service.__tempuri__ExecuteScalar_USCOREString (reqString,repString)==SOAP_OK)
    {
        return QString::fromStdString(repString->ExecuteScalar_USCOREStringResult->c_str ());
    }
    else
    {
        qDebug ()<<"Error";
        return NULL;
    }
}
