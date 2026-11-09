#include "AdminMainWindow.h"

#include "AdminBookView.h"
#include "AdminLogView.h"
#include "AdminReaderView.h"
#include "AdminSettingsView.h"
#include "AdminStatsView.h"
#include "core/SessionManager.h"

#include <FluentQt/FluentQt.h>

#include <QButtonGroup>
#include <QColor>
#include <QHBoxLayout>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::navigation::NavigationView;
using fluent::navigation::StackContentHost;
using fluent::textfields::Label;

AdminMainWindow::AdminMainWindow(QWidget *parent)
    : QDialog(parent)
{
    /*
        const SessionUser user = SessionManager::current();
        if (user.isAdmin()) {
            m_adminInfo.adminId = user.id;
            m_adminInfo.username = user.account;
            m_adminInfo.displayName = user.name;
        }
        const int unread = MessageService::unreadForAdmin(m_adminInfo.adminId);
        const QList<Message> messages =
        MessageService::forAdmin(m_adminInfo.adminId);
        const ServiceResult reminderResult =
        MessageService::sendOverdueReminder(selectedBorrowRecord);
    */
    setObjectName(QStringLiteral("AdminMainWindow"));
    setWindowTitle(QStringLiteral("图书管理系统 - 管理员主界面"));
    setMinimumSize(1000, 680);
    resize(1280, 800);
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);
    setWindowFlag(Qt::WindowSystemMenuHint, true);
    setWindowFlag(Qt::WindowMinimizeButtonHint, true);
    setWindowFlag(Qt::WindowMaximizeButtonHint, true);
    setWindowFlag(Qt::WindowCloseButtonHint, true);
    buildUi();
    refreshStatus();
}

AdminMainWindow::~AdminMainWindow() = default;

