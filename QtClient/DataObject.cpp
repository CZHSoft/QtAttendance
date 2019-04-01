#include <QDebug>
#include "DataObiect.h"

DataObject::DataObject(QObject *parent)
    : QObject(parent)
{
}

DataObject::DataObject(const QString &name, const QString &photo, QObject *parent)
    : QObject(parent), m1(name), m2(photo)
{

}

QString DataObject::name() const
{
    return m1;
}

void DataObject::setName(const QString &name)
{
    if (name != m1) {
        m1 = name;
        emit nameChanged();
    }
}

QString DataObject::photo() const
{
    return m2;
}

void DataObject::setPhoto(const QString &photo)
{
    if (photo != m2) {
        m2 = photo;
        emit photoChanged();
    }
}

void DataObject::getPhoteChange ()
{

    this->setPhoto ("http://198.168.0.253/testfiletran/picture/person/2.jpg");
//    m2 = "http://localhost/testfiletran/picture/person/2.jpg";
    qDebug ()<<m2;
}
