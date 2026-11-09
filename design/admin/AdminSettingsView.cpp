#include "AdminSettingsView.h"
#include "services/ConfigService.h"

#include <FluentQt/FluentQt.h>

#include <QHBoxLayout>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::textfields::Label;
using fluent::textfields::NumberBox;

AdminSettingsView::AdminSettingsView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("AdminSettingsView"));
    buildUi();
    loadConfig();
}

AdminSettingsView::~AdminSettingsView() = default;

void AdminSettingsView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(16);

    auto *title = new Label(QStringLiteral("系统设置"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("配置项对应 system_config 表，使用 config_key 和 config_value 保存。"),
        this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *sectionLabel = new Label(QStringLiteral("借阅规则"), this);
    sectionLabel->setFluentTypography(Typography::FontRole::BodyLargeStrong);
    sectionLabel->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(sectionLabel);

    auto *formLayout = new QHBoxLayout;
    formLayout->setSpacing(20);

    auto addSetting = [this, formLayout](const QString &titleText, const QString &keyText,
                                         NumberBox **box, int minimum, int maximum, int value) {
        auto *group = new QWidget(this);
        auto *layout = new QVBoxLayout(group);
        layout->setContentsMargins(0, 0, 0, 0);
        layout->setSpacing(6);

        auto *label = new Label(titleText, group);
        label->setFluentTypography(Typography::FontRole::BodyStrong);
        label->setTextColorRole(Label::TextColorRole::Primary);
        layout->addWidget(label);

        *box = new NumberBox(group);
        (*box)->setObjectName(keyText);
        (*box)->setRange(minimum, maximum);
        (*box)->setDisplayPrecision(0);
        (*box)->setValue(value);
        (*box)->setFixedHeight(40);
        layout->addWidget(*box);
        formLayout->addWidget(group, 1);
    };

    addSetting(QStringLiteral("借期天数"), QStringLiteral("borrow_days"),
               &m_borrowDaysBox, 1, 365, 30);
    addSetting(QStringLiteral("最多续借次数"), QStringLiteral("max_renew_count"),
               &m_maxRenewCountBox, 0, 20, 1);
    rootLayout->addLayout(formLayout);

    auto *description = new Label(
        QStringLiteral(
            "borrow_days：新借阅记录的应还日期距离借出日期的天数。\n"
            "max_renew_count：单条借阅记录允许续借的最大次数。"),
        this);
    description->setWordWrap(true);
    description->setFluentTypography(Typography::FontRole::Body);
    description->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(description);

    auto *buttonLayout = new QHBoxLayout;
    m_saveButton = new Button(QStringLiteral("保存设置"), this);
    m_saveButton->setObjectName(QStringLiteral("SaveSettingsButton"));
    m_saveButton->setFluentStyle(Button::Accent);
    m_saveButton->setFluentLayout(Button::IconBefore);
    m_saveButton->setIconGlyph(Typography::Icons::Save, Typography::IconSize::Standard,
                               Typography::FontFamily::FluentIcons);
    m_saveButton->setFixedSize(116, 40);
    buttonLayout->addWidget(m_saveButton);

    m_resetButton = new Button(QStringLiteral("恢复默认"), this);
    m_resetButton->setObjectName(QStringLiteral("ResetSettingsButton"));
    m_resetButton->setFluentStyle(Button::Subtle);
    m_resetButton->setFluentLayout(Button::IconBefore);
    m_resetButton->setIconGlyph(Typography::Icons::Refresh, Typography::IconSize::Standard,
                                Typography::FontFamily::FluentIcons);
    m_resetButton->setFixedSize(116, 40);
    buttonLayout->addWidget(m_resetButton);
    buttonLayout->addStretch();
    rootLayout->addLayout(buttonLayout);
    rootLayout->addStretch();

    m_feedbackLabel = new Label(this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_saveButton, &Button::clicked, this, [this] { saveConfig(); });
    connect(m_resetButton, &Button::clicked, this, [this] { resetDefaults(); });
}

void AdminSettingsView::loadConfig()
{
    m_borrowDaysBox->setValue(ConfigService::borrowDays());
    m_maxRenewCountBox->setValue(ConfigService::maxRenewCount());
    setFeedback(QStringLiteral("系统设置已加载。"));
    return;

    /*
        const QMap<QString, QString> values = ConfigService::all();
        m_borrowDaysBox->setValue(
        values.value(QStringLiteral("BORROW_DAYS"),
        QString::number(ConfigService::borrowDays())).toInt());
        m_maxRenewCountBox->setValue(
        values.value(QStringLiteral("MAX_RENEW_COUNT"),
        QString::number(ConfigService::maxRenewCount())).toInt());
    */
    m_configs = {
        {QStringLiteral("borrow_days"), QStringLiteral("30"),
         QStringLiteral("借期天数")},
        {QStringLiteral("max_renew_count"), QStringLiteral("1"),
         QStringLiteral("最多续借次数")},
    };

    for (const SystemConfigRecord &config : m_configs) {
        if (config.configKey == QStringLiteral("borrow_days")) {
            m_borrowDaysBox->setValue(config.configValue.toInt());
        } else if (config.configKey == QStringLiteral("max_renew_count")) {
            m_maxRenewCountBox->setValue(config.configValue.toInt());
        }
    }
    setFeedback(QStringLiteral("系统设置已加载。"));
}

void AdminSettingsView::saveConfig()
{
    QMap<QString, QString> values;
    values[QStringLiteral("BORROW_DAYS")] =
        QString::number(static_cast<int>(m_borrowDaysBox->value()));
    values[QStringLiteral("MAX_RENEW_COUNT")] =
        QString::number(static_cast<int>(m_maxRenewCountBox->value()));
    const ServiceResult result = ConfigService::save(values);
    setFeedback(result.message);
    return;

    /*
        QMap<QString, QString> values = ConfigService::all();
        values[QStringLiteral("BORROW_DAYS")] =
        QString::number(static_cast<int>(m_borrowDaysBox->value()));
        values[QStringLiteral("MAX_RENEW_COUNT")] =
        QString::number(static_cast<int>(m_maxRenewCountBox->value()));
        const ServiceResult backendResult = ConfigService::save(values);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        setFeedback(backendResult.message);
    */
    for (SystemConfigRecord &config : m_configs) {
        if (config.configKey == QStringLiteral("borrow_days")) {
            config.configValue = QString::number(static_cast<int>(m_borrowDaysBox->value()));
        } else if (config.configKey == QStringLiteral("max_renew_count")) {
            config.configValue = QString::number(static_cast<int>(m_maxRenewCountBox->value()));
        }
    }
    setFeedback(QStringLiteral("系统设置已保存，等待写入 system_config 表。"));
}

void AdminSettingsView::resetDefaults()
{
    m_borrowDaysBox->setValue(30);
    m_maxRenewCountBox->setValue(1);
    setFeedback(QStringLiteral("已恢复默认借阅规则，点击保存后生效。"));
}

void AdminSettingsView::setFeedback(const QString &message)
{
    m_feedbackLabel->setText(message);
}

QWidget *createAdminSettingsView(QWidget *parent)
{
    return new AdminSettingsView(parent);
}
