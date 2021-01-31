#include "gg_chat_server.h"
#include "gg_chat_socket.h"
#include <QTextStream>
#include <QDebug>

gg_chat_server::gg_chat_server(QObject *parent)
    :QTcpServer(parent)
{
}

bool gg_chat_server::startServer(quint16 port)
{
    return listen(QHostAddress::Any, port);
}

void gg_chat_server::incomingConnection(qintptr handle)
{
    qDebug() << "Client connected with handle: " << handle;
    auto socket = new gg_chat_socket(handle, this); //tworzy socket
    mSockets << socket; //przypisanie do listy socketow

    for (auto i : mSockets) {
        QTextStream T(i);
        T << "Klient dolaczyl do chatu o nicku: ";
        i->flush(); //zwolnienie pamieci
    }

    connect(socket, &gg_chat_socket::ReadyRead, [&](gg_chat_socket *S) //wiadomosci
    {
        qDebug() << "A message has been sent ";
        QTextStream T(S);
        auto text = T.readAll();

        for (auto i : mSockets) {
            QTextStream K(i);
            K << text;
            i->flush();
        }
    });

    connect(socket, &gg_chat_socket::StateChanged, //zmiana stanu, np wylogowanie
            [&](gg_chat_socket *S, int ST)
    {
        if (ST == QTcpSocket::UnconnectedState) {
            qDebug() << "Client disconnected with handle: " << S->socketDescriptor();
            mSockets.removeOne(S);
            for (auto i : mSockets) {
                QTextStream K(i);
                K << "Server: klient wyszedl z chatu ";
                i->flush();
            }
        }
    });
}
