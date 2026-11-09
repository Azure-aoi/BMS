#include "MyReserveView.h"
#include "core/SessionManager.h"
#include "services/ReservationService.h"

#include <FluentQt/FluentQt.h>

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

MyReserveView::MyReserveView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("MyReserveView"));
    buildUi();
    loadReservations();
    renderTable();
}

MyReserveView::~MyReserveView() = default;

void MyReserveView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("我的预约"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("查看预约进度，并在取书截止时间前到馆领取。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *toolbar = new QHBoxLayout;
    auto *countLabel = new Label(QStringLiteral("预约记录"), this);
    countLabel->setFluentTypography(Typography::FontRole::BodyStrong);
    countLabel->setTextColorRole(Label::TextColorRole::Primary);
    toolbar->addWidget(countLabel);
    toolbar->addStretch();

    m_cancelButton = new Button(QStringLiteral("取消预约"), this);
    m_cancelButton->setObjectName(QStringLiteral("CancelReservationButton"));
    m_cancelButton->setFluentStyle(Button::Subtle);
    m_cancelButton->setFluentSize(Button::Small);
    m_cancelButton->setFluentLayout(Button::IconBefore);
    m_cancelButton->setIconGlyph(Typography::Icons::Cancel, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_cancelButton->setFixedHeight(36);
    m_cancelButton->setEnabled(false);
    toolbar->addWidget(m_cancelButton);
    rootLayout->addLayout(toolbar);

    m_model = new QStandardItemModel(0, 5, this);
    m_model->setHorizontalHeaderLabels({
        QStringLiteral("书名"),
        QStringLiteral("作者"),
        QStringLiteral("预约时间"),
        QStringLiteral("备注"),
        QStringLiteral("状态"),
    });

    m_grid = new DataGrid(this);
    m_grid->setObjectName(QStringLiteral("MyReserveGrid"));
    m_grid->setModel(m_model);
    m_grid->setPlaceholderText(QStringLiteral("暂无预约记录"));
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
    m_grid->horizontalHeader()->resizeSection(3, 250);
    m_grid->horizontalHeader()->resizeSection(4, 100);
    rootLayout->addWidget(m_grid, 1);

    m_feedbackLabel = new Label(
        QStringLiteral("选择一条预约记录后可取消预约。"), this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_grid->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, [this] { updateActionState(); });
    connect(m_cancelButton, &Button::clicked, this, [this] {
        cancelSelectedReservation();
    });

    m_records = {
        {5001, 1, 3, QStringLiteral("百年孤独"), QStringLiteral("加西亚·马尔克斯"),
         QDateTime(QDate(2026, 10, 28), QTime(10, 15)),
         ReserveRecord::Status::Ready, QStringLiteral("已到馆，请于 11 月 2 日前领取")},
        {5002, 1, 9, QStringLiteral("深入理解计算机系统"), QStringLiteral("Randal E. Bryant"),
         QDateTime(QDate(2026, 10, 26), QTime(14, 30)),
         ReserveRecord::Status::Ready, QStringLiteral("图书已到达服务台")},
        {5003, 1, 6, QStringLiteral("小王子"), QStringLiteral("安托万·德·圣埃克苏佩里"),
         QDateTime(QDate(2026, 10, 20), QTime(9, 5)),
         ReserveRecord::Status::Pending, QStringLiteral("等待可借库存")},
        {5004, 1, 14, QStringLiteral("局外人"), QStringLiteral("阿尔贝·加缪"),
         QDateTime(QDate(2026, 10, 18), QTime(16, 40)),
         ReserveRecord::Status::Cancelled, QStringLiteral("读者主动取消")},
    };
}

void MyReserveView::loadReservations()
{
    const QList<::Reservation> reservations =
        ReservationService::forReader(SessionManager::userId());
    m_records.clear();
    for (const ::Reservation &source : reservations) {
        ReserveRecord record;
        record.reservationId = source.id;
        record.readerId = source.readerId;
        record.bookId = source.bookId;
        record.title = source.bookTitle;
        record.author = source.bookAuthor;
        record.reserveDate = source.reserveDate;
        record.note = source.note;
        if (source.status == QStringLiteral("ready")) {
            record.status = ReserveRecord::Status::Ready;
        } else if (source.status == QStringLiteral("cancelled")) {
            record.status = ReserveRecord::Status::Cancelled;
        } else if (source.status == QStringLiteral("fulfilled")) {
            record.status = ReserveRecord::Status::Fulfilled;
        } else {
            record.status = ReserveRecord::Status::Pending;
        }
        m_records.append(record);
    }
}

void MyReserveView::renderTable()
{
    /*
        const QList<::Reservation> backendRecords =
        ReservationService::forReader(SessionManager::userId());
        m_records.clear();
        for (const ::Reservation &source : backendRecords) {
            ReserveRecord record;
            record.reservationId = source.id;
            record.readerId = source.readerId;
            record.bookId = source.bookId;
            record.title = source.bookTitle;
            record.author = source.bookAuthor;
            record.reserveDate = source.reserveDate;
            record.note = source.note;
            if (source.status == QStringLiteral("ready")) {
                record.status = ReserveRecord::Status::Ready;
            } else if (source.status == QStringLiteral("cancelled")) {
                record.status = ReserveRecord::Status::Cancelled;
            } else if (source.status == QStringLiteral("fulfilled")) {
                record.status = ReserveRecord::Status::Fulfilled;
            } else {
                record.status = ReserveRecord::Status::Pending;
            }
            m_records.append(record);
        }
    */
    m_model->removeRows(0, m_model->rowCount());
    for (const ReserveRecord &record : m_records) {
        auto makeItem = [](const QString &text) {
            auto *item = new QStandardItem(text);
            item->setEditable(false);
            return item;
        };
        auto *status = makeItem(statusText(record));
        status->setTextAlignment(Qt::AlignCenter);
        if (record.status == ReserveRecord::Status::Ready) {
            status->setForeground(QBrush(QColor(QStringLiteral("#1B7F4B"))));
        } else if (record.status == ReserveRecord::Status::Pending) {
            status->setForeground(QBrush(QColor(QStringLiteral("#C2410C"))));
        } else {
            status->setForeground(QBrush(QColor(QStringLiteral("#6B7280"))));
        }
        m_model->appendRow({
            makeItem(record.title),
            makeItem(record.author),
            makeItem(record.reserveDate.toString(QStringLiteral("yyyy-MM-dd HH:mm"))),
            makeItem(record.note),
            status,
        });
    }
    updateActionState();
}

const MyReserveView::ReserveRecord *MyReserveView::selectedRecord() const
{
    const QModelIndexList rows = m_grid->selectionModel()->selectedRows();
    if (rows.isEmpty()) {
        return nullptr;
    }
    const int row = rows.first().row();
    return row >= 0 && row < m_records.size() ? &m_records.at(row) : nullptr;
}

void MyReserveView::cancelSelectedReservation()
{
    const ReserveRecord *selected = selectedRecord();
    if (!selected) {
        return;
    }
    const ServiceResult result = ReservationService::cancelReservation(
        selected->reservationId, SessionManager::userId());
    if (!result.ok()) {
        m_feedbackLabel->setText(result.message);
        return;
    }
    loadReservations();
    renderTable();
    m_feedbackLabel->setText(result.message);
    return;

    /*
        const ServiceResult backendResult =
        ReservationService::cancelReservation(
        record.reservationId, SessionManager::userId());
        if (!backendResult.ok()) {
            m_feedbackLabel->setText(backendResult.message);
            return;
        }
        renderTable();
        m_feedbackLabel->setText(backendResult.message);
    */
    const QModelIndexList rows = m_grid->selectionModel()->selectedRows();
    if (rows.isEmpty()) {
        return;
    }
    const int row = rows.first().row();
    if (row < 0 || row >= m_records.size()) {
        return;
    }
    ReserveRecord &record = m_records[row];
    const QString title = record.title;
    record.status = ReserveRecord::Status::Cancelled;
    record.note = QStringLiteral("读者主动取消");
    renderTable();
    m_feedbackLabel->setText(QStringLiteral("已取消《%1》的预约。").arg(title));
}

void MyReserveView::updateActionState()
{
    m_cancelButton->setEnabled(selectedRecord() != nullptr);
}

QString MyReserveView::statusText(const ReserveRecord &record) const
{
    switch (record.status) {
    case ReserveRecord::Status::Pending:
        return QStringLiteral("等待中");
    case ReserveRecord::Status::Ready:
        return QStringLiteral("可取书");
    case ReserveRecord::Status::Cancelled:
        return QStringLiteral("已取消");
    case ReserveRecord::Status::Fulfilled:
        return QStringLiteral("已完成");
    }
    return QString();
}

QWidget *createMyReserveView(QWidget *parent)
{
    return new MyReserveView(parent);
}
