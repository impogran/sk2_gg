 #include "gg_chat_socket.h"

gg_chat_socket::gg_chat_socket(qintptr handle, QObject *parent)
    : QTcpSocket(parent)
{
    setSocketDescriptor(handle);

    connect(this, &gg_chat_socket::readyRead, [&]() { //kto (nadawca), jaki sygnal, oraz lambda expression ktory
        //oznacza ze wszystkie zmienne do ktorych sie odwolujemy sa przechwytywane przez odniesienie
        emit ReadyRead(this); //emitujemy sygnal
    });

    connect(this, &gg_chat_socket::stateChanged, [&](int S) {
        emit StateChanged(this, S);
    });
}
