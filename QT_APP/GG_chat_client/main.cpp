#include "widget.h"
#include "gg_chat_connection_dialog.h"
#include "ui_gg_chat_connection_dialog.h"
#include <QWidget>
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //inicjuje system okien i konstruuje obiekt aplikacji
    a.setStyle("fusion"); //wyglad
    Widget w;
    w.show();
    return a.exec();
}
