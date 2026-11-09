#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginDialog;
}
QT_END_NAMESPACE

// ===================== 前端负责实现 (UI slots) =====================
class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog() override;

    void prepareForLogin();

    //【被调用】注册成功后回填登录账号
    // 调用链：RegisterDialog::registrationCompleted -> setAccount
    //   -> QLineEdit::setText -> QWidget::setFocus
    void setAccount(const QString &account);

signals:
    //【信号】登录成功后通知主流程
    // 参数：account 登录账号；adminMode 是否管理员模式
    // 调用链：onLoginButtonClicked -> emit loginSucceeded
    //   -> main.cpp lambda -> MainWindow::show
    void loginSucceeded(const QString &account, bool adminMode);

private slots:
    // 自动连接：LoginBtn::clicked -> on_LoginBtn_clicked。
    void on_LoginBtn_clicked();

    // 自动连接：RegisterBtn::clicked -> on_RegisterBtn_clicked。
    void on_RegisterBtn_clicked();

    // 自动连接：PasswordTextBox::returnPressed -> on_PasswordTextBox_returnPressed。
    void on_PasswordTextBox_returnPressed();

    // 自动连接：AccountTextBox::returnPressed -> on_AccountTextBox_returnPressed。
    void on_AccountTextBox_returnPressed();

    // 自动连接：RememberAccountCheckBox::checkStateChanged
    //   -> on_RememberAccountCheckBox_checkStateChanged。
    void on_RememberAccountCheckBox_checkStateChanged(Qt::CheckState state);

private:
    // 点击“注册”按钮信号槽
    //【跳转逻辑】创建 RegisterDialog，并以 exec() 模态打开；
    // 注册成功后通过 registrationCompleted -> setAccount 回填账号。
    void openRegisterDialog();

    // 点击“登录”按钮信号槽，密码框回车也进入此函数
    //【跳转逻辑】onLoginButtonClicked -> 非空校验 -> QSettings::setValue
    //   -> emit loginSucceeded -> QDialog::accept。
    void onLoginButtonClicked();

    // “记住账号”复选框状态变化槽
    //【实现功能】checkStateChanged -> updateRememberedAccount
    //   -> QSettings::setValue/remove。
    void updateRememberedAccount(Qt::CheckState state);

    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
