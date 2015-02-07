#ifndef QSONGSQUEUE_H
#define QSONGSQUEUE_H

#include <QObject>
#include <QJsonDocument>
#include <QByteArray>
#include <QSettings>
#include "qconfig.h"

class QSongsQueue : public QObject
{
    Q_OBJECT
protected:
    QQueue<int> songs;

public:
    QSongsQueue();

    bool setJson(const QByteArray &);

public slots:

signals:

};

#endif // QSONGSQUEUE_H
