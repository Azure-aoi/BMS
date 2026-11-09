#include "MyBorrowView.h"
#include "core/SessionManager.h"
#include "services/BorrowService.h"

#include <FluentQt/FluentQt.h>

#include <QButtonGroup>
#include <QDialog>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QStackedWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTime>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::basicinput::CheckBox;
using fluent::collections::DataGrid;
using fluent::textfields::Label;

MyBorrowView::MyBorrowView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("MyBorrowView"));
    buildUi();
    loadBorrowRecords();
    renderCurrentPage();
    renderHistoryPage();
    switchTab(false);
}

MyBorrowView::~MyBorrowView() = default;

void MyBorrowView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("我的借阅"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("查看当前借阅和历史借阅记录，逾期图书请尽快归还。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *tabLayout = new QHBoxLayout;
    tabLayout->setSpacing(8);

    m_currentTabButton = new Button(QStringLiteral("当前借阅"), this);
    m_currentTabButton->setObjectName(QStringLiteral("CurrentBorrowTabButton"));
    m_currentTabButton->setFluentStyle(Button::Subtle);
    m_currentTabButton->setCheckable(true);
    m_currentTabButton->setChecked(true);
    m_currentTabButton->setFixedSize(120, 38);

    m_historyTabButton = new Button(QStringLiteral("历史借阅"), this);
    m_historyTabButton->setObjectName(QStringLiteral("HistoryBorrowTabButton"));
    m_historyTabButton->setFluentStyle(Button::Subtle);
    m_historyTabButton->setCheckable(true);
    m_historyTabButton->setFixedSize(120, 38);

    auto *tabGroup = new QButtonGroup(this);
    tabGroup->setExclusive(true);
    tabGroup->addButton(m_currentTabButton, 0);
    tabGroup->addButton(m_historyTabButton, 1);
    tabLayout->addWidget(m_currentTabButton);
    tabLayout->addWidget(m_historyTabButton);
    tabLayout->addStretch();
    rootLayout->addLayout(tabLayout);

    m_tabStack = new QStackedWidget(this);
    auto *currentPage = new QWidget(m_tabStack);
    auto *historyPage = new QWidget(m_tabStack);
    buildCurrentPage(currentPage);
    buildHistoryPage(historyPage);
    m_tabStack->addWidget(currentPage);
    m_tabStack->addWidget(historyPage);
    rootLayout->addWidget(m_tabStack, 1);

    m_feedbackLabel = new Label(
        QStringLiteral("选择一条借阅记录后，可查看详情或续借。"), this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_currentTabButton, &Button::clicked, this, [this] {
        switchTab(false);
    });
    connect(m_historyTabButton, &Button::clicked, this, [this] {
        switchTab(true);
    });

    m_records = {
        {1001, 25334163, 1, QStringLiteral("三体"), QStringLiteral("刘慈欣"),
         QStringLiteral("中文图书区 A-03"),
         QDateTime(QDate(2026, 10, 10), QTime(9, 20)), QDate(2026, 11, 10),
         QDateTime(), 0, BorrowRecord::Status::Borrowed},
        {1002, 25334163, 2, QStringLiteral("人类简史"), QStringLiteral("尤瓦尔·赫拉利"),
         QStringLiteral("社科区 C-09"),
         QDateTime(QDate(2026, 9, 20), QTime(14, 5)), QDate(2026, 10, 20),
         QDateTime(), 1, BorrowRecord::Status::Borrowed},
        {1003, 25334163, 11, QStringLiteral("设计模式"), QStringLiteral("Erich Gamma"),
         QStringLiteral("科技区 T-08"),
         QDateTime(QDate(2026, 10, 1), QTime(10, 30)), QDate(2026, 10, 31),
         QDateTime(), 0, BorrowRecord::Status::Borrowed},
        {1004, 25334163, 3, QStringLiteral("活着"), QStringLiteral("余华"),
         QStringLiteral("中文图书区 A-11"),
         QDateTime(QDate(2026, 7, 1), QTime(8, 45)), QDate(2026, 8, 1),
         QDateTime(QDate(2026, 7, 25), QTime(16, 20)), 0, BorrowRecord::Status::Returned},
        {1005, 25334163, 4, QStringLiteral("围城"), QStringLiteral("钱钟书"),
         QStringLiteral("文学区 B-02"),
         QDateTime(QDate(2026, 5, 12), QTime(11, 10)), QDate(2026, 6, 12),
         QDateTime(QDate(2026, 6, 6), QTime(15, 45)), 1, BorrowRecord::Status::Returned},
        {1006, 25334163, 12, QStringLiteral("时间简史"), QStringLiteral("史蒂芬·霍金"),
         QStringLiteral("科技区 T-12"),
         QDateTime(QDate(2026, 3, 8), QTime(13, 15)), QDate(2026, 4, 8),
         QDateTime(QDate(2026, 4, 2), QTime(9, 50)), 0, BorrowRecord::Status::Returned},
    };
}

void MyBorrowView::buildCurrentPage(QWidget *page)
{
    auto *layout = new QVBoxLayout(page);
    layout->setContentsMargins(0, 8, 0, 0);
    layout->setSpacing(10);

    auto *toolbar = new QHBoxLayout;
    toolbar->setSpacing(8);

    m_overdueOnlyCheck = new CheckBox(QStringLiteral("只看逾期"), page);
    m_overdueOnlyCheck->setObjectName(QStringLiteral("OverdueOnlyCheckBox"));
    toolbar->addWidget(m_overdueOnlyCheck);
    toolbar->addStretch();

    m_currentDetailButton = new Button(QStringLiteral("查看详情"), page);
    m_currentDetailButton->setObjectName(QStringLiteral("CurrentBorrowDetailButton"));
    m_currentDetailButton->setFluentStyle(Button::Subtle);
    m_currentDetailButton->setFluentSize(Button::Small);
    m_currentDetailButton->setFluentLayout(Button::IconBefore);
    m_currentDetailButton->setIconGlyph(Typography::Icons::View, Typography::IconSize::Standard,
                                        Typography::FontFamily::FluentIcons);
    m_currentDetailButton->setFixedHeight(36);
    m_currentDetailButton->setEnabled(false);
    toolbar->addWidget(m_currentDetailButton);

    m_currentRenewButton = new Button(QStringLiteral("续借"), page);
    m_currentRenewButton->setObjectName(QStringLiteral("CurrentBorrowRenewButton"));
    m_currentRenewButton->setFluentStyle(Button::Subtle);
    m_currentRenewButton->setFluentSize(Button::Small);
    m_currentRenewButton->setFluentLayout(Button::IconBefore);
    m_currentRenewButton->setIconGlyph(Typography::Icons::Refresh, Typography::IconSize::Standard,
                                       Typography::FontFamily::FluentIcons);
    m_currentRenewButton->setFixedHeight(36);
    m_currentRenewButton->setEnabled(false);
    toolbar->addWidget(m_currentRenewButton);

    m_currentReturnButton = new Button(QStringLiteral("归还图书"), page);
    m_currentReturnButton->setObjectName(QStringLiteral("CurrentBorrowReturnButton"));
    m_currentReturnButton->setFluentStyle(Button::Subtle);
    m_currentReturnButton->setFluentSize(Button::Small);
    m_currentReturnButton->setFluentLayout(Button::IconBefore);
    m_currentReturnButton->setIconGlyph(Typography::Icons::CheckMark,
                                        Typography::IconSize::Standard,
                                        Typography::FontFamily::FluentIcons);
    m_currentReturnButton->setFixedHeight(36);
    m_currentReturnButton->setEnabled(false);
    toolbar->addWidget(m_currentReturnButton);
    layout->addLayout(toolbar);

    m_currentModel = new QStandardItemModel(0, 6, this);
    m_currentModel->setHorizontalHeaderLabels({
        QStringLiteral("书名"), QStringLiteral("作者"), QStringLiteral("借阅时间"),
        QStringLiteral("应还日期"), QStringLiteral("续借次数"), QStringLiteral("状态"),
    });

    m_currentGrid = new DataGrid(page);
    m_currentGrid->setObjectName(QStringLiteral("CurrentBorrowGrid"));
    m_currentGrid->setModel(m_currentModel);
    m_currentGrid->setPlaceholderText(QStringLiteral("暂无当前借阅记录"));
    m_currentGrid->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_currentGrid->setSelectionMode(DataGrid::SelectionMode::Single);
    m_currentGrid->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_currentGrid->setShowGrid(false);
    m_currentGrid->setBorderVisible(false);
    m_currentGrid->verticalHeader()->hide();
    m_currentGrid->verticalHeader()->setDefaultSectionSize(46);
    m_currentGrid->horizontalHeader()->setStretchLastSection(false);
    m_currentGrid->horizontalHeader()->setMinimumSectionSize(70);
    for (int column = 0; column < 6; ++column) {
        m_currentGrid->horizontalHeader()->setSectionResizeMode(column, QHeaderView::Interactive);
    }
    m_currentGrid->horizontalHeader()->resizeSection(0, 170);
    m_currentGrid->horizontalHeader()->resizeSection(1, 200);
    m_currentGrid->horizontalHeader()->resizeSection(2, 160);
    m_currentGrid->horizontalHeader()->resizeSection(3, 130);
    m_currentGrid->horizontalHeader()->resizeSection(4, 95);
    m_currentGrid->horizontalHeader()->resizeSection(5, 100);
    layout->addWidget(m_currentGrid, 1);

    connect(m_overdueOnlyCheck, &CheckBox::toggled, this, [this] {
        renderCurrentPage();
    });
    connect(m_currentGrid, &QAbstractItemView::doubleClicked, this, [this](const QModelIndex &index) {
        const BorrowRecord *record = bookForRow(index.row(), false);
        if (record) {
            showDetails(*record);
        }
    });
    connect(m_currentGrid->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, [this] { updateActionState(); });
    connect(m_currentDetailButton, &Button::clicked, this, [this] {
        const BorrowRecord *record = selectedBook(false);
        if (record) {
            showDetails(*record);
        }
    });
    connect(m_currentRenewButton, &Button::clicked, this, [this] {
        renewSelectedBook();
    });
    connect(m_currentReturnButton, &Button::clicked, this, [this] {
        returnSelectedBook();
    });
}

void MyBorrowView::buildHistoryPage(QWidget *page)
{
    auto *layout = new QVBoxLayout(page);
    layout->setContentsMargins(0, 8, 0, 0);
    layout->setSpacing(10);

    auto *toolbar = new QHBoxLayout;
    toolbar->addStretch();
    m_historyDetailButton = new Button(QStringLiteral("查看详情"), page);
    m_historyDetailButton->setObjectName(QStringLiteral("HistoryBorrowDetailButton"));
    m_historyDetailButton->setFluentStyle(Button::Subtle);
    m_historyDetailButton->setFluentSize(Button::Small);
    m_historyDetailButton->setFluentLayout(Button::IconBefore);
    m_historyDetailButton->setIconGlyph(Typography::Icons::View, Typography::IconSize::Standard,
                                        Typography::FontFamily::FluentIcons);
    m_historyDetailButton->setFixedHeight(36);
    m_historyDetailButton->setEnabled(false);
    toolbar->addWidget(m_historyDetailButton);
    layout->addLayout(toolbar);

    m_historyModel = new QStandardItemModel(0, 6, this);
    m_historyModel->setHorizontalHeaderLabels({
        QStringLiteral("书名"), QStringLiteral("作者"), QStringLiteral("借阅时间"),
        QStringLiteral("归还时间"), QStringLiteral("续借次数"), QStringLiteral("状态"),
    });

    m_historyGrid = new DataGrid(page);
    m_historyGrid->setObjectName(QStringLiteral("HistoryBorrowGrid"));
    m_historyGrid->setModel(m_historyModel);
    m_historyGrid->setPlaceholderText(QStringLiteral("暂无历史借阅记录"));
    m_historyGrid->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_historyGrid->setSelectionMode(DataGrid::SelectionMode::Single);
    m_historyGrid->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_historyGrid->setShowGrid(false);
    m_historyGrid->setBorderVisible(false);
    m_historyGrid->verticalHeader()->hide();
    m_historyGrid->verticalHeader()->setDefaultSectionSize(46);
    m_historyGrid->horizontalHeader()->setStretchLastSection(false);
    m_historyGrid->horizontalHeader()->setMinimumSectionSize(70);
    for (int column = 0; column < 6; ++column) {
        m_historyGrid->horizontalHeader()->setSectionResizeMode(column, QHeaderView::Interactive);
    }
    m_historyGrid->horizontalHeader()->resizeSection(0, 170);
    m_historyGrid->horizontalHeader()->resizeSection(1, 200);
    m_historyGrid->horizontalHeader()->resizeSection(2, 160);
    m_historyGrid->horizontalHeader()->resizeSection(3, 160);
    m_historyGrid->horizontalHeader()->resizeSection(4, 95);
    m_historyGrid->horizontalHeader()->resizeSection(5, 100);
    layout->addWidget(m_historyGrid, 1);

    connect(m_historyGrid, &QAbstractItemView::doubleClicked, this, [this](const QModelIndex &index) {
        const BorrowRecord *record = bookForRow(index.row(), true);
        if (record) {
            showDetails(*record);
        }
    });
    connect(m_historyGrid->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, [this] { updateActionState(); });
    connect(m_historyDetailButton, &Button::clicked, this, [this] {
        const BorrowRecord *record = selectedBook(true);
        if (record) {
            showDetails(*record);
        }
    });
}

void MyBorrowView::loadBorrowRecords()
{
    const int readerId = SessionManager::userId();
    const QList<::BorrowRecord> current = BorrowService::currentBorrows(readerId);
    const QList<::BorrowRecord> history = BorrowService::historyBorrows(readerId);

    m_records.clear();
    auto appendRecords = [this](const QList<::BorrowRecord> &records) {
        for (const ::BorrowRecord &source : records) {
            BorrowRecord record;
            record.recordId = source.id;
            record.readerId = source.readerId;
            record.bookId = source.bookId;
            record.title = source.bookTitle;
            record.author = source.bookAuthor;
            record.borrowDate = source.borrowDate;
            record.dueDate = source.dueDate;
            record.returnDate = source.returnDate;
            record.renewCount = source.renewCount;
            record.status = source.isReturned()
                ? BorrowRecord::Status::Returned
                : BorrowRecord::Status::Borrowed;
            m_records.append(record);
        }
    };
    appendRecords(current);
    appendRecords(history);
}

void MyBorrowView::switchTab(bool history)
{
    m_tabStack->setCurrentIndex(history ? 1 : 0);
    m_currentTabButton->setChecked(!history);
    m_historyTabButton->setChecked(history);
    setFeedback(history
            ? QStringLiteral("历史借阅仅用于查看，已归还图书不可续借。")
            : QStringLiteral("选择一条借阅记录后，可查看详情或续借。"));
    updateActionState();
}

void MyBorrowView::renderCurrentPage()
{
    /*
        const QList<::BorrowRecord> backendRecords =
        BorrowService::currentBorrows(SessionManager::userId());
        m_records.clear();
        for (const ::BorrowRecord &source : backendRecords) {
            BorrowRecord record;
            record.recordId = source.id;
            record.readerId = source.readerId;
            record.bookId = source.bookId;
            record.title = source.bookTitle;
            record.author = source.bookAuthor;
            record.borrowDate = source.borrowDate;
            record.dueDate = source.dueDate;
            record.returnDate = source.returnDate;
            record.renewCount = source.renewCount;
            record.status = source.isReturned()
            ? BorrowRecord::Status::Returned
            : BorrowRecord::Status::Borrowed;
            m_records.append(record);
        }
    */
    m_currentModel->removeRows(0, m_currentModel->rowCount());
    m_visibleCurrentRecords.clear();
    const bool overdueOnly = m_overdueOnlyCheck && m_overdueOnlyCheck->isChecked();

    for (const BorrowRecord &record : m_records) {
        if (record.status != BorrowRecord::Status::Borrowed
            || (overdueOnly && !isOverdue(record))) {
            continue;
        }
        m_visibleCurrentRecords.append(&record);
        const bool overdue = isOverdue(record);
        auto *status = new QStandardItem(statusText(record));
        status->setEditable(false);
        status->setTextAlignment(Qt::AlignCenter);
        status->setForeground(QBrush(overdue ? QColor(QStringLiteral("#C2410C"))
                                             : QColor(QStringLiteral("#1B7F4B"))));
        m_currentModel->appendRow({
            new QStandardItem(record.title),
            new QStandardItem(record.author),
            new QStandardItem(formatDateTime(record.borrowDate)),
            new QStandardItem(record.dueDate.toString(QStringLiteral("yyyy-MM-dd"))),
            new QStandardItem(QString::number(record.renewCount)),
            status,
        });
    }
    updateActionState();
}

void MyBorrowView::renderHistoryPage()
{
    /*
        const QList<::BorrowRecord> backendRecords =
        BorrowService::historyBorrows(SessionManager::userId());
        m_records = toViewRecords(backendRecords);
    */
    m_historyModel->removeRows(0, m_historyModel->rowCount());
    m_visibleHistoryRecords.clear();

    for (const BorrowRecord &record : m_records) {
        if (record.status != BorrowRecord::Status::Returned) {
            continue;
        }
        m_visibleHistoryRecords.append(&record);
        auto *status = new QStandardItem(QStringLiteral("已归还"));
        status->setEditable(false);
        status->setTextAlignment(Qt::AlignCenter);
        status->setForeground(QBrush(QColor(QStringLiteral("#4B5563"))));
        m_historyModel->appendRow({
            new QStandardItem(record.title),
            new QStandardItem(record.author),
            new QStandardItem(formatDateTime(record.borrowDate)),
            new QStandardItem(formatDateTime(record.returnDate)),
            new QStandardItem(QString::number(record.renewCount)),
            status,
        });
    }
    updateActionState();
}

const MyBorrowView::BorrowRecord *MyBorrowView::bookForRow(int row, bool history) const
{
    const QVector<const BorrowRecord *> &records =
        history ? m_visibleHistoryRecords : m_visibleCurrentRecords;
    return row >= 0 && row < records.size() ? records.at(row) : nullptr;
}

const MyBorrowView::BorrowRecord *MyBorrowView::selectedBook(bool history) const
{
    DataGrid *grid = history ? m_historyGrid : m_currentGrid;
    const QModelIndexList rows = grid->selectionModel()->selectedRows();
    return rows.isEmpty() ? nullptr : bookForRow(rows.first().row(), history);
}

bool MyBorrowView::isOverdue(const BorrowRecord &record) const
{
    return record.status == BorrowRecord::Status::Borrowed
        && record.dueDate.isValid()
        && record.dueDate < QDate::currentDate();
}

QString MyBorrowView::statusText(const BorrowRecord &record) const
{
    if (record.status == BorrowRecord::Status::Returned) {
        return QStringLiteral("已归还");
    }
    return isOverdue(record) ? QStringLiteral("已逾期") : QStringLiteral("借阅中");
}

QString MyBorrowView::formatDateTime(const QDateTime &dateTime) const
{
    return dateTime.isValid()
        ? dateTime.toString(QStringLiteral("yyyy-MM-dd HH:mm"))
        : QStringLiteral("未归还");
}

void MyBorrowView::updateActionState()
{
    const bool currentSelected = selectedBook(false) != nullptr;
    const bool historySelected = selectedBook(true) != nullptr;
    if (m_currentDetailButton) {
        m_currentDetailButton->setEnabled(currentSelected);
    }
    if (m_currentRenewButton) {
        m_currentRenewButton->setEnabled(currentSelected);
    }
    if (m_currentReturnButton) {
        m_currentReturnButton->setEnabled(currentSelected);
    }
    if (m_historyDetailButton) {
        m_historyDetailButton->setEnabled(historySelected);
    }
}

void MyBorrowView::showDetails(const BorrowRecord &record)
{
    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("借阅详情"));
    dialog.setMinimumSize(460, 300);

    auto *layout = new QVBoxLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setSpacing(12);

    auto *title = new Label(record.title, &dialog);
    title->setFluentTypography(Typography::FontRole::Subtitle);
    title->setTextColorRole(Label::TextColorRole::Primary);
    layout->addWidget(title);

    const QString status = statusText(record);
    auto *details = new Label(
        QStringLiteral(
            "借阅记录号：%1\n作者：%2\n馆藏位置：%3\n借阅时间：%4\n应还日期：%5\n"
            "归还时间：%6\n续借次数：%7\n状态：%8")
            .arg(record.recordId)
            .arg(record.author, record.location)
            .arg(formatDateTime(record.borrowDate))
            .arg(record.dueDate.toString(QStringLiteral("yyyy-MM-dd")))
            .arg(formatDateTime(record.returnDate))
            .arg(record.renewCount)
            .arg(status),
        &dialog);
    details->setWordWrap(true);
    details->setFluentTypography(Typography::FontRole::Body);
    details->setTextColorRole(Label::TextColorRole::Secondary);
    layout->addWidget(details);
    layout->addStretch();

    auto *closeButton = new Button(QStringLiteral("关闭"), &dialog);
    closeButton->setFluentStyle(Button::Accent);
    closeButton->setFixedSize(96, 40);
    auto *buttonLayout = new QHBoxLayout;
    buttonLayout->addStretch();
    buttonLayout->addWidget(closeButton);
    layout->addLayout(buttonLayout);
    connect(closeButton, &Button::clicked, &dialog, &QDialog::accept);
    dialog.exec();
}

