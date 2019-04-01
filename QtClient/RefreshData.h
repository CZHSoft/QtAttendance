#ifndef REFRESHDATA_H
#define REFRESHDATA_H

#include <QDialog>
#include "DataObiect.h"


class RefreshData:public QDialog
{
    Q_OBJECT

private slots:
    void getAction();
    void setDate();

};

#endif // REFRESHDATA_H
