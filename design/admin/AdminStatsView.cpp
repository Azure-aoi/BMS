#include "AdminStatsView.h"
#include "services/BorrowService.h"

#include <FluentQt/FluentQt.h>

#include <QButtonGroup>
#include <QDate>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QStackedWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTime>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::basicinput::ComboBox;
using fluent::collections::DataGrid;
using fluent::textfields::Label;

AdminStatsView::AdminStatsView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("AdminStatsView"));
    buildUi();
    loadRecords();
    renderTables();
    switchTab(false);
}

AdminStatsView::~AdminStatsView() = default;

int AdminStatsView::borrowedCount() const
{
    int count = 0;
    for (const BorrowStatsRecord &record : m_records) {
        if (record.status == BorrowStatsRecord::Status::Borrowed) {
            ++count;
        }
    }
    return count;
}

int AdminStatsView::overdueCount() const
{
    int count = 0;
    for (const BorrowStatsRecord &record : m_records) {
        if (isOverdue(record)) {
            ++count;
        }
    }
    return count;
}

void AdminStatsView::showBorrowedStats()
{
    switchTab(false);
}

void AdminStatsView::showOverdueStats()
{
    switchTab(true);
}

void AdminStatsView::refreshData()
{
    renderTables();
    switchTab(m_overdueTabButton->isChecked());
}