void MyBorrowView::renewSelectedBook()
{
    const BorrowRecord *selected = selectedBook(false);
    if (!selected) {
        return;
    }
    const ServiceResult result = BorrowService::renewBook(selected->recordId);
    if (!result.ok()) {
        setFeedback(result.message);
        return;
    }
    loadBorrowRecords();
    renderCurrentPage();
    renderHistoryPage();
    setFeedback(result.message);
    return;

    /*
        const ServiceResult backendResult =
        BorrowService::renewBook(record->recordId);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        renderCurrentPage();
        renderHistoryPage();
        setFeedback(backendResult.message);
    */
    const BorrowRecord *record = selectedBook(false);
    if (!record) {
        return;
    }
    if (isOverdue(*record)) {
        setFeedback(QStringLiteral("《%1》已逾期，请先归还后再借阅。").arg(record->title));
        return;
    }

    for (BorrowRecord &candidate : m_records) {
        if (candidate.recordId != record->recordId) {
            continue;
        }
        ++candidate.renewCount;
        candidate.dueDate = candidate.dueDate.addDays(30);
        break;
    }

    renderCurrentPage();
    renderHistoryPage();
    setFeedback(QStringLiteral("《%1》已续借，新应还日期为 %2。")
                    .arg(record->title, record->dueDate.toString(QStringLiteral("yyyy-MM-dd"))));
}

