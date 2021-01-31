#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include "gg_chat_server.h"
#include "gg_chat_socket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    gg_chat_server Server; //
    if (!Server.startServer(1234)) { //host port 1234
        qDebug() << "Error: " << Server.errorString(); //blad
        return 1;
    }
    qDebug() << "Server has started"; //wyswietlane w konsoli po poprawnym uruchomieniu
    return a.exec();
}
