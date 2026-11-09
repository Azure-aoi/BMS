#include "ReaderProfileView.h"
#include "core/SessionManager.h"
#include "services/ReaderService.h"

#include <FluentQt/FluentQt.h>

#include <QDialog>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QTime>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::basicinput::ComboBox;
using fluent::textfields::Label;
using fluent::textfields::LineEdit;
using fluent::textfields::PasswordBox;

ReaderProfileView::ReaderProfileView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("ReaderProfileView"));
    buildUi();
}

ReaderProfileView::~ReaderProfileView() = default;

void ReaderProfileView::buildUi()
{
    const ::ReaderInfo backendReader = ReaderService::reader(SessionManager::userId());
    m_profile.readerId = backendReader.id;
    m_profile.studentNo = backendReader.studentNo;
    m_profile.name = backendReader.name;
    m_profile.gender = backendReader.gender;
    m_profile.categoryId = backendReader.categoryId;
    m_profile.categoryName = backendReader.categoryName;
    m_profile.department = backendReader.department;
    m_profile.phone = backendReader.phone;
    m_profile.email = backendReader.email;
    m_profile.address = backendReader.address;
    m_profile.isFrozen = backendReader.frozen;
    m_profile.createdAt = backendReader.createdAt;

    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(16);

    auto *title = new Label(QStringLiteral("个人信息"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("查看和维护个人资料，账号信息由学校统一认证。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *sectionLabel = new Label(QStringLiteral("基本资料"), this);
    sectionLabel->setFluentTypography(Typography::FontRole::BodyLargeStrong);
    sectionLabel->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(sectionLabel);

    auto *grid = new QGridLayout;
    grid->setHorizontalSpacing(20);
    grid->setVerticalSpacing(12);
    grid->setColumnStretch(1, 1);
    grid->setColumnMinimumWidth(0, 76);

    auto addField = [grid](int row, const QString &labelText, QWidget *field, QWidget *parent) {
        auto *label = new Label(labelText, parent);
        label->setFluentTypography(Typography::FontRole::Body);
        label->setTextColorRole(Label::TextColorRole::Secondary);
        grid->addWidget(label, row, 0);
        grid->addWidget(field, row, 1);
    };

    m_studentIdEdit = createField(m_profile.studentNo);
    m_nameEdit = createField(m_profile.name);
    m_genderEdit = new ComboBox(this);
    m_genderEdit->setObjectName(QStringLiteral("ReaderGenderCombo"));
    m_genderEdit->addItems({QStringLiteral("男"), QStringLiteral("女"),
                            QStringLiteral("其他")});
    m_genderEdit->setCurrentText(m_profile.gender);
    m_genderEdit->setFixedHeight(40);
    m_genderEdit->setEnabled(false);
    m_departmentEdit = createField(m_profile.department);
    m_phoneEdit = createField(m_profile.phone);
    m_emailEdit = createField(m_profile.email);
    m_addressEdit = createField(m_profile.address);

    addField(0, QStringLiteral("学号"), m_studentIdEdit, this);
    addField(1, QStringLiteral("姓名"), m_nameEdit, this);
    addField(2, QStringLiteral("性别"), m_genderEdit, this);
    addField(3, QStringLiteral("院系"), m_departmentEdit, this);
    addField(4, QStringLiteral("手机号"), m_phoneEdit, this);
    addField(5, QStringLiteral("邮箱"), m_emailEdit, this);
    addField(6, QStringLiteral("联系地址"), m_addressEdit, this);
    rootLayout->addLayout(grid);

    auto *actionLayout = new QHBoxLayout;
    m_editProfileButton = new Button(QStringLiteral("修改资料"), this);
    m_editProfileButton->setObjectName(QStringLiteral("EditProfileButton"));
    m_editProfileButton->setFluentStyle(Button::Accent);
    m_editProfileButton->setFluentLayout(Button::IconBefore);
    m_editProfileButton->setIconGlyph(Typography::Icons::Edit, Typography::IconSize::Standard,
                                      Typography::FontFamily::FluentIcons);
    m_editProfileButton->setFixedSize(112, 40);
    actionLayout->addWidget(m_editProfileButton);

    m_changePasswordButton = new Button(QStringLiteral("修改密码"), this);
    m_changePasswordButton->setObjectName(QStringLiteral("ChangePasswordButton"));
    m_changePasswordButton->setFluentStyle(Button::Subtle);
    m_changePasswordButton->setFluentLayout(Button::IconBefore);
    m_changePasswordButton->setIconGlyph(Typography::Icons::Lock, Typography::IconSize::Standard,
                                         Typography::FontFamily::FluentIcons);
    m_changePasswordButton->setFixedSize(112, 40);
    actionLayout->addWidget(m_changePasswordButton);
    actionLayout->addStretch();
    rootLayout->addLayout(actionLayout);
    rootLayout->addStretch();

    m_feedbackLabel = new Label(
        QStringLiteral("学号和学院信息暂不支持读者自行修改。"), this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_editProfileButton, &Button::clicked, this, [this] {
        toggleEditing();
    });
    connect(m_changePasswordButton, &Button::clicked, this, [this] {
        changePassword();
    });
}

LineEdit *ReaderProfileView::createField(const QString &value, bool readOnly)
{
    auto *field = new LineEdit(this);
    field->setText(value);
    field->setFixedHeight(40);
    field->setReadOnly(readOnly);
    m_fields.append(field);
    return field;
}

void ReaderProfileView::toggleEditing()
{
    setEditing(!m_editing);
}

void ReaderProfileView::setEditing(bool editing)
{
    m_editing = editing;
    for (LineEdit *field : m_fields) {
        field->setReadOnly(!editing);
    }
    m_studentIdEdit->setReadOnly(true);
    m_departmentEdit->setReadOnly(true);
    m_genderEdit->setEnabled(editing);
    if (!editing) {
        m_profile.name = m_nameEdit->text().trimmed();
        m_profile.gender = m_genderEdit->currentText();
        m_profile.phone = m_phoneEdit->text().trimmed();
        m_profile.email = m_emailEdit->text().trimmed();
        m_profile.address = m_addressEdit->text().trimmed();
        ::ReaderInfo backendReader;
        backendReader.id = m_profile.readerId;
        backendReader.studentNo = m_profile.studentNo;
        backendReader.name = m_profile.name;
        backendReader.gender = m_profile.gender;
        backendReader.categoryId = m_profile.categoryId;
        backendReader.department = m_profile.department;
        backendReader.phone = m_profile.phone;
        backendReader.email = m_profile.email;
        backendReader.address = m_profile.address;
        backendReader.frozen = m_profile.isFrozen;
        backendReader.createdAt = m_profile.createdAt;
        const ServiceResult result = ReaderService::updateProfile(backendReader);
        if (!result.ok()) {
            m_editing = true;
            setFeedback(result.message);
            return;
        }
        setFeedback(result.message);
    }
    m_editProfileButton->setText(editing ? QStringLiteral("保存资料")
                                         : QStringLiteral("修改资料"));
    setFeedback(editing
            ? QStringLiteral("正在编辑个人资料，学号和学院信息不可修改。")
            : QStringLiteral("个人资料已保存，等待后端接口接入。"));
}

void ReaderProfileView::changePassword()
{
    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("修改密码"));
    dialog.setMinimumSize(440, 360);

    auto *layout = new QVBoxLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setSpacing(12);

    auto *title = new Label(QStringLiteral("修改登录密码"), &dialog);
    title->setFluentTypography(Typography::FontRole::Subtitle);
    title->setTextColorRole(Label::TextColorRole::Primary);
    layout->addWidget(title);

    auto makePassword = [&dialog, layout](const QString &placeholder) {
        auto *field = new PasswordBox(&dialog);
        field->setPlaceholderText(placeholder);
        field->setFixedHeight(40);
        layout->addWidget(field);
        return field;
    };
    PasswordBox *currentPassword = makePassword(QStringLiteral("当前密码"));
    PasswordBox *newPassword = makePassword(QStringLiteral("新密码，至少 8 位"));
    PasswordBox *confirmPassword = makePassword(QStringLiteral("再次输入新密码"));

    auto *feedback = new Label(&dialog);
    feedback->setFluentTypography(Typography::FontRole::Caption);
    feedback->setTextColorRole(Label::TextColorRole::Secondary);
    layout->addWidget(feedback);
    layout->addStretch();

    auto *buttons = new QHBoxLayout;
    buttons->addStretch();
    auto *cancelButton = new Button(QStringLiteral("取消"), &dialog);
    cancelButton->setFluentStyle(Button::Subtle);
    cancelButton->setFixedSize(88, 40);
    auto *saveButton = new Button(QStringLiteral("确认修改"), &dialog);
    saveButton->setFluentStyle(Button::Accent);
    saveButton->setFixedSize(104, 40);
    buttons->addWidget(cancelButton);
    buttons->addWidget(saveButton);
    layout->addLayout(buttons);

    connect(cancelButton, &Button::clicked, &dialog, &QDialog::reject);
    connect(saveButton, &Button::clicked, &dialog, [=, &dialog] {
        if (currentPassword->password().isEmpty()) {
            feedback->setText(QStringLiteral("请输入当前密码。"));
            return;
        }
        if (newPassword->password().size() < 8) {
            feedback->setText(QStringLiteral("新密码至少需要 8 位。"));
            return;
        }
        if (newPassword->password() != confirmPassword->password()) {
            feedback->setText(QStringLiteral("两次输入的新密码不一致。"));
            return;
        }
        const ServiceResult result = ReaderService::changePassword(
            SessionManager::userId(),
            currentPassword->password(),
            newPassword->password(),
            confirmPassword->password());
        if (!result.ok()) {
            feedback->setText(result.message);
            return;
        }
        dialog.accept();
        setFeedback(result.message);
    });

    if (dialog.exec() == QDialog::Accepted) {
        setFeedback(QStringLiteral("密码修改成功。"));
    }
}

void ReaderProfileView::setFeedback(const QString &message)
{
    m_feedbackLabel->setText(message);
}

QWidget *createReaderProfileView(QWidget *parent)
{
    return new ReaderProfileView(parent);
}