void MyBorrowView::returnSelectedBook()
{
    const BorrowRecord *selected = selectedBook(false);
    if (!selected) {
        return;
    }
    const ServiceResult result = BorrowService::returnBook(selected->recordId);
    if (!result.ok()) {
        setFeedback(result.message);
        return;
    }
    loadBorrowRecords();
    renderCurrentPage();
    renderHistoryPage();
    setFeedback(result.message);
    return;

    /*
        const ServiceResult backendResult =
        BorrowService::returnBook(record->recordId);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        renderCurrentPage();
        renderHistoryPage();
        setFeedback(backendResult.message);
    */
    const BorrowRecord *record = selectedBook(false);
    if (!record) {
        return;
    }

    const QString title = record->title;
    for (BorrowRecord &candidate : m_records) {
        if (candidate.recordId != record->recordId) {
            continue;
        }
        candidate.returnDate = QDateTime::currentDateTime();
        candidate.status = BorrowRecord::Status::Returned;
        break;
    }

    renderCurrentPage();
    renderHistoryPage();
    setFeedback(QStringLiteral("《%1》已归还，借阅记录已转入历史借阅。").arg(title));
}

void MyBorrowView::setFeedback(const QString &message)
{
    m_feedbackLabel->setText(message);
}

QWidget *createMyBorrowView(QWidget *parent)
{
    return new MyBorrowView(parent);
}
