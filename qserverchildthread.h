#ifndef QSERVERCHILDTHREAD_H
#define QSERVERCHILDTHREAD_H

#include <QObject>
#include <QtNetwork>
#include <QThread>
#include <QTcpSocket>

class QServerChildThread : public QThread
{
    Q_OBJECT
public:
    QServerChildThread(qintptr, QObject *);
    void run();

private:
    qintptr socketDescriptor;
    QTcpSocket *clientConnection;

    int waitForInput(QTcpSocket *);
    QString readLine(QTcpSocket *);
    void writeLine(QTcpSocket *, const QString &);

public slots:
    void onResponse();

signals:
    void error(QTcpSocket::SocketError);

    // Signals used for controlling the player
    void playSong(quint32);
    void setPlaylist(QString);
    void setVolume(int);
    void pauseSong();
    void stopSong();
};

#endif // QSERVERCHILDTHREAD_H
