#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "services/ReaderService.h"

#include <FluentQt/FluentQt.h>

#include <QGridLayout>
#include <QMessageBox>
#include <QRegularExpression>

using namespace fluent;


RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{


    ui->setupUi(this);
    setWindowTitle(QStringLiteral("图书管理系统 - 注册"));

    auto setupEditor = [](auto *editor) {
        editor->setFixedHeight(40);
        editor->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    };

    auto makeField = [this](const QString &label, QWidget *editor, bool required = false) {
        auto *field = new layout::Field(ui->RegisterContent);
        field->setLabelText(label);
        field->setRequired(required);
        field->setEditor(editor, WidgetOwnership::Owned);
        return field;
    };

    m_idEditor = new textfields::LineEdit(ui->RegisterContent);
    m_idEditor->setPlaceholderText(QStringLiteral("请输入学号"));
    m_idEditor->setMaxLength(20);
    setupEditor(m_idEditor);
    m_idField = makeField(QStringLiteral("学号"), m_idEditor, true);
    //m_idField->setHelperText(QStringLiteral("如 25334163"));

    m_nameEditor = new textfields::LineEdit(ui->RegisterContent);
    m_nameEditor->setPlaceholderText(QStringLiteral("请输入真实姓名"));
    m_nameEditor->setMaxLength(30);
    setupEditor(m_nameEditor);
    m_nameField = makeField(QStringLiteral("姓名"), m_nameEditor, true);

    m_genderEditor = new basicinput::ComboBox(ui->RegisterContent);
    m_genderEditor->addItems({QStringLiteral("男"), QStringLiteral("女")});
    setupEditor(m_genderEditor);
    m_genderField = makeField(QStringLiteral("性别"), m_genderEditor);

    m_collegeEditor = new textfields::LineEdit(ui->RegisterContent);
    m_collegeEditor->setPlaceholderText(QStringLiteral("请输入所在学院"));
    m_collegeEditor->setMaxLength(40);
    setupEditor(m_collegeEditor);
    m_collegeField = makeField(QStringLiteral("学院"), m_collegeEditor, true);

    m_phoneEditor = new textfields::LineEdit(ui->RegisterContent);
    m_phoneEditor->setPlaceholderText(QStringLiteral("选填"));
    m_phoneEditor->setMaxLength(11);
    setupEditor(m_phoneEditor);
    m_phoneField = makeField(QStringLiteral("手机号"), m_phoneEditor);

    m_emailEditor = new textfields::LineEdit(ui->RegisterContent);
    m_emailEditor->setPlaceholderText(QStringLiteral("请输入邮箱"));
    m_emailEditor->setMaxLength(80);
    setupEditor(m_emailEditor);
    m_emailField = makeField(QStringLiteral("邮箱"), m_emailEditor, true);

    m_addressEditor = new textfields::LineEdit(ui->RegisterContent);
    m_addressEditor->setPlaceholderText(QStringLiteral("选填"));
    m_addressEditor->setMaxLength(120);
    setupEditor(m_addressEditor);
    m_addressField = makeField(QStringLiteral("联系地址"), m_addressEditor);

    m_passwordEditor = new textfields::PasswordBox(ui->RegisterContent);
    m_passwordEditor->setPlaceholderText(QStringLiteral("至少 8 位"));
    setupEditor(m_passwordEditor);
    m_passwordField = makeField(QStringLiteral("登录密码"), m_passwordEditor, true);

    m_confirmPasswordEditor = new textfields::PasswordBox(ui->RegisterContent);
    m_confirmPasswordEditor->setPlaceholderText(QStringLiteral("再次输入密码"));
    setupEditor(m_confirmPasswordEditor);
    m_confirmPasswordField = makeField(QStringLiteral("确认密码"), m_confirmPasswordEditor, true);

    auto *grid = ui->RegisterLayout;
    grid->addWidget(m_idField, 0, 0);
    grid->addWidget(m_nameField, 0, 1);
    grid->addWidget(m_genderField, 1, 0);
    grid->addWidget(m_collegeField, 1, 1);
    grid->addWidget(m_phoneField, 2, 0);
    grid->addWidget(m_emailField, 2, 1);
    grid->addWidget(m_addressField, 3, 0, 1, 2);
    grid->addWidget(m_passwordField, 4, 0);
    grid->addWidget(m_confirmPasswordField, 4, 1);
    grid->setColumnStretch(0, 1);
    grid->setColumnStretch(1, 1);
    grid->setRowStretch(5, 1);

    //【键盘逻辑】返回按钮取消默认行为，防止 Enter 误关闭；
    // 提交按钮设为默认按钮，Enter 和鼠标点击都会进入注册校验。
    ui->BackBtn->setFluentStyle(basicinput::Button::Standard);
    ui->BackBtn->setAutoDefault(false);
    ui->SubmitBtn->setFluentStyle(basicinput::Button::Accent);
    ui->SubmitBtn->setDefault(true);

    //【键盘/鼠标逻辑】输入、粘贴或删除触发 textChanged，清除该字段旧错误。
    // 调用链：QLineEdit::textChanged -> Field::setValidationState/setValidationMessage。
    const auto connectReset = [](QLineEdit *editor, layout::Field *field) {
        connect(editor, &QLineEdit::textChanged, field, [field]() {
            field->setValidationState(layout::Field::ValidationState::None);
            field->setValidationMessage(QString());
        });
    };

    connectReset(m_idEditor, m_idField);
    connectReset(m_nameEditor, m_nameField);
    connectReset(m_collegeEditor, m_collegeField);
    connectReset(m_phoneEditor, m_phoneField);
    connectReset(m_emailEditor, m_emailField);
    connectReset(m_addressEditor, m_addressField);
    connectReset(m_passwordEditor, m_passwordField);
    connectReset(m_confirmPasswordEditor, m_confirmPasswordField);

    //【鼠标/键盘逻辑】下拉框选择或方向键切换触发 currentTextChanged。
    // 调用链：QComboBox::currentTextChanged -> Field::setValidationState/setValidationMessage。
    connect(m_genderEditor, &QComboBox::currentTextChanged, this, [this]() {
        m_genderField->setValidationState(layout::Field::ValidationState::None);
        m_genderField->setValidationMessage(QString());
    });

    //【焦点逻辑】页面打开后默认聚焦学号框。
    m_idEditor->setFocus();
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}