void AdminMainWindow::buildUi()
{
    const SessionUser user = SessionManager::current();
    if (user.isAdmin()) {
        m_adminInfo = {user.id, user.account, user.name, QDateTime::currentDateTime()};
    } else {
        m_adminInfo = {1, QStringLiteral("admin"), QStringLiteral("系统管理员"),
                       QDateTime::currentDateTime()};
    }

    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(0, 0, 0, 0);
    rootLayout->setSpacing(0);

    auto *topBar = new QWidget(this);
    topBar->setObjectName(QStringLiteral("AdminTopBar"));
    topBar->setAttribute(Qt::WA_StyledBackground, true);
    topBar->setStyleSheet(QStringLiteral(
        "QWidget#AdminTopBar {"
        " background: #FFFFFF;"
        " border-bottom: 1px solid #DCE5E7;"
        "}"));
    topBar->setFixedHeight(62);
    auto *topLayout = new QHBoxLayout(topBar);
    topLayout->setContentsMargins(22, 10, 22, 10);
    topLayout->setSpacing(10);

    auto *adminLabel = new Label(
        QStringLiteral("当前管理员：%1（%2）")
            .arg(m_adminInfo.displayName, m_adminInfo.username),
        topBar);
    adminLabel->setFluentTypography(Typography::FontRole::BodyStrong);
    adminLabel->setTextColorRole(Label::TextColorRole::Primary);
    topLayout->addWidget(adminLabel);
    topLayout->addSpacing(18);

    m_borrowedCountButton = new Button(topBar);
    m_borrowedCountButton->setObjectName(QStringLiteral("AdminBorrowedCountButton"));
    m_borrowedCountButton->setFluentStyle(Button::Subtle);
    m_borrowedCountButton->setFluentSize(Button::Small);
    m_borrowedCountButton->setFluentLayout(Button::IconBefore);
    m_borrowedCountButton->setIconGlyph(Typography::Icons::Document,
                                        Typography::IconSize::Standard,
                                        Typography::FontFamily::FluentIcons);
    m_borrowedCountButton->setFixedHeight(36);
    topLayout->addWidget(m_borrowedCountButton);

    m_overdueCountButton = new Button(topBar);
    m_overdueCountButton->setObjectName(QStringLiteral("AdminOverdueCountButton"));
    m_overdueCountButton->setFluentStyle(Button::Subtle);
    m_overdueCountButton->setFluentSize(Button::Small);
    m_overdueCountButton->setFluentLayout(Button::IconBefore);
    m_overdueCountButton->setIconGlyph(Typography::Icons::Warning,
                                       Typography::IconSize::Standard,
                                       Typography::FontFamily::FluentIcons);
    m_overdueCountButton->setFixedHeight(36);
    topLayout->addWidget(m_overdueCountButton);
    topLayout->addStretch();

    m_refreshButton = new Button(QStringLiteral("刷新"), topBar);
    m_refreshButton->setObjectName(QStringLiteral("AdminRefreshButton"));
    m_refreshButton->setFluentStyle(Button::Subtle);
    m_refreshButton->setFluentSize(Button::Small);
    m_refreshButton->setFluentLayout(Button::IconBefore);
    m_refreshButton->setIconGlyph(Typography::Icons::Refresh,
                                  Typography::IconSize::Standard,
                                  Typography::FontFamily::FluentIcons);
    m_refreshButton->setFixedHeight(36);
    topLayout->addWidget(m_refreshButton);
    rootLayout->addWidget(topBar);

    auto *navigationView = new NavigationView(this);
    navigationView->setDisplayMode(NavigationView::DisplayMode::Left);
    navigationView->setPaneOpen(true);
    navigationView->setAnimationEnabled(true);
    navigationView->setExpandedPaneWidth(240);
    navigationView->setCompactPaneWidth(52);
    navigationView->setTopBarHeight(48);
    rootLayout->addWidget(navigationView, 1);

    auto *navigationPane = new QWidget;
    navigationPane->setObjectName(QStringLiteral("AdminNavigationPane"));
    navigationPane->setAttribute(Qt::WA_StyledBackground, true);
    navigationPane->setStyleSheet(QStringLiteral(
        "QWidget#AdminNavigationPane {"
        " background: #F7F9FA;"
        " border-right: 1px solid #DCE5E7;"
        "}"));
    navigationPane->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *navigationLayout = new QVBoxLayout(navigationPane);
    navigationLayout->setContentsMargins(16, 28, 16, 20);
    navigationLayout->setSpacing(7);

    auto *brandLabel = new Label(QStringLiteral("图书管理系统"), navigationPane);
    brandLabel->setFluentTypography(Typography::FontRole::Subtitle);
    brandLabel->setTextColorRole(Label::TextColorRole::Primary);
    navigationLayout->addWidget(brandLabel);

    auto *subtitleLabel = new Label(QStringLiteral("管理员工作台"), navigationPane);
    subtitleLabel->setFluentTypography(Typography::FontRole::Caption);
    subtitleLabel->setTextColorRole(Label::TextColorRole::Secondary);
    navigationLayout->addWidget(subtitleLabel);
    navigationLayout->addSpacing(24);

    auto *hintLabel = new Label(QStringLiteral("主要导航"), navigationPane);
    hintLabel->setFluentTypography(Typography::FontRole::Caption);
    hintLabel->setTextColorRole(Label::TextColorRole::Secondary);
    navigationLayout->addWidget(hintLabel);
    navigationLayout->addSpacing(2);

    m_contentHost = navigationView->contentHost();
    m_contentHost->setTransitionEffect(StackContentHost::TransitionEffect::SlideFromLeft);
    m_contentHost->setContentSurface(QColor(QStringLiteral("#FFFFFF")), 8.0,
                                     QColor(QStringLiteral("#DFE7E9")));

    const QList<QPair<QString, QString>> navigationItems = {
        {QStringLiteral("图书管理"), Typography::Icons::Document},
        {QStringLiteral("用户管理"), Typography::Icons::People},
        {QStringLiteral("数据统计"), Typography::Icons::Calculator},
        {QStringLiteral("操作日志"), Typography::Icons::History},
        {QStringLiteral("系统设置"), Typography::Icons::Settings},
    };

    auto *navigationGroup = new QButtonGroup(this);
    navigationGroup->setExclusive(true);
    QList<Button *> navigationButtons;
    for (int index = 0; index < navigationItems.size(); ++index) {
        auto *button = new Button(navigationItems.at(index).first, navigationPane);
        button->setFluentStyle(Button::Subtle);
        button->setFluentSize(Button::StandardSize);
        button->setFluentLayout(Button::IconBefore);
        button->setIconGlyph(navigationItems.at(index).second,
                             Typography::IconSize::Standard,
                             Typography::FontFamily::FluentIcons);
        button->setCheckable(true);
        button->setFixedHeight(44);
        button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        button->setCursor(Qt::PointingHandCursor);
        navigationGroup->addButton(button, index);
        navigationButtons.append(button);
        navigationLayout->addWidget(button);
        connect(button, &Button::clicked, this, [this, index] {
            const int direction = index >= m_contentHost->currentIndex() ? 1 : -1;
            m_contentHost->setCurrentIndex(index, direction, true);
        });
    }
    m_navStatsButton = navigationButtons.at(2);

    navigationLayout->addStretch();

    auto *logoutButton = new Button(QStringLiteral("返回登录"), navigationPane);
    logoutButton->setObjectName(QStringLiteral("AdminLogoutButton"));
    logoutButton->setFluentStyle(Button::Subtle);
    logoutButton->setFluentSize(Button::Small);
    logoutButton->setFluentLayout(Button::IconBefore);
    logoutButton->setIconGlyph(Typography::Icons::Back, Typography::IconSize::Standard,
                               Typography::FontFamily::FluentIcons);
    logoutButton->setFixedHeight(40);
    logoutButton->setCursor(Qt::PointingHandCursor);
    navigationLayout->addWidget(logoutButton);
    connect(logoutButton, &Button::clicked, this, [this] {
        emit logoutRequested();
    });

    auto *modeLabel = new Label(QStringLiteral("ADMIN"), navigationPane);
    modeLabel->setAlignment(Qt::AlignCenter);
    modeLabel->setFluentTypography(Typography::FontRole::Caption);
    modeLabel->setTextColorRole(Label::TextColorRole::Secondary);
    navigationLayout->addWidget(modeLabel);
    navigationView->setMainChromeWidget(navigationPane);

    m_contentHost->insertPage(0, createAdminBookView(m_contentHost));
    m_contentHost->insertPage(1, createAdminReaderView(m_contentHost));
    m_statsView = static_cast<AdminStatsView *>(createAdminStatsView(m_contentHost));
    m_contentHost->insertPage(2, m_statsView);
    m_contentHost->insertPage(3, createAdminLogView(m_contentHost));
    m_contentHost->insertPage(4, createAdminSettingsView(m_contentHost));

    navigationButtons.first()->setChecked(true);
    m_contentHost->setCurrentIndex(0, 0, false);

    connect(m_refreshButton, &Button::clicked, this, [this] {
        if (m_statsView) {
            m_statsView->refreshData();
        }
        refreshStatus();
    });
    connect(m_borrowedCountButton, &Button::clicked, this, [this] {
        showStats(false);
    });
    connect(m_overdueCountButton, &Button::clicked, this, [this] {
        showStats(true);
    });
}

void AdminMainWindow::refreshStatus()
{
    if (!m_statsView) {
        return;
    }
    m_borrowedCountButton->setText(
        QStringLiteral("在借 %1").arg(m_statsView->borrowedCount()));
    m_overdueCountButton->setText(
        QStringLiteral("逾期 %1").arg(m_statsView->overdueCount()));
}

void AdminMainWindow::showStats(bool overdue)
{
    if (!m_statsView || !m_contentHost || !m_navStatsButton) {
        return;
    }
    m_navStatsButton->setChecked(true);
    const int direction = 2 >= m_contentHost->currentIndex() ? 1 : -1;
    m_contentHost->setCurrentIndex(2, direction, true);
    if (overdue) {
        m_statsView->showOverdueStats();
    } else {
        m_statsView->showBorrowedStats();
    }
}
