#ifndef SOAPCONTROL_H
#define SOAPCONTROL_H

#include <QDialog>
#include <QString>


class SoapControl:public QDialog
{
    Q_OBJECT

public:
    QString getString(const QString &requestSQL);
};

#endif // SOAPCONTROL_H
