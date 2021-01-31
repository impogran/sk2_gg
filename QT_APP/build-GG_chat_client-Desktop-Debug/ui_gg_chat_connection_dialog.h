/********************************************************************************
** Form generated from reading UI file 'gg_chat_connection_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GG_CHAT_CONNECTION_DIALOG_H
#define UI_GG_CHAT_CONNECTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gg_chat_connection_dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *hostname;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *port;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *gg_chat_connection_dialog)
    {
        if (gg_chat_connection_dialog->objectName().isEmpty())
            gg_chat_connection_dialog->setObjectName(QString::fromUtf8("gg_chat_connection_dialog"));
        gg_chat_connection_dialog->resize(533, 134);
        verticalLayout_2 = new QVBoxLayout(gg_chat_connection_dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(gg_chat_connection_dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        hostname = new QLineEdit(gg_chat_connection_dialog);
        hostname->setObjectName(QString::fromUtf8("hostname"));

        horizontalLayout->addWidget(hostname);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(gg_chat_connection_dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        port = new QSpinBox(gg_chat_connection_dialog);
        port->setObjectName(QString::fromUtf8("port"));
        port->setMaximum(9999);

        formLayout->setWidget(0, QFormLayout::FieldRole, port);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ok = new QPushButton(gg_chat_connection_dialog);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout_2->addWidget(ok);

        cancel = new QPushButton(gg_chat_connection_dialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout_2->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(gg_chat_connection_dialog);

        QMetaObject::connectSlotsByName(gg_chat_connection_dialog);
    } // setupUi

    void retranslateUi(QDialog *gg_chat_connection_dialog)
    {
        gg_chat_connection_dialog->setWindowTitle(QApplication::translate("gg_chat_connection_dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("gg_chat_connection_dialog", "Nazwa hosta", nullptr));
        label_2->setText(QApplication::translate("gg_chat_connection_dialog", "Port", nullptr));
        ok->setText(QApplication::translate("gg_chat_connection_dialog", "Zaloguj", nullptr));
        cancel->setText(QApplication::translate("gg_chat_connection_dialog", "Wyjdz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gg_chat_connection_dialog: public Ui_gg_chat_connection_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GG_CHAT_CONNECTION_DIALOG_H
