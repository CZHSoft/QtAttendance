#ifndef GETDATA_H
#define GETDATA_H

#include <QDialog>

class GetDate:public QDialog
{
    Q_OBJECT

private slots:
    void getData(const QString &str);

};

#endif // GETDATA_H
