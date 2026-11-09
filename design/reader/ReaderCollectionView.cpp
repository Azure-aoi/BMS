#include "ReaderCollectionView.h"
#include "core/SessionManager.h"
#include "services/BookService.h"
#include "services/BorrowService.h"
#include "services/ReservationService.h"

#include <FluentQt/FluentQt.h>

#include <QDialog>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTime>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::collections::DataGrid;
using fluent::textfields::Label;

ReaderCollectionView::ReaderCollectionView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("ReaderCollectionView"));
    buildUi();
    loadFavorites();
    renderTable();
}

ReaderCollectionView::~ReaderCollectionView() = default;

void ReaderCollectionView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("我的收藏"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("管理收藏图书，并快速发起借阅或预约。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *toolbar = new QHBoxLayout;
    toolbar->setSpacing(8);
    auto *countLabel = new Label(QStringLiteral("收藏图书"), this);
    countLabel->setFluentTypography(Typography::FontRole::BodyStrong);
    countLabel->setTextColorRole(Label::TextColorRole::Primary);
    toolbar->addWidget(countLabel);
    toolbar->addStretch();

    m_borrowButton = new Button(QStringLiteral("快捷借阅"), this);
    m_borrowButton->setObjectName(QStringLiteral("QuickBorrowButton"));
    m_borrowButton->setFluentStyle(Button::Subtle);
    m_borrowButton->setFluentSize(Button::Small);
    m_borrowButton->setFluentLayout(Button::IconBefore);
    m_borrowButton->setIconGlyph(Typography::Icons::Download, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_borrowButton->setFixedHeight(36);
    m_borrowButton->setEnabled(false);
    toolbar->addWidget(m_borrowButton);

    m_reserveButton = new Button(QStringLiteral("预约"), this);
    m_reserveButton->setObjectName(QStringLiteral("CollectionReserveButton"));
    m_reserveButton->setFluentStyle(Button::Subtle);
    m_reserveButton->setFluentSize(Button::Small);
    m_reserveButton->setFluentLayout(Button::IconBefore);
    m_reserveButton->setIconGlyph(Typography::Icons::Calendar, Typography::IconSize::Standard,
                                  Typography::FontFamily::FluentIcons);
    m_reserveButton->setFixedHeight(36);
    m_reserveButton->setEnabled(false);
    toolbar->addWidget(m_reserveButton);

    m_removeButton = new Button(QStringLiteral("取消收藏"), this);
    m_removeButton->setObjectName(QStringLiteral("RemoveCollectionButton"));
    m_removeButton->setFluentStyle(Button::Subtle);
    m_removeButton->setFluentSize(Button::Small);
    m_removeButton->setFluentLayout(Button::IconBefore);
    m_removeButton->setIconGlyph(Typography::Icons::HeartFill, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_removeButton->setFixedHeight(36);
    m_removeButton->setEnabled(false);
    toolbar->addWidget(m_removeButton);
    rootLayout->addLayout(toolbar);

    m_model = new QStandardItemModel(0, 5, this);
    m_model->setHorizontalHeaderLabels({
        QStringLiteral("书名"),
        QStringLiteral("作者"),
        QStringLiteral("收藏时间"),
        QStringLiteral("出版社"),
        QStringLiteral("可借状态"),
    });

    m_grid = new DataGrid(this);
    m_grid->setObjectName(QStringLiteral("CollectionGrid"));
    m_grid->setModel(m_model);
    m_grid->setPlaceholderText(QStringLiteral("还没有收藏图书"));
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
    m_grid->horizontalHeader()->resizeSection(0, 170);
    m_grid->horizontalHeader()->resizeSection(1, 200);
    m_grid->horizontalHeader()->resizeSection(2, 160);
    m_grid->horizontalHeader()->resizeSection(3, 150);
    m_grid->horizontalHeader()->resizeSection(4, 100);
    rootLayout->addWidget(m_grid, 1);

    m_feedbackLabel = new Label(
        QStringLiteral("选择一个收藏项后，可以借阅、预约或取消收藏。"), this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_grid->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, [this] { updateActionState(); });
    connect(m_grid, &QAbstractItemView::doubleClicked, this, [this](const QModelIndex &index) {
        if (index.row() >= 0 && index.row() < m_records.size()) {
            showDetails(m_records.at(index.row()));
        }
    });
    connect(m_removeButton, &Button::clicked, this, [this] {
        removeSelectedCollection();
    });
    connect(m_borrowButton, &Button::clicked, this, [this] {
        quickBorrowSelectedBook();
    });
    connect(m_reserveButton, &Button::clicked, this, [this] {
        reserveSelectedBook();
    });

    m_records = {
        {1, 1, QStringLiteral("三体"), QStringLiteral("刘慈欣"), QStringLiteral("重庆出版社"),
         QDateTime(QDate(2026, 10, 20), QTime(9, 10)), 8, 5},
        {1, 5, QStringLiteral("人类简史"), QStringLiteral("尤瓦尔·赫拉利"),
         QStringLiteral("中信出版社"), QDateTime(QDate(2026, 10, 16), QTime(14, 20)), 4, 2},
        {1, 11, QStringLiteral("设计模式"), QStringLiteral("Erich Gamma"),
         QStringLiteral("机械工业出版社"), QDateTime(QDate(2026, 10, 12), QTime(11, 35)), 2, 0},
        {1, 6, QStringLiteral("小王子"), QStringLiteral("安托万·德·圣埃克苏佩里"),
         QStringLiteral("人民文学出版社"), QDateTime(QDate(2026, 10, 5), QTime(16, 45)), 6, 6},
    };
}

void ReaderCollectionView::loadFavorites()
{
    const QList<FavoriteBook> favorites =
        BookService::favorites(SessionManager::userId());
    m_records.clear();
    for (const FavoriteBook &source : favorites) {
        const Book book = BookService::book(source.bookId);
        CollectionRecord record;
        record.readerId = SessionManager::userId();
        record.bookId = source.bookId;
        record.title = source.title;
        record.author = source.author;
        record.publisher = book.publisher;
        record.createdAt = source.createdAt;
        record.totalCopies = source.totalCopies;
        record.availableCopies = source.availableCopies;
        m_records.append(record);
    }
}

void ReaderCollectionView::renderTable()
{
    /*
        const QList<FavoriteBook> backendFavorites =
        BookService::favorites(SessionManager::userId());
        m_records.clear();
        for (const FavoriteBook &source : backendFavorites) {
            CollectionRecord record;
            record.readerId = SessionManager::userId();
            record.bookId = source.bookId;
            record.title = source.title;
            record.author = source.author;
            const Book book = BookService::book(source.bookId);
            record.publisher = book.publisher;
            record.createdAt = source.createdAt;
            record.totalCopies = source.totalCopies;
            record.availableCopies = source.availableCopies;
            m_records.append(record);
        }
    */
    m_model->removeRows(0, m_model->rowCount());
    for (const CollectionRecord &record : m_records) {
        auto makeItem = [](const QString &text) {
            auto *item = new QStandardItem(text);
            item->setEditable(false);
            return item;
        };
        auto *availability = makeItem(record.availableCopies > 0 ? QStringLiteral("可借")
                                                                 : QStringLiteral("暂不可借"));
        availability->setTextAlignment(Qt::AlignCenter);
        availability->setForeground(QBrush(record.availableCopies > 0
                ? QColor(QStringLiteral("#1B7F4B"))
                : QColor(QStringLiteral("#C2410C"))));
        m_model->appendRow({
            makeItem(record.title),
            makeItem(record.author),
            makeItem(record.createdAt.toString(QStringLiteral("yyyy-MM-dd HH:mm"))),
            makeItem(record.publisher),
            availability,
        });
    }
    updateActionState();
}

const ReaderCollectionView::CollectionRecord *ReaderCollectionView::selectedRecord() const
{
    const QModelIndexList rows = m_grid->selectionModel()->selectedRows();
    if (rows.isEmpty()) {
        return nullptr;
    }
    const int row = rows.first().row();
    return row >= 0 && row < m_records.size() ? &m_records.at(row) : nullptr;
}

void ReaderCollectionView::updateActionState()
{
    const bool enabled = selectedRecord() != nullptr;
    m_removeButton->setEnabled(enabled);
    m_borrowButton->setEnabled(enabled);
    m_reserveButton->setEnabled(enabled);
}

void ReaderCollectionView::removeSelectedCollection()
{
    const CollectionRecord *selected = selectedRecord();
    if (!selected) {
        return;
    }
    bool favorite = true;
    const ServiceResult result = BookService::toggleFavorite(
        SessionManager::userId(), selected->bookId, &favorite);
    if (!result.ok()) {
        setFeedback(result.message);
        return;
    }
    loadFavorites();
    renderTable();
    setFeedback(result.message);
    return;

    /*
        bool nowFavorite = true;
        const ServiceResult backendResult = BookService::toggleFavorite(
        SessionManager::userId(), record->bookId, &nowFavorite);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        renderTable();
        setFeedback(backendResult.message);
    */
    const QModelIndexList rows = m_grid->selectionModel()->selectedRows();
    if (rows.isEmpty()) {
        return;
    }
    const int row = rows.first().row();
    if (row < 0 || row >= m_records.size()) {
        return;
    }
    const QString title = m_records.at(row).title;
    m_records.removeAt(row);
    renderTable();
    setFeedback(QStringLiteral("已将《%1》移出收藏。").arg(title));
}

void ReaderCollectionView::quickBorrowSelectedBook()
{
    const CollectionRecord *selected = selectedRecord();
    if (!selected) {
        return;
    }
    const ServiceResult result = BorrowService::borrowBook(
        SessionManager::userId(), selected->bookId);
    setFeedback(result.message);
    if (result.ok()) {
        loadFavorites();
        renderTable();
    }
    return;

    /*
        const ServiceResult backendResult = BorrowService::borrowBook(
        SessionManager::userId(), record->bookId);
        setFeedback(backendResult.message);
    */
    const CollectionRecord *record = selectedRecord();
    if (!record) {
        return;
    }
    setFeedback(record->availableCopies > 0
            ? QStringLiteral("已提交《%1》的快捷借阅请求。").arg(record->title)
            : QStringLiteral("《%1》暂无可借库存，可以选择预约。").arg(record->title));
}

void ReaderCollectionView::reserveSelectedBook()
{
    const CollectionRecord *selected = selectedRecord();
    if (!selected) {
        return;
    }
    const ServiceResult result = ReservationService::reserveBook(
        SessionManager::userId(), selected->bookId);
    setFeedback(result.message);
    return;

    /*
        const ServiceResult backendResult = ReservationService::reserveBook(
        SessionManager::userId(), record->bookId);
        setFeedback(backendResult.message);
    */
    const CollectionRecord *record = selectedRecord();
    if (!record) {
        return;
    }
    setFeedback(QStringLiteral("已提交《%1》的预约请求。").arg(record->title));
}

void ReaderCollectionView::showDetails(const CollectionRecord &record)
{
    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("收藏图书详情"));
    dialog.setMinimumSize(460, 280);

    auto *layout = new QVBoxLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setSpacing(12);
    auto *title = new Label(record.title, &dialog);
    title->setFluentTypography(Typography::FontRole::Subtitle);
    title->setTextColorRole(Label::TextColorRole::Primary);
    layout->addWidget(title);

    auto *details = new Label(
        QStringLiteral("作者：%1\n收藏时间：%2\n出版社：%3\n可借 / 馆藏：%4 / %5")
            .arg(record.author)
            .arg(record.createdAt.toString(QStringLiteral("yyyy-MM-dd HH:mm")))
            .arg(record.publisher)
            .arg(record.availableCopies)
            .arg(record.totalCopies),
        &dialog);
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

void ReaderCollectionView::setFeedback(const QString &message)
{
    m_feedbackLabel->setText(message);
}

QWidget *createReaderCollectionView(QWidget *parent)
{
    return new ReaderCollectionView(parent);
}
