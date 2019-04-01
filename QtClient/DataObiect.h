#ifndef DATAOBIECT_H
#define DATAOBIECT_H

#include <QObject>

class DataObject : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString photo READ photo WRITE setPhoto NOTIFY photoChanged)

public:
    DataObject(QObject *parent=0);
    DataObject(const QString &_m1, const QString &_m2, QObject *parent=0);

    QString name() const;
    void setName(const QString &name);

    QString photo() const;
    void setPhoto(const QString &photo);

signals:
    void nameChanged();
    void photoChanged();

private slots:
    void getPhoteChange();

private:
    QString m1;
    QString m2;
};

#endif // DATAOBIECT_H
