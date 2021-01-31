#include "gg_chat_connection_dialog.h"
#include "ui_gg_chat_connection_dialog.h"

gg_chat_connection_dialog::gg_chat_connection_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gg_chat_connection_dialog)
{
    ui->setupUi(this);
}

gg_chat_connection_dialog::~gg_chat_connection_dialog()
{
    delete ui;
}

void gg_chat_connection_dialog::on_ok_clicked()
{
    mHostname = ui->hostname->text();
    mPort = ui->port->value();
    accept();
}

void gg_chat_connection_dialog::on_cancel_clicked()
{
    reject();
}
