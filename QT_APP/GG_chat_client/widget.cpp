#include "widget.h"
#include "ui_widget.h"
#include "gg_chat_connection_dialog.h"
#include <QTcpSocket>
#include <QTextStream>

Widget::Widget(QWidget *parent) //konstruuje widzet
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mSocket = new QTcpSocket(this); //tworzy socket

    connect(mSocket, &QTcpSocket::readyRead, [&]() {
        QTextStream T(mSocket);
        auto text = T.readAll();
        ui->textEdit->append(text);
    });
}

Widget::~Widget() //destruktor
{
    delete ui;
}

void Widget::on_send_clicked()
{
    QTextStream T(mSocket); //konstruuje QTextStream ktory dziala na tablicy T(mSocket)
    T << ui->nickname->text() << ": " << ui->message->text(); //format nick : wiadomosc
    mSocket->flush(); //czyszczenie
    ui->message->clear(); //czyszczenie
}

void Widget::on_connect_clicked()
{
    //wpisanie zlych danych
    gg_chat_connection_dialog D(this);
    if(D.exec() == QDialog::Rejected) {
        return;
    }
    mSocket->connectToHost(D.hostname(),D.port()); //dolaczenie do servera
    QTextStream T(mSocket); //konstruuje QTextStream ktory dziala na tablicy T(mSocket)
    T << ui->nickname->text();
    mSocket->flush(); //zwolnienie
}

void Widget::on_disconnect_clicked()
{
    mSocket->disconnectFromHost(); //rozlaczenie z serverem
}
