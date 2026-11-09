#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class RegisterDialog;
}
QT_END_NAMESPACE

namespace fluent::basicinput {
class ComboBox;
}

namespace fluent::layout {
class Field;
}

namespace fluent::textfields {
class LineEdit;
class PasswordBox;
}


class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog() override;

signals:
    // 调用链：submitRegistration -> emit registrationCompleted -> LoginDialog::setAccount
    void registrationCompleted(const QString &account);

private slots:

    void on_BackBtn_clicked();


    void on_SubmitBtn_clicked();

private:
    // 点击“提交注册”按钮信号槽，键盘 Enter 也进入此函数
    //【实现功能】收集姓名、学号、密码等数据并校验；
    // 调用链：submitRegistration -> clearValidation -> showFieldError/emit
    //   -> QDialog::accept。
    void submitRegistration();

    // 清理字段校验状态
    void clearValidation();

    // 显示指定字段错误
    void showFieldError(fluent::layout::Field *field, QWidget *editor, const QString &message);

    Ui::RegisterDialog *ui;
    fluent::textfields::LineEdit *m_idEditor = nullptr;
    fluent::textfields::LineEdit *m_nameEditor = nullptr;
    fluent::basicinput::ComboBox *m_genderEditor = nullptr;
    fluent::textfields::LineEdit *m_collegeEditor = nullptr;
    fluent::textfields::LineEdit *m_phoneEditor = nullptr;
    fluent::textfields::LineEdit *m_emailEditor = nullptr;
    fluent::textfields::LineEdit *m_addressEditor = nullptr;
    fluent::textfields::PasswordBox *m_passwordEditor = nullptr;
    fluent::textfields::PasswordBox *m_confirmPasswordEditor = nullptr;
    fluent::layout::Field *m_idField = nullptr;
    fluent::layout::Field *m_nameField = nullptr;
    fluent::layout::Field *m_genderField = nullptr;
    fluent::layout::Field *m_collegeField = nullptr;
    fluent::layout::Field *m_phoneField = nullptr;
    fluent::layout::Field *m_emailField = nullptr;
    fluent::layout::Field *m_addressField = nullptr;
    fluent::layout::Field *m_passwordField = nullptr;
    fluent::layout::Field *m_confirmPasswordField = nullptr;
};

#endif // REGISTERDIALOG_H
