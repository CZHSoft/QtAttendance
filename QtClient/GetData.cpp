#include <QtGui>
#include <QScreen>
#include <QDebug>

#include "GetData.h"

void GetDate::getData (const QString &str)
{
    QMessageBox::information(this,
                             "Information dialog",
                             str);
    qDebug() << "log";
}

