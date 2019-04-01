#include <QApplication>

#include <QtDeclarative/QDeclarativeView>
#include <QtDeclarative/QDeclarativeContext>
#include <QtDeclarative/QDeclarativeEngine>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

#include <QtGui>
#include <QDebug>

//#include <QNetworkAccessManager>
//#include <QNetworkProxy>

#include "DataObiect.h"
#include "GetData.h"
#include "RefreshData.h"

#include"SoapControl.h"


int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

//    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));

    DataObject dataObject;

    SoapControl soapControl;
    dataObject.setName ("001");
    dataObject.setPhoto (soapControl.getString ("select personphoto from person where personname='001'"));


//    BasicHttpBinding_USCOREIService service;

//    SOAP_CMAC _tempuri__ExecuteScalar_USCOREString* reqString=new SOAP_CMAC _tempuri__ExecuteScalar_USCOREString();
//    SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse* repString=new SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse();

//    std::string sql="select personphoto from person where personname='001'";

//    reqString->SqlTxt=&sql;
//    if(service.__tempuri__ExecuteScalar_USCOREString (reqString,repString)==SOAP_OK)
//    {
//        dataObject.setName ("001");
//        dataObject.setPhoto (QString::fromStdString(repString->ExecuteScalar_USCOREStringResult->c_str ()));
//    }
//    else
//    {
//        qDebug ()<<"Error";
//    }




    //ODBC-Action
//    QSqlDatabase db=QSqlDatabase::addDatabase ("QODBC","dbTest");
////    QString dsn=QString::fromLocal8Bit ("SqlServer2Qt");
//    QString dsn = QString::fromLocal8Bit("DRIVER={SQL SERVER};SERVER=BLUESKY007\\SQLEXPRESS;DATABASE=LTAM;uid=sa;pwd=123456");
//    db.setDatabaseName (dsn);
//    if(!db.open ())
//    {
//        qDebug()<<"Database Open Error";
//    }
//    else
//    {
//        QSqlQuery query(db);
//        query.exec("select * from person where personid=1");
//        while(query.next())
//        {
//            dataObject.setName (query.value (1).toString ());
//            dataObject.setPhoto (query.value (2).toString ());
//            qDebug()<<query.value (2).toString ();
//        }
//    }
//    db.close ();


//    QList<QObject*> dataList;
//    dataList.append(new DataObject("Item 1", "../pic/Camera.png"));
//    dataList.append(new DataObject("Item 2", "../pic/Calendar.png"));
//    dataList.append(new DataObject("Item 3", "../pic/Zipper.png"));
//    dataList.append(new DataObject("Item 4", "../pic/Favorite.png"));
//    dataList.append(new DataObject("Item 5", "../pic/Globe.png"));
//    dataList.append(new DataObject("Item 6", "../pic/IE.png"));
//    dataList.append(new DataObject("Item 7", "../pic/Speaker.png"));
//    dataList.append(new DataObject("Item 8", "../pic/Software.png"));
//    dataList.append(new DataObject("Item 9", "../pic/Audio.png"));
//    dataList.append(new DataObject("Item 10", "../pic/Games.png"));

    QDeclarativeView view;
    QDeclarativeContext *ctxt = view.rootContext();
    ctxt->setContextProperty("myData", &dataObject);
//    ctxt->setContextProperty("myModel", QVariant::fromValue(dataList));

    view.setSource(QUrl::fromLocalFile("../LT_Client/qml/Win7.qml"));

    QObject *item=view.rootObject ();
    GetDate gData;
    QObject::connect (item,
                      SIGNAL(noteButtonViewSelected(QString)),
                             &gData,
                             SLOT(getData(QString)));
    RefreshData rData;
//    QObject::connect (item,
//                      SIGNAL(refreshData()),
//                             &rData,
//                             SLOT(getAction()));
    QObject::connect (item,
                      SIGNAL(refreshData()),
                             &dataObject,
                      SLOT(getPhoteChange()));

    QDeclarativeEngine engine;
    qDebug() << engine.offlineStoragePath();


    view.setWindowFlags (Qt::WindowSystemMenuHint);
//    view.showFullScreen ();
    view.show ();

    return app.exec ();
}
