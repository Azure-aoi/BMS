#ifndef LOGINDIALOG_OLD_H
#define LOGINDIALOG_OLD_H

#include <QDialog>
#include <QButtonGroup>


namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;

private slots:

    void on_LoginBtn_clicked();
    void on_RememberAccountCheckBox_checkStateChanged(const Qt::CheckState &arg1);
};

#endif // LOGINDIALOG_OLD_H
