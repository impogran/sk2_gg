/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextEdit *textEdit;
    QPushButton *send;
    QPushButton *connect;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *message;
    QLineEdit *nickname;
    QPushButton *disconnect;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(798, 529);
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 781, 451));
        send = new QPushButton(Widget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(710, 500, 80, 25));
        connect = new QPushButton(Widget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(710, 10, 80, 25));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 174, 17));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 500, 91, 21));
        message = new QLineEdit(Widget);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(100, 500, 521, 25));
        nickname = new QLineEdit(Widget);
        nickname->setObjectName(QString::fromUtf8("nickname"));
        nickname->setGeometry(QRect(190, 10, 511, 25));
        disconnect = new QPushButton(Widget);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setGeometry(QRect(620, 500, 89, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        send->setText(QApplication::translate("Widget", "Wyslij", nullptr));
        connect->setText(QApplication::translate("Widget", "Polacz", nullptr));
        label->setText(QApplication::translate("Widget", "Nazwa uzytkownika (nick)", nullptr));
        label_2->setText(QApplication::translate("Widget", "Wiadomosc", nullptr));
        disconnect->setText(QApplication::translate("Widget", "Rozlacz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
