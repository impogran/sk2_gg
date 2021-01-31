#ifndef GG_CHAT_SERVER_H
#define GG_CHAT_SERVER_H

#include <QTcpServer>

class gg_chat_socket;

class gg_chat_server : public QTcpServer
{
    //deklaracje
public:
    gg_chat_server(QObject *parent = nullptr);
    bool startServer(quint16 port);
protected:
    void incomingConnection(qintptr handle);
private:
    QList<gg_chat_socket *> mSockets;

};

#endif // GG_CHAT_SERVER_H
