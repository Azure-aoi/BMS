#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QDateTime>
#include <QDialog>
#include <QString>

namespace fluent::basicinput {
class Button;
}

namespace fluent::navigation {
class StackContentHost;
}

class AdminStatsView;

class AdminMainWindow final : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMainWindow(QWidget *parent = nullptr);
    ~AdminMainWindow() override;

signals:
    void logoutRequested();

private:
    struct AdminInfo
    {
        int adminId = 0;
        QString username;
        QString displayName;
        QDateTime createdAt;
    };

    void buildUi();
    void refreshStatus();
    void showStats(bool overdue);

    fluent::navigation::StackContentHost *m_contentHost = nullptr;
    fluent::basicinput::Button *m_navStatsButton = nullptr;
    fluent::basicinput::Button *m_borrowedCountButton = nullptr;
    fluent::basicinput::Button *m_overdueCountButton = nullptr;
    fluent::basicinput::Button *m_refreshButton = nullptr;
    AdminStatsView *m_statsView = nullptr;
    AdminInfo m_adminInfo;
};

#endif // ADMINMAINWINDOW_H
