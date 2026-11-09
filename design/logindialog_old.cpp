#include "logindialog_old.h"
#include "ui_logindialog.h"
#include <qbuttongroup.h>

using namespace fluent::textfields;
using namespace fluent::basicinput;


LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    QButtonGroup *group = new QButtonGroup(this);
    group->setExclusive(true);
    group->addButton(ui->UserLoginBtn);
    group->addButton(ui->AdminLoginBtn);

    //设置账号密码输入框相关设计
    ui->AccountTextBox->setPlaceholderText("请输入账号");
    ui->AccountTextBox->setClearButtonEnabled(true);

    ui->PasswordTextBox->setPlaceholderText("请输入密码");

    //登入按钮相关ui设计
    ui->LoginBtn->setFluentStyle(Button::Accent);
    ui->LoginBtn->setText("登 入");

    //注册按钮相关ui设计
    ui->RegisterBtn->setFluentStyle(Button::Accent);
    ui->RegisterBtn->setText("注 册");

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

//先获取账号输入框和密码输入框的文本,判断非空
//调用 AccountTextBox->text() 和 PasswordTextBox->text();
//先检查当前登入模式为用户登入还是管理员登入选择不同逻辑
// 检查是否为用户登入，调用 ui->UserLoginBtn->isChecked(); 检查是否为管理员登入，调用 ui->AdminLoginBtn->isChecked();
void LoginDialog::on_LoginBtn_clicked()
{
    const QString account = ui->AccountTextBox->text();
    const QString password = ui->PasswordTextBox->text();


}

void LoginDialog::on_RememberAccountCheckBox_checkStateChanged(const Qt::CheckState &arg1)
{

}


