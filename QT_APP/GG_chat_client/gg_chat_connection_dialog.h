#ifndef GG_CHAT_CONNECTION_DIALOG_H
#define GG_CHAT_CONNECTION_DIALOG_H

#include <QDialog>

namespace Ui {
class gg_chat_connection_dialog;
}

class gg_chat_connection_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit gg_chat_connection_dialog(QWidget *parent = nullptr);
    ~gg_chat_connection_dialog();
    QString hostname() const;
    quint16 port() const;
private slots:
    void on_ok_clicked();
    void on_cancel_clicked();

private:
    Ui::gg_chat_connection_dialog *ui;
    QString mHostname;
    quint16 mPort;
};

inline QString gg_chat_connection_dialog::hostname() const {
    return mHostname;
}
inline quint16 gg_chat_connection_dialog::port() const {
    return mPort;
}

#endif // GG_CHAT_CONNECTION_DIALOG_H
