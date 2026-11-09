#ifndef ADMINSETTINGSVIEW_H
#define ADMINSETTINGSVIEW_H

#include <QString>
#include <QVector>
#include <QWidget>

namespace fluent::basicinput {
class Button;
}

namespace fluent::textfields {
class Label;
class NumberBox;
}

class AdminSettingsView final : public QWidget
{
public:
    explicit AdminSettingsView(QWidget *parent = nullptr);
    ~AdminSettingsView() override;

private:
    struct SystemConfigRecord
    {
        QString configKey;
        QString configValue;
        QString description;
    };

    void buildUi();
    void loadConfig();
    void saveConfig();
    void resetDefaults();
    void setFeedback(const QString &message);

    fluent::textfields::NumberBox *m_borrowDaysBox = nullptr;
    fluent::textfields::NumberBox *m_maxRenewCountBox = nullptr;
    fluent::basicinput::Button *m_saveButton = nullptr;
    fluent::basicinput::Button *m_resetButton = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<SystemConfigRecord> m_configs;
};

QWidget *createAdminSettingsView(QWidget *parent = nullptr);

#endif // ADMINSETTINGSVIEW_H
