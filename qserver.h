#ifndef QSERVER_H
#define QSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSettings>
#include "qserverchildthread.h"
#include "lib/grooveshark/qplayer.h"
#include "qconfig.h"

class QServer : public QTcpServer
{
    Q_OBJECT
protected:
    void incomingConnection(qintptr);

public:
    QServer(QObject *parent = 0);

public slots:
    void playSong(quint32);
    void pauseSong();
    void stopSong();
    void setVolume(int);

    // Handle client socket errors
    void onClientSocketError(QTcpSocket::SocketError);

signals:
    void finished();
    void sendCommand(Player::Command, quint32 param1 = 0);

};

#endif // QSERVER_H
