#include "AdminLogView.h"
#include "services/LogService.h"

#include <FluentQt/FluentQt.h>

#include <QDate>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTime>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::collections::DataGrid;
using fluent::date_time::DateTimeRangePicker;
using fluent::textfields::Label;

AdminLogView::AdminLogView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("AdminLogView"));
    buildUi();
    applyTimeFilter();
}

AdminLogView::~AdminLogView() = default;

void AdminLogView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("操作日志"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("按时间段检索管理员在系统中执行的操作记录。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *filterLayout = new QHBoxLayout;
    filterLayout->setSpacing(10);

    m_rangePicker = new DateTimeRangePicker(this);
    m_rangePicker->setObjectName(QStringLiteral("AdminLogRangePicker"));
    m_rangePicker->setTimeEnabled(true);
    m_rangePicker->setPresetsVisible(true);
    m_rangePicker->setPlaceholderText(QStringLiteral("请选择操作时间段"));
    m_rangePicker->setMinimumHeight(40);
    m_rangePicker->setRange(
        QDateTime(QDate(2026, 10, 24), QTime(0, 0)),
        QDateTime(QDate(2026, 10, 31), QTime(23, 59)));
    filterLayout->addWidget(m_rangePicker, 1);

    m_searchButton = new Button(QStringLiteral("查询"), this);
    m_searchButton->setObjectName(QStringLiteral("AdminLogSearchButton"));
    m_searchButton->setFluentStyle(Button::Accent);
    m_searchButton->setFluentLayout(Button::IconBefore);
    m_searchButton->setIconGlyph(Typography::Icons::Search, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_searchButton->setFixedSize(96, 40);
    filterLayout->addWidget(m_searchButton);

    m_clearButton = new Button(QStringLiteral("全部时间"), this);
    m_clearButton->setObjectName(QStringLiteral("AdminLogClearButton"));
    m_clearButton->setFluentStyle(Button::Subtle);
    m_clearButton->setFixedHeight(40);
    filterLayout->addWidget(m_clearButton);
    rootLayout->addLayout(filterLayout);

    m_model = new QStandardItemModel(0, 5, this);
    m_model->setHorizontalHeaderLabels({
        QStringLiteral("日志 ID"),
        QStringLiteral("管理员"),
        QStringLiteral("操作"),
        QStringLiteral("详情"),
        QStringLiteral("操作时间"),
    });

    m_grid = new DataGrid(this);
    m_grid->setObjectName(QStringLiteral("AdminLogGrid"));
    m_grid->setModel(m_model);
    m_grid->setPlaceholderText(QStringLiteral("当前时间段内没有操作日志"));
    m_grid->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_grid->setSelectionMode(DataGrid::SelectionMode::Single);
    m_grid->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_grid->setShowGrid(false);
    m_grid->setBorderVisible(false);
    m_grid->verticalHeader()->hide();
    m_grid->verticalHeader()->setDefaultSectionSize(46);
    m_grid->horizontalHeader()->setStretchLastSection(false);
    m_grid->horizontalHeader()->setMinimumSectionSize(70);
    for (int column = 0; column < 5; ++column) {
        m_grid->horizontalHeader()->setSectionResizeMode(column, QHeaderView::Interactive);
    }
    m_grid->horizontalHeader()->resizeSection(0, 85);
    m_grid->horizontalHeader()->resizeSection(1, 100);
    m_grid->horizontalHeader()->resizeSection(2, 130);
    m_grid->horizontalHeader()->resizeSection(3, 360);
    m_grid->horizontalHeader()->resizeSection(4, 180);
    rootLayout->addWidget(m_grid, 1);

    m_feedbackLabel = new Label(this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_searchButton, &Button::clicked, this, [this] { applyTimeFilter(); });
    connect(m_clearButton, &Button::clicked, this, [this] { clearFilter(); });
    connect(m_rangePicker, &DateTimeRangePicker::rangeChanged, this,
            [this](const QDateTime &, const QDateTime &) {
        applyTimeFilter();
    });

}

void AdminLogView::applyTimeFilter()
{
    const QDate from = m_rangePicker->startDateTime().isValid()
        ? m_rangePicker->startDateTime().date()
        : QDate();
    const QDate to = m_rangePicker->endDateTime().isValid()
        ? m_rangePicker->endDateTime().date()
        : QDate();
    const QList<OperationLog> logs = LogService::list(from, to);
    m_logs.clear();
    for (const OperationLog &source : logs) {
        OperationLogRecord record;
        record.logId = source.id;
        record.adminId = 0;
        record.adminName = source.adminName;
        record.action = source.action;
        record.detail = source.detail;
        record.createdAt = source.createdAt;
        m_logs.append(record);
    }

    /*
        const QDate from = m_rangePicker->startDateTime().isValid()
        ? m_rangePicker->startDateTime().date()
        : QDate();
        const QDate to = m_rangePicker->endDateTime().isValid()
        ? m_rangePicker->endDateTime().date()
        : QDate();
        const QList<OperationLog> logs =
        LogService::list(from, to, QString());
        m_logs.clear();
        for (const OperationLog &source : logs) {
            OperationLogRecord record;
            record.logId = source.id;
            record.adminId = -1;
            record.action = source.action;
            record.detail = source.detail;
            record.createdAt = source.createdAt;
            m_logs.append(record);
        }
    */
    m_visibleLogs.clear();
    const QDateTime start = m_rangePicker->startDateTime();
    const QDateTime end = m_rangePicker->endDateTime();

    for (const OperationLogRecord &log : m_logs) {
        if (start.isValid() && log.createdAt < start) {
            continue;
        }
        if (end.isValid() && log.createdAt > end) {
            continue;
        }
        m_visibleLogs.append(&log);
    }
    renderTable();
}

void AdminLogView::renderTable()
{
    m_model->removeRows(0, m_model->rowCount());
    for (const OperationLogRecord *log : m_visibleLogs) {
        auto makeItem = [](const QString &text) {
            auto *item = new QStandardItem(text);
            item->setEditable(false);
            return item;
        };
        m_model->appendRow({
            makeItem(QString::number(log->logId)),
            makeItem(log->adminName.isEmpty() ? QStringLiteral("系统")
                                              : log->adminName),
            makeItem(log->action),
            makeItem(log->detail),
            makeItem(log->createdAt.toString(QStringLiteral("yyyy-MM-dd HH:mm:ss"))),
        });
    }
    m_feedbackLabel->setText(
        QStringLiteral("当前时间段共 %1 条操作日志。").arg(m_visibleLogs.size()));
}

void AdminLogView::clearFilter()
{
    m_rangePicker->clear();
    applyTimeFilter();
}

QWidget *createAdminLogView(QWidget *parent)
{
    return new AdminLogView(parent);
}
