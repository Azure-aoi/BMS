#include "logindialog.h"
#include "registerdialog.h"
#include "ui_logindialog.h"
#include "services/AuthService.h"

#include <FluentQt/FluentQt.h>

#include <QButtonGroup>
#include <QMessageBox>
#include <QSettings>
#include <QSignalBlocker>

using namespace fluent::basicinput;


LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowTitle(QStringLiteral("图书管理系统 - 登录"));
    setWindowFlag(Qt::WindowSystemMenuHint, true);
    setWindowFlag(Qt::WindowMinimizeButtonHint, true);
    setWindowFlag(Qt::WindowMaximizeButtonHint, true);
    setWindowFlag(Qt::WindowCloseButtonHint, true);

    constexpr int inputHeight = 44;
    ui->AccountTextBox->setFixedHeight(inputHeight);
    ui->PasswordTextBox->setFixedHeight(inputHeight);

    auto *identityGroup = new QButtonGroup(this);
    identityGroup->setExclusive(true);
    identityGroup->addButton(ui->UserLoginBtn);
    identityGroup->addButton(ui->AdminLoginBtn);

    ui->AccountTextBox->setPlaceholderText(QStringLiteral("请输入学号或管理员账号"));
    ui->AccountTextBox->setClearButtonEnabled(true);
    ui->PasswordTextBox->setPlaceholderText(QStringLiteral("请输入密码"));

    ui->LoginBtn->setFluentStyle(Button::Accent);
    ui->LoginBtn->setText(QStringLiteral("登 入"));
    ui->LoginBtn->setDefault(true);

    ui->RegisterBtn->setFluentStyle(Button::Accent);
    ui->RegisterBtn->setText(QStringLiteral("注 册"));

    QSettings settings;
    const bool rememberAccount = settings.value(QStringLiteral("login/rememberAccount"), false).toBool();
    const QString savedAccount = settings.value(QStringLiteral("login/account")).toString();
    {

        const QSignalBlocker blocker(ui->RememberAccountCheckBox);
        ui->RememberAccountCheckBox->setChecked(rememberAccount && !savedAccount.isEmpty());
    }

    //有保存账号时焦点落到密码框，否则落到账号框。
    if (rememberAccount && !savedAccount.isEmpty()) {
        ui->AccountTextBox->setText(savedAccount);
        ui->PasswordTextBox->setFocus();
    } else {
        ui->AccountTextBox->setFocus();
    }

    //【自动连接】setupUi() 调用 QMetaObject::connectSlotsByName(this)，
    // 会按 on_控件名_信号名 的规则连接下方槽函数，无需再次手写 connect。
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::prepareForLogin()
{
    ui->PasswordTextBox->clear();
    ui->PasswordTextBox->setFocus();
}

void LoginDialog::on_LoginBtn_clicked()
{
    //【自动槽】LoginBtn::clicked -> on_LoginBtn_clicked -> onLoginButtonClicked。
    onLoginButtonClicked();
}

void LoginDialog::on_RegisterBtn_clicked()
{
    //【自动槽】RegisterBtn::clicked -> on_RegisterBtn_clicked -> openRegisterDialog。
    openRegisterDialog();
}

void LoginDialog::on_PasswordTextBox_returnPressed()
{
    //【自动槽】密码框回车 -> on_PasswordTextBox_returnPressed -> onLoginButtonClicked。
    onLoginButtonClicked();
}

void LoginDialog::on_AccountTextBox_returnPressed()
{
    //【自动槽】账号框回车只切换焦点，避免在空密码状态下直接提交。
    ui->PasswordTextBox->setFocus();
}

void LoginDialog::on_RememberAccountCheckBox_checkStateChanged(Qt::CheckState state)
{
    //【自动槽】鼠标点击或键盘空格切换复选框 -> updateRememberedAccount。
    updateRememberedAccount(state);
}

void LoginDialog::setAccount(const QString &account)
{

    ui->AccountTextBox->setText(account.trimmed());
    ui->AccountTextBox->setCursorPosition(ui->AccountTextBox->text().size());
    ui->PasswordTextBox->clear();
    ui->PasswordTextBox->setFocus();
}

void LoginDialog::onLoginButtonClicked()
{
    // 点击“登录”按钮信号槽，密码框回车也进入此函数
    //【跳转逻辑】submitLogin -> 读取输入框并进行非空校验
    //   -> QSettings::setValue/remove -> emit loginSucceeded -> QDialog::accept。
    // 校验失败时调用 QMessageBox::warning 和 QWidget::setFocus。
    const QString account = ui->AccountTextBox->text().trimmed();
    const QString password = ui->PasswordTextBox->password();

    // 校验失败时给出提示，并把键盘焦点送回需要修改的输入框。
    if (account.isEmpty()) {
        QMessageBox::warning(this, QStringLiteral("信息不完整"), QStringLiteral("请输入账号。"));
        ui->AccountTextBox->setFocus();
        return;
    }

    if (password.isEmpty()) {
        QMessageBox::warning(this, QStringLiteral("信息不完整"), QStringLiteral("请输入密码。"));
        ui->PasswordTextBox->setFocus();
        return;
    }

    const bool isAdmin = ui->AdminLoginBtn->isChecked();
    const LoginResult result = AuthService::login(account, password, isAdmin);
    if (!result.ok()) {
        QMessageBox::warning(this, QStringLiteral("登录失败"), result.message);
        return;
    }

    QSettings settings;
    const bool rememberAccount = ui->RememberAccountCheckBox->isChecked();
    settings.setValue(QStringLiteral("login/rememberAccount"), rememberAccount);
    if (rememberAccount) {
        settings.setValue(QStringLiteral("login/account"), account);
    } else {
        settings.remove(QStringLiteral("login/account"));
    }

    emit loginSucceeded(account, isAdmin);
    accept();
}

void LoginDialog::updateRememberedAccount(Qt::CheckState state)
{

    QSettings settings;
    settings.setValue(QStringLiteral("login/rememberAccount"), state == Qt::Checked);
    if (state != Qt::Checked) {
        settings.remove(QStringLiteral("login/account"));
    }
}

void LoginDialog::openRegisterDialog()
{

    RegisterDialog registerDialog(this);


    connect(&registerDialog, &RegisterDialog::registrationCompleted,
        this, [this](const QString &account) {
            setAccount(account);
        });
    registerDialog.exec();
}