void AdminStatsView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("数据统计"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("查看当前在借和逾期图书，并按借出时间或应还时间筛选。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *summaryLayout = new QHBoxLayout;
    summaryLayout->setSpacing(12);
    m_borrowedCountLabel = new Label(this);
    m_borrowedCountLabel->setFluentTypography(Typography::FontRole::BodyLargeStrong);
    m_borrowedCountLabel->setTextColorRole(Label::TextColorRole::Primary);
    summaryLayout->addWidget(m_borrowedCountLabel);
    summaryLayout->addSpacing(24);
    m_overdueCountLabel = new Label(this);
    m_overdueCountLabel->setFluentTypography(Typography::FontRole::BodyLargeStrong);
    m_overdueCountLabel->setTextColorRole(Label::TextColorRole::Primary);
    summaryLayout->addWidget(m_overdueCountLabel);
    summaryLayout->addStretch();
    rootLayout->addLayout(summaryLayout);

    auto *controlsLayout = new QHBoxLayout;
    controlsLayout->setSpacing(8);

    m_borrowedTabButton = new Button(QStringLiteral("在借图书"), this);
    m_borrowedTabButton->setObjectName(QStringLiteral("BorrowedStatsTabButton"));
    m_borrowedTabButton->setFluentStyle(Button::Subtle);
    m_borrowedTabButton->setCheckable(true);
    m_borrowedTabButton->setChecked(true);
    m_borrowedTabButton->setFixedSize(110, 38);
    controlsLayout->addWidget(m_borrowedTabButton);

    m_overdueTabButton = new Button(QStringLiteral("逾期图书"), this);
    m_overdueTabButton->setObjectName(QStringLiteral("OverdueStatsTabButton"));
    m_overdueTabButton->setFluentStyle(Button::Subtle);
    m_overdueTabButton->setCheckable(true);
    m_overdueTabButton->setFixedSize(110, 38);
    controlsLayout->addWidget(m_overdueTabButton);

    auto *tabGroup = new QButtonGroup(this);
    tabGroup->setExclusive(true);
    tabGroup->addButton(m_borrowedTabButton, 0);
    tabGroup->addButton(m_overdueTabButton, 1);
    controlsLayout->addStretch();

    m_dateTypeCombo = new ComboBox(this);
    m_dateTypeCombo->setObjectName(QStringLiteral("StatsDateTypeCombo"));
    m_dateTypeCombo->addItem(QStringLiteral("按借出时间"), QStringLiteral("borrow"));
    m_dateTypeCombo->addItem(QStringLiteral("按应还时间"), QStringLiteral("due"));
    m_dateTypeCombo->setFixedSize(124, 38);
    controlsLayout->addWidget(m_dateTypeCombo);

    m_periodCombo = new ComboBox(this);
    m_periodCombo->setObjectName(QStringLiteral("StatsPeriodCombo"));
    m_periodCombo->addItem(QStringLiteral("全部时间"), 0);
    m_periodCombo->addItem(QStringLiteral("最近 7 天"), 7);
    m_periodCombo->addItem(QStringLiteral("最近 30 天"), 30);
    m_periodCombo->setFixedSize(116, 38);
    controlsLayout->addWidget(m_periodCombo);

    m_refreshButton = new Button(QStringLiteral("刷新"), this);
    m_refreshButton->setObjectName(QStringLiteral("RefreshStatsButton"));
    m_refreshButton->setFluentStyle(Button::Subtle);
    m_refreshButton->setFluentSize(Button::Small);
    m_refreshButton->setFluentLayout(Button::IconBefore);
    m_refreshButton->setIconGlyph(Typography::Icons::Refresh, Typography::IconSize::Standard,
                                  Typography::FontFamily::FluentIcons);
    m_refreshButton->setFixedHeight(38);
    controlsLayout->addWidget(m_refreshButton);
    rootLayout->addLayout(controlsLayout);

    m_borrowedModel = new QStandardItemModel(0, 6, this);
    m_overdueModel = new QStandardItemModel(0, 6, this);
    const QStringList headers = {
        QStringLiteral("书名"), QStringLiteral("读者"), QStringLiteral("学号"),
        QStringLiteral("借出日期"), QStringLiteral("应还日期"), QStringLiteral("状态"),
    };
    m_borrowedModel->setHorizontalHeaderLabels(headers);
    m_overdueModel->setHorizontalHeaderLabels(headers);

    auto createGrid = [this](const QString &objectName, QStandardItemModel *model) {
        auto *grid = new DataGrid(this);
        grid->setObjectName(objectName);
        grid->setModel(model);
        grid->setPlaceholderText(QStringLiteral("当前筛选条件下没有记录"));
        grid->setSelectionBehavior(QAbstractItemView::SelectRows);
        grid->setSelectionMode(DataGrid::SelectionMode::Single);
        grid->setEditTriggers(QAbstractItemView::NoEditTriggers);
        grid->setShowGrid(false);
        grid->setBorderVisible(false);
        grid->verticalHeader()->hide();
        grid->verticalHeader()->setDefaultSectionSize(46);
        grid->horizontalHeader()->setStretchLastSection(false);
        grid->horizontalHeader()->setMinimumSectionSize(70);
        for (int column = 0; column < 6; ++column) {
            grid->horizontalHeader()->setSectionResizeMode(column, QHeaderView::Interactive);
        }
        grid->horizontalHeader()->resizeSection(0, 180);
        grid->horizontalHeader()->resizeSection(1, 100);
        grid->horizontalHeader()->resizeSection(2, 140);
        grid->horizontalHeader()->resizeSection(3, 160);
        grid->horizontalHeader()->resizeSection(4, 130);
        grid->horizontalHeader()->resizeSection(5, 100);
        return grid;
    };

    m_borrowedGrid = createGrid(QStringLiteral("BorrowedStatsGrid"), m_borrowedModel);
    m_overdueGrid = createGrid(QStringLiteral("OverdueStatsGrid"), m_overdueModel);

    m_tabStack = new QStackedWidget(this);
    m_tabStack->addWidget(m_borrowedGrid);
    m_tabStack->addWidget(m_overdueGrid);
    rootLayout->addWidget(m_tabStack, 1);

    m_feedbackLabel = new Label(this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_borrowedTabButton, &Button::clicked, this, [this] { switchTab(false); });
    connect(m_overdueTabButton, &Button::clicked, this, [this] { switchTab(true); });
    connect(m_dateTypeCombo, &ComboBox::currentIndexChanged, this, [this] { renderTables(); });
    connect(m_periodCombo, &ComboBox::currentIndexChanged, this, [this] { renderTables(); });
    connect(m_refreshButton, &Button::clicked, this, [this] { refreshData(); });

    auto addRecord = [this](int recordId, int readerId, int bookId,
                             const QString &title, const QString &readerName,
                             const QString &studentNo, const QDateTime &borrowDate,
                             const QDate &dueDate,
                             BorrowStatsRecord::Status status = BorrowStatsRecord::Status::Borrowed) {
        BorrowStatsRecord record;
        record.recordId = recordId;
        record.readerId = readerId;
        record.bookId = bookId;
        record.bookTitle = title;
        record.readerName = readerName;
        record.studentNo = studentNo;
        record.borrowDate = borrowDate;
        record.dueDate = dueDate;
        record.status = status;
        m_records.append(record);
    };

    addRecord(1001, 1, 1, QStringLiteral("三体"), QStringLiteral("张同学"),
              QStringLiteral("25334163"), QDateTime(QDate(2026, 10, 10), QTime(9, 20)),
              QDate(2026, 11, 10));
    addRecord(1002, 1, 2, QStringLiteral("人类简史"), QStringLiteral("张同学"),
              QStringLiteral("25334163"), QDateTime(QDate(2026, 9, 20), QTime(14, 5)),
              QDate(2026, 10, 20));
    addRecord(1003, 1, 11, QStringLiteral("设计模式"), QStringLiteral("张同学"),
              QStringLiteral("25334163"), QDateTime(QDate(2026, 10, 1), QTime(10, 30)),
              QDate(2026, 10, 31));
    addRecord(1004, 2, 3, QStringLiteral("活着"), QStringLiteral("李同学"),
              QStringLiteral("25334164"), QDateTime(QDate(2026, 10, 22), QTime(11, 15)),
              QDate(2026, 11, 22));
    addRecord(1005, 4, 4, QStringLiteral("围城"), QStringLiteral("赵同学"),
              QStringLiteral("25334166"), QDateTime(QDate(2026, 9, 12), QTime(8, 40)),
              QDate(2026, 10, 12));
    addRecord(1006, 4, 12, QStringLiteral("时间简史"), QStringLiteral("赵同学"),
              QStringLiteral("25334166"), QDateTime(QDate(2026, 10, 3), QTime(15, 0)),
              QDate(2026, 11, 3));
    addRecord(1007, 4, 14, QStringLiteral("局外人"), QStringLiteral("赵同学"),
              QStringLiteral("25334166"), QDateTime(QDate(2026, 8, 15), QTime(13, 10)),
              QDate(2026, 9, 15));
}

void AdminStatsView::loadRecords()
{
    const QList<::BorrowRecord> borrowed =
        BorrowService::allRecords(QStringLiteral("borrowed"));
    const QList<::BorrowRecord> overdue = BorrowService::overdueList();

    m_records.clear();
    auto appendRecord = [this](const ::BorrowRecord &source) {
        for (const BorrowStatsRecord &existing : m_records) {
            if (existing.recordId == source.id) {
                return;
            }
        }
        BorrowStatsRecord record;
        record.recordId = source.id;
        record.readerId = source.readerId;
        record.bookId = source.bookId;
        record.bookTitle = source.bookTitle;
        record.readerName = source.readerName;
        record.studentNo = source.readerNo;
        record.borrowDate = source.borrowDate;
        record.dueDate = source.dueDate;
        record.returnDate = source.returnDate;
        record.renewCount = source.renewCount;
        record.status = source.isReturned()
            ? BorrowStatsRecord::Status::Returned
            : BorrowStatsRecord::Status::Borrowed;
        m_records.append(record);
    };

    for (const ::BorrowRecord &source : borrowed) {
        appendRecord(source);
    }
    for (const ::BorrowRecord &source : overdue) {
        appendRecord(source);
    }
}

void AdminStatsView::switchTab(bool overdue)
{
    m_tabStack->setCurrentIndex(overdue ? 1 : 0);
    m_borrowedTabButton->setChecked(!overdue);
    m_overdueTabButton->setChecked(overdue);
}

bool AdminStatsView::isOverdue(const BorrowStatsRecord &record) const
{
    return record.status == BorrowStatsRecord::Status::Borrowed
        && record.dueDate.isValid()
        && record.dueDate < QDate::currentDate();
}

QVector<const AdminStatsView::BorrowStatsRecord *> AdminStatsView::filteredRecords(bool overdue) const
{
    QVector<const BorrowStatsRecord *> result;
    const int period = m_periodCombo->currentData().toInt();
    const bool byDueDate = m_dateTypeCombo->currentData().toString() == QStringLiteral("due");
    const QDate earliest = period > 0 ? QDate::currentDate().addDays(-period) : QDate();

    for (const BorrowStatsRecord &record : m_records) {
        if (record.status != BorrowStatsRecord::Status::Borrowed) {
            continue;
        }
        if (overdue && !isOverdue(record)) {
            continue;
        }
        if (period > 0) {
            const QDate date = byDueDate ? record.dueDate : record.borrowDate.date();
            if (date.isValid() && date < earliest) {
                continue;
            }
        }
        result.append(&record);
    }
    return result;
}

void AdminStatsView::renderTables()
{
    /*
        const QList<::BorrowRecord> backendBorrowed =
        BorrowService::allRecords(QStringLiteral("borrowed"));
        const QList<::BorrowRecord> backendOverdue =
        BorrowService::overdueList();
        auto toStatsRecord = [](const ::BorrowRecord &source) {
            BorrowStatsRecord record;
            record.recordId = source.id;
            record.readerId = source.readerId;
            record.bookId = source.bookId;
            record.bookTitle = source.bookTitle;
            record.readerName = source.readerName;
            record.studentNo = source.readerNo;
            record.borrowDate = source.borrowDate;
            record.dueDate = source.dueDate;
            record.returnDate = source.returnDate;
            record.renewCount = source.renewCount;
            record.status = source.isReturned()
            ? BorrowStatsRecord::Status::Returned
            : BorrowStatsRecord::Status::Borrowed;
            return record;
        };
        const LibraryStats summary = StatsService::libraryStats();
        const QList<CategoryStat> categories = StatsService::categoryStats();
        const QList<PopularBook> popular = StatsService::popularBooks(5);
        const ServiceResult exportResult = ExportService::exportBorrowRecords(
        backendBorrowed, QFileDialog::getSaveFileName(
        this, QStringLiteral("导出借阅记录"), QString(),
        QStringLiteral("CSV (*.csv)")));
    */
    auto populate = [this](QStandardItemModel *model,
                            const QVector<const BorrowStatsRecord *> &records) {
        model->removeRows(0, model->rowCount());
        for (const BorrowStatsRecord *record : records) {
            auto makeItem = [](const QString &text) {
                auto *item = new QStandardItem(text);
                item->setEditable(false);
                return item;
            };
            const bool overdue = isOverdue(*record);
            auto *status = makeItem(overdue ? QStringLiteral("已逾期")
                                            : QStringLiteral("借阅中"));
            status->setTextAlignment(Qt::AlignCenter);
            status->setForeground(QBrush(overdue
                    ? QColor(QStringLiteral("#C2410C"))
                    : QColor(QStringLiteral("#1B7F4B"))));
            model->appendRow({
                makeItem(record->bookTitle),
                makeItem(record->readerName),
                makeItem(record->studentNo),
                makeItem(record->borrowDate.toString(QStringLiteral("yyyy-MM-dd HH:mm"))),
                makeItem(record->dueDate.toString(QStringLiteral("yyyy-MM-dd"))),
                status,
            });
        }
    };

    const auto borrowed = filteredRecords(false);
    const auto overdue = filteredRecords(true);
    populate(m_borrowedModel, borrowed);
    populate(m_overdueModel, overdue);
    m_borrowedCountLabel->setText(QStringLiteral("在借：%1 本").arg(borrowed.size()));
    m_overdueCountLabel->setText(QStringLiteral("逾期：%1 本").arg(overdue.size()));
    m_feedbackLabel->setText(
        QStringLiteral("当前筛选结果显示 %1 条在借记录和 %2 条逾期记录。")
            .arg(borrowed.size())
            .arg(overdue.size()));
}

QWidget *createAdminStatsView(QWidget *parent)
{
    return new AdminStatsView(parent);
}