void RegisterDialog::on_BackBtn_clicked()
{
    //【自动槽】BackBtn::clicked -> on_BackBtn_clicked -> QDialog::reject。
    reject();
}

void RegisterDialog::on_SubmitBtn_clicked()
{
    //【自动槽】SubmitBtn::clicked -> onSubmitBtn_clicked -> submitRegistration。
    submitRegistration();
}

void RegisterDialog::clearValidation()
{
    //【被调用】清理字段校验状态
    // 调用链：submitRegistration -> clearValidation
    //   -> 各 Field::setValidationState/setValidationMessage。
    for (layout::Field *field : {m_idField, m_nameField, m_genderField, m_collegeField,
             m_phoneField, m_emailField, m_addressField, m_passwordField,
             m_confirmPasswordField}) {
        field->setValidationState(layout::Field::ValidationState::None);
        field->setValidationMessage(QString());
    }
}

void RegisterDialog::showFieldError(layout::Field *field, QWidget *editor, const QString &message)
{
    //【被调用】显示指定字段错误，并定位键盘焦点
    // 调用链：submitRegistration -> showFieldError
    //   -> Field::setValidationState/setValidationMessage -> QWidget::setFocus。
    field->setValidationState(layout::Field::ValidationState::Error);
    field->setValidationMessage(message);
    if (!editor->hasFocus()) {
        editor->setFocus();
    }
}

void RegisterDialog::submitRegistration()
{
    // 点击“提交注册”按钮信号槽，键盘 Enter 也进入此函数
    //【实现功能】submitRegistration -> clearValidation
    //   -> showFieldError（校验失败）
    //   -> emit registrationCompleted -> QDialog::accept（校验通过）。
    clearValidation();

    // 文本字段去掉首尾空格；密码保留原始内容，避免无意改变用户密码。
    const QString id = m_idEditor->text().trimmed();
    const QString name = m_nameEditor->text().trimmed();
    const QString college = m_collegeEditor->text().trimmed();
    const QString phone = m_phoneEditor->text().trimmed();
    const QString email = m_emailEditor->text().trimmed();
    const QString password = m_passwordEditor->password();
    const QString confirmPassword = m_confirmPasswordEditor->password();

    //【格式校验】学号限制为 4-20 位数字。
    if (!QRegularExpression(QStringLiteral("^[0-9]{4,20}$")).match(id).hasMatch()) {
        showFieldError(m_idField, m_idEditor, QStringLiteral("请输入 4-20 位数字学号"));
        return;
    }
    //【非空校验】姓名和学院为必填项。
    if (name.isEmpty()) {
        showFieldError(m_nameField, m_nameEditor, QStringLiteral("请输入姓名"));
        return;
    }
    if (college.isEmpty()) {
        showFieldError(m_collegeField, m_collegeEditor, QStringLiteral("请输入学院"));
        return;
    }
    //【格式校验】手机号选填，填写后检查大陆手机号格式。
    if (!phone.isEmpty()
        && !QRegularExpression(QStringLiteral("^1[3-9][0-9]{9}$")).match(phone).hasMatch()) {
        showFieldError(m_phoneField, m_phoneEditor, QStringLiteral("请输入有效的 11 位手机号"));
        return;
    }
    //【格式校验】邮箱必填，使用基础格式校验。
    if (!QRegularExpression(QStringLiteral("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$"))
             .match(email)
             .hasMatch()) {
        showFieldError(m_emailField, m_emailEditor, QStringLiteral("请输入有效的邮箱地址"));
        return;
    }
    //【密码校验】密码至少 8 位，且两次输入一致。
    if (password.size() < 8) {
        showFieldError(m_passwordField, m_passwordEditor, QStringLiteral("密码至少需要 8 位"));
        return;
    }
    if (password != confirmPassword) {
        showFieldError(m_confirmPasswordField, m_confirmPasswordEditor, QStringLiteral("两次输入的密码不一致"));
        return;
    }

    RegisterRequest request;
    request.studentNo = id;
    request.name = name;
    request.gender = m_genderEditor->currentText();
    request.categoryId = 1;
    for (const ReaderCategory &category : ReaderService::categories()) {
        if (category.name == QStringLiteral("本科生")) {
            request.categoryId = category.id;
            break;
        }
    }
    request.department = college;
    request.phone = phone;
    request.email = email;
    request.address = m_addressEditor->text().trimmed();
    request.password = password;

    const ServiceResult result = ReaderService::registerReader(request);
    if (!result.ok()) {
        QMessageBox::warning(this, QStringLiteral("注册失败"), result.message);
        return;
    }

    emit registrationCompleted(id);
    accept();
}
