#include "readermainwindow.h"
#include "ui_readermainwindow.h"

#include "booksearchview.h"
#include "MyBorrowView.h"
#include "MyReserveView.h"
#include "ReaderCollectionView.h"
#include "ReaderProfileView.h"
#include "core/SessionManager.h"

#include <FluentQt/FluentQt.h>

#include <QButtonGroup>
#include <QColor>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::navigation::NavigationView;
using fluent::navigation::StackContentHost;
using fluent::textfields::Label;

ReaderMainWindow::ReaderMainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReaderMainWindow)
{
    ui->setupUi(this);
    /*
        const SessionUser user = SessionManager::current();
        const int readerId = SessionManager::userId();
        const int maxBorrow = SessionManager::maxBorrow();
    */
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);
    setWindowFlag(Qt::WindowSystemMenuHint, true);
    setWindowFlag(Qt::WindowMinimizeButtonHint, true);
    setWindowFlag(Qt::WindowMaximizeButtonHint, true);
    setWindowFlag(Qt::WindowCloseButtonHint, true);

    auto *navigationView = new NavigationView(ui->NavigationHost);
    navigationView->setDisplayMode(NavigationView::DisplayMode::Left);
    navigationView->setPaneOpen(true);
    navigationView->setAnimationEnabled(true);
    navigationView->setExpandedPaneWidth(240);
    navigationView->setCompactPaneWidth(52);
    navigationView->setTopBarHeight(48);

    auto *navigationHostLayout = new QVBoxLayout(ui->NavigationHost);
    navigationHostLayout->setContentsMargins(0, 0, 0, 0);
    navigationHostLayout->setSpacing(0);
    navigationHostLayout->addWidget(navigationView);

    auto *navigationPane = new QWidget;
    navigationPane->setObjectName(QStringLiteral("ReaderNavigationPane"));
    navigationPane->setAttribute(Qt::WA_StyledBackground, true);
    navigationPane->setStyleSheet(QStringLiteral(
        "QWidget#ReaderNavigationPane {"
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

    auto *subtitleLabel = new Label(QStringLiteral("读者服务中心"), navigationPane);
    subtitleLabel->setFluentTypography(Typography::FontRole::Caption);
    subtitleLabel->setTextColorRole(Label::TextColorRole::Secondary);
    navigationLayout->addWidget(subtitleLabel);
    navigationLayout->addSpacing(24);

    auto *hintLabel = new Label(QStringLiteral("主要导航"), navigationPane);
    hintLabel->setFluentTypography(Typography::FontRole::Caption);
    hintLabel->setTextColorRole(Label::TextColorRole::Secondary);
    navigationLayout->addWidget(hintLabel);
    navigationLayout->addSpacing(2);

    auto *contentHost = navigationView->contentHost();
    contentHost->setTransitionEffect(StackContentHost::TransitionEffect::SlideFromLeft);
    contentHost->setContentSurface(QColor(QStringLiteral("#FFFFFF")), 8.0,
                                   QColor(QStringLiteral("#DFE7E9")));

    const QList<QPair<QString, QString>> navigationItems = {
        {QStringLiteral("图书检索"), Typography::Icons::Search},
        {QStringLiteral("我的借阅"), Typography::Icons::Document},
        {QStringLiteral("我的预约"), Typography::Icons::Calendar},
        {QStringLiteral("个人信息"), Typography::Icons::Contact},
        {QStringLiteral("收藏"), Typography::Icons::HeartFill},
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

        connect(button, &Button::clicked, this, [contentHost, index] {
            const int direction = index >= contentHost->currentIndex() ? 1 : -1;
            contentHost->setCurrentIndex(index, direction, true);
        });
    }

    navigationLayout->addStretch();

    auto *logoutButton = new Button(QStringLiteral("返回登录"), navigationPane);
    logoutButton->setObjectName(QStringLiteral("ReaderLogoutButton"));
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

    auto *readerLabel = new Label(QStringLiteral("READER"), navigationPane);
    const SessionUser user = SessionManager::current();
    if (user.isReader() && !user.name.isEmpty()) {
        readerLabel->setText(user.name);
    }
    readerLabel->setAlignment(Qt::AlignCenter);
    readerLabel->setFluentTypography(Typography::FontRole::Caption);
    readerLabel->setTextColorRole(Label::TextColorRole::Secondary);
    navigationLayout->addWidget(readerLabel);

    navigationView->setMainChromeWidget(navigationPane);

    for (int index = 0; index < navigationItems.size(); ++index) {
        QWidget *page = nullptr;
        switch (index) {
        case 0:
            page = createBookSearchView(contentHost);
            break;
        case 1:
            page = createMyBorrowView(contentHost);
            break;
        case 2:
            page = createMyReserveView(contentHost);
            break;
        case 3:
            page = createReaderProfileView(contentHost);
            break;
        case 4:
            page = createReaderCollectionView(contentHost);
            break;
        default:
            page = new QWidget(contentHost);
            page->setStyleSheet(QStringLiteral("background: #FFFFFF;"));
            break;
        }
        contentHost->insertPage(index, page);
    }

    navigationButtons.first()->setChecked(true);
    contentHost->setCurrentIndex(0, 0, false);
}

ReaderMainWindow::~ReaderMainWindow()
{
    delete ui;
}
