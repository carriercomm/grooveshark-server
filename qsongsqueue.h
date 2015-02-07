#ifndef QSONGSQUEUE_H
#define QSONGSQUEUE_H

#include <QObject>
#include <QSettings>
#include "qconfig.h"

class QSongsQueue : public QObject
{
    Q_OBJECT
protected:
    void incomingConnection(qintptr);

public:
    QSongsQueue();

public slots:

signals:

};

#endif // QSONGSQUEUE_H
