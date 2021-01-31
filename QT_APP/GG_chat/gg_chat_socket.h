#ifndef GG_CHAT_SOCKET_H
#define GG_CHAT_SOCKET_H
#include <QTcpSocket>


class gg_chat_socket : public QTcpSocket
{
    Q_OBJECT //konieczne makro w klasie ktora deklaruje sygnaly
public:
    gg_chat_socket(qintptr handle, QObject *parent = nullptr);
signals:
    void ReadyRead(gg_chat_socket *);
    void StateChanged(gg_chat_socket *, int);
};
#endif // GG_CHAT_SOCKET_H
