#include "AdminReaderView.h"
#include "services/ReaderService.h"

#include <FluentQt/FluentQt.h>

#include <QDialog>
#include <QGridLayout>
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
using fluent::textfields::LineEdit;

AdminReaderView::AdminReaderView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("AdminReaderView"));
    buildUi();
    applyFilter();
}

AdminReaderView::~AdminReaderView() = default;

void AdminReaderView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("用户管理"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("检索读者账号，查看借阅状态并执行账号管理操作。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *searchLayout = new QHBoxLayout;
    searchLayout->setSpacing(10);
    m_searchEdit = new LineEdit(this);
    m_searchEdit->setObjectName(QStringLiteral("AdminReaderSearchEdit"));
    m_searchEdit->setPlaceholderText(QStringLiteral("搜索学号、姓名或学院"));
    m_searchEdit->setClearButtonEnabled(true);
    m_searchEdit->setFixedHeight(40);
    searchLayout->addWidget(m_searchEdit, 1);

    m_searchButton = new Button(QStringLiteral("查询"), this);
    m_searchButton->setObjectName(QStringLiteral("AdminReaderSearchButton"));
    m_searchButton->setFluentStyle(Button::Accent);
    m_searchButton->setFluentLayout(Button::IconBefore);
    m_searchButton->setIconGlyph(Typography::Icons::Search, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_searchButton->setFixedSize(96, 40);
    searchLayout->addWidget(m_searchButton);
    rootLayout->addLayout(searchLayout);

    auto *actionLayout = new QHBoxLayout;
    actionLayout->setSpacing(8);
    auto *listLabel = new Label(QStringLiteral("读者列表"), this);
    listLabel->setFluentTypography(Typography::FontRole::BodyStrong);
    listLabel->setTextColorRole(Label::TextColorRole::Primary);
    actionLayout->addWidget(listLabel);
    actionLayout->addStretch();

    m_borrowingButton = new Button(QStringLiteral("查看借阅"), this);
    m_borrowingButton->setObjectName(QStringLiteral("ReaderBorrowingButton"));
    m_borrowingButton->setFluentStyle(Button::Subtle);
    m_borrowingButton->setFluentSize(Button::Small);
    m_borrowingButton->setFluentLayout(Button::IconBefore);
    m_borrowingButton->setIconGlyph(Typography::Icons::Document, Typography::IconSize::Standard,
                                    Typography::FontFamily::FluentIcons);
    m_borrowingButton->setFixedHeight(36);
    actionLayout->addWidget(m_borrowingButton);

    m_editReaderButton = new Button(QStringLiteral("修改资料"), this);
    m_editReaderButton->setObjectName(QStringLiteral("EditReaderButton"));
    m_editReaderButton->setFluentStyle(Button::Subtle);
    m_editReaderButton->setFluentSize(Button::Small);
    m_editReaderButton->setFluentLayout(Button::IconBefore);
    m_editReaderButton->setIconGlyph(Typography::Icons::Edit, Typography::IconSize::Standard,
                                     Typography::FontFamily::FluentIcons);
    m_editReaderButton->setFixedHeight(36);
    actionLayout->addWidget(m_editReaderButton);

    m_freezeButton = new Button(QStringLiteral("冻结用户"), this);
    m_freezeButton->setObjectName(QStringLiteral("FreezeReaderButton"));
    m_freezeButton->setFluentStyle(Button::Subtle);
    m_freezeButton->setFluentSize(Button::Small);
    m_freezeButton->setFluentLayout(Button::IconBefore);
    m_freezeButton->setIconGlyph(Typography::Icons::Lock, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_freezeButton->setFixedHeight(36);
    actionLayout->addWidget(m_freezeButton);

    m_cancelReaderButton = new Button(QStringLiteral("注销用户"), this);
    m_cancelReaderButton->setObjectName(QStringLiteral("CancelReaderButton"));
    m_cancelReaderButton->setFluentStyle(Button::Subtle);
    m_cancelReaderButton->setFluentSize(Button::Small);
    m_cancelReaderButton->setFluentLayout(Button::IconBefore);
    m_cancelReaderButton->setIconGlyph(Typography::Icons::Delete, Typography::IconSize::Standard,
                                       Typography::FontFamily::FluentIcons);
    m_cancelReaderButton->setFixedHeight(36);
    actionLayout->addWidget(m_cancelReaderButton);
    rootLayout->addLayout(actionLayout);

    m_model = new QStandardItemModel(0, 6, this);
    m_model->setHorizontalHeaderLabels({
        QStringLiteral("学号"), QStringLiteral("姓名"), QStringLiteral("学院"),
        QStringLiteral("状态"), QStringLiteral("在借"), QStringLiteral("逾期"),
    });

    m_grid = new DataGrid(this);
    m_grid->setObjectName(QStringLiteral("AdminReaderGrid"));
    m_grid->setModel(m_model);
    m_grid->setPlaceholderText(QStringLiteral("没有匹配的读者"));
    m_grid->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_grid->setSelectionMode(DataGrid::SelectionMode::Single);
    m_grid->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_grid->setShowGrid(false);
    m_grid->setBorderVisible(false);
    m_grid->verticalHeader()->hide();
    m_grid->verticalHeader()->setDefaultSectionSize(46);
    m_grid->horizontalHeader()->setStretchLastSection(false);
    m_grid->horizontalHeader()->setMinimumSectionSize(70);
    for (int column = 0; column < 6; ++column) {
        m_grid->horizontalHeader()->setSectionResizeMode(column, QHeaderView::Interactive);
    }
    m_grid->horizontalHeader()->resizeSection(0, 140);
    m_grid->horizontalHeader()->resizeSection(1, 100);
    m_grid->horizontalHeader()->resizeSection(2, 180);
    m_grid->horizontalHeader()->resizeSection(3, 100);
    m_grid->horizontalHeader()->resizeSection(4, 85);
    m_grid->horizontalHeader()->resizeSection(5, 85);
    rootLayout->addWidget(m_grid, 1);

    m_feedbackLabel = new Label(
        QStringLiteral("选择一名读者后可查看借阅、修改资料或管理账号。"), this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_searchButton, &Button::clicked, this, [this] { applyFilter(); });
    connect(m_searchEdit, &LineEdit::returnPressed, this, [this] { applyFilter(); });
    connect(m_grid->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, [this] { updateActionState(); });
    connect(m_borrowingButton, &Button::clicked, this, [this] { showBorrowingDetails(); });
    connect(m_editReaderButton, &Button::clicked, this, [this] { editSelectedReader(); });
    connect(m_freezeButton, &Button::clicked, this, [this] { toggleFreezeSelectedReader(); });
    connect(m_cancelReaderButton, &Button::clicked, this, [this] { cancelSelectedReader(); });

    auto addReader = [this](int readerId, const QString &studentNo, const QString &name,
                             const QString &gender, int categoryId,
                             const QString &categoryName, const QString &department,
                             const QString &phone, const QString &email,
                             const QString &address, bool frozen,
                             int borrowed, int overdue) {
        ReaderRecord reader;
        reader.readerId = readerId;
        reader.studentNo = studentNo;
        reader.name = name;
        reader.gender = gender;
        reader.categoryId = categoryId;
        reader.categoryName = categoryName;
        reader.department = department;
        reader.phone = phone;
        reader.email = email;
        reader.address = address;
        reader.passwordHash = QString(64, QLatin1Char('0'));
        reader.isFrozen = frozen;
        reader.createdAt = QDateTime(QDate(2026, 9, 1), QTime(8, 0));
        reader.borrowed = borrowed;
        reader.overdue = overdue;
        m_readers.append(reader);
    };

    addReader(1, QStringLiteral("25334163"), QStringLiteral("张同学"),
              QStringLiteral("男"), 1, QStringLiteral("本科生"),
              QStringLiteral("计算机科学与技术学院"), QStringLiteral("13800001234"),
              QStringLiteral("reader@example.edu.cn"), QStringLiteral("学生公寓 6 号楼 312"),
              false, 3, 1);
    addReader(2, QStringLiteral("25334164"), QStringLiteral("李同学"),
              QStringLiteral("女"), 1, QStringLiteral("本科生"),
              QStringLiteral("经济管理学院"), QStringLiteral("13900002345"),
              QStringLiteral("li@example.edu.cn"), QStringLiteral("学生公寓 3 号楼 208"),
              false, 1, 0);
    addReader(3, QStringLiteral("25334165"), QStringLiteral("王同学"),
              QStringLiteral("女"), 1, QStringLiteral("本科生"),
              QStringLiteral("外国语学院"), QStringLiteral("13700003456"),
              QStringLiteral("wang@example.edu.cn"), QStringLiteral("学生公寓 2 号楼 105"),
              true, 0, 0);
    addReader(4, QStringLiteral("25334166"), QStringLiteral("赵同学"),
              QStringLiteral("男"), 2, QStringLiteral("教师"),
              QStringLiteral("文学院"), QStringLiteral("13600004567"),
              QStringLiteral("zhao@example.edu.cn"), QStringLiteral("教师公寓 1 号楼 402"),
              false, 5, 2);
}

void AdminReaderView::applyFilter()
{
    QString backendError;
    const QList<ReaderInfo> readers = ReaderService::listReaders(
        m_searchEdit->text().trimmed(), &backendError);
    if (!backendError.isEmpty()) {
        setFeedback(QStringLiteral("查询失败：%1").arg(backendError));
        return;
    }

    m_readers.clear();
    m_visibleIndices.clear();
    for (const ReaderInfo &source : readers) {
        ReaderRecord record;
        record.readerId = source.id;
        record.studentNo = source.studentNo;
        record.name = source.name;
        record.gender = source.gender;
        record.categoryId = source.categoryId;
        record.categoryName = source.categoryName;
        record.department = source.department;
        record.phone = source.phone;
        record.email = source.email;
        record.address = source.address;
        record.isFrozen = source.frozen;
        record.createdAt = source.createdAt;
        record.borrowed = source.activeBorrows;
        record.overdue = source.overdueCount;
        m_readers.append(record);
    }
    for (int index = 0; index < m_readers.size(); ++index) {
        m_visibleIndices.append(index);
    }
    renderTable();
    return;

    /*
        QString backendError;
        const QList<ReaderInfo> readers = ReaderService::listReaders(
        m_searchEdit->text().trimmed(), &backendError);
        if (!backendError.isEmpty()) {
            setFeedback(QStringLiteral("查询失败：%1").arg(backendError));
            return;
        }
        m_readers.clear();
        for (const ReaderInfo &source : readers) {
            ReaderRecord record;
            record.readerId = source.id;
            record.studentNo = source.studentNo;
            record.name = source.name;
            record.gender = source.gender;
            record.categoryId = source.categoryId;
            record.categoryName = source.categoryName;
            record.department = source.department;
            record.phone = source.phone;
            record.email = source.email;
            record.address = source.address;
            record.isFrozen = source.frozen;
            record.createdAt = source.createdAt;
            record.borrowed = source.activeBorrows;
            record.overdue = source.overdueCount;
            m_readers.append(record);
        }
    */
    const QString query = m_searchEdit->text().trimmed();
    m_visibleIndices.clear();
    for (int index = 0; index < m_readers.size(); ++index) {
        const ReaderRecord &reader = m_readers.at(index);
        if (query.isEmpty()
            || reader.studentNo.contains(query, Qt::CaseInsensitive)
            || reader.name.contains(query, Qt::CaseInsensitive)
            || reader.department.contains(query, Qt::CaseInsensitive)) {
            m_visibleIndices.append(index);
        }
    }
    renderTable();
}

void AdminReaderView::renderTable()
{
    m_model->removeRows(0, m_model->rowCount());
    for (int index : m_visibleIndices) {
        const ReaderRecord &reader = m_readers.at(index);
        auto makeItem = [](const QString &text) {
            auto *item = new QStandardItem(text);
            item->setEditable(false);
            return item;
        };
        auto *status = makeItem(readerStatusText(reader));
        status->setTextAlignment(Qt::AlignCenter);
        status->setForeground(QBrush(!reader.isFrozen
                ? QColor(QStringLiteral("#1B7F4B"))
                : QColor(QStringLiteral("#C2410C"))));
        auto *borrowed = makeItem(QString::number(reader.borrowed));
        borrowed->setTextAlignment(Qt::AlignCenter);
        auto *overdue = makeItem(QString::number(reader.overdue));
        overdue->setTextAlignment(Qt::AlignCenter);
        overdue->setForeground(QBrush(reader.overdue > 0
                ? QColor(QStringLiteral("#C2410C"))
                : QColor(QStringLiteral("#4B5563"))));
        m_model->appendRow({
            makeItem(reader.studentNo),
            makeItem(reader.name),
            makeItem(reader.department),
            status,
            borrowed,
            overdue,
        });
    }
    m_feedbackLabel->setText(QStringLiteral("共 %1 名读者。").arg(m_visibleIndices.size()));
    updateActionState();
}

int AdminReaderView::selectedReaderIndex() const
{
    const QModelIndexList rows = m_grid->selectionModel()->selectedRows();
    if (rows.isEmpty()) {
        return -1;
    }
    const int row = rows.first().row();
    return row >= 0 && row < m_visibleIndices.size() ? m_visibleIndices.at(row) : -1;
}

const AdminReaderView::ReaderRecord *AdminReaderView::selectedReader() const
{
    const int index = selectedReaderIndex();
    return index >= 0 ? &m_readers.at(index) : nullptr;
}

void AdminReaderView::updateActionState()
{
    const ReaderRecord *reader = selectedReader();
    const bool enabled = reader != nullptr;
    m_borrowingButton->setEnabled(enabled);
    m_editReaderButton->setEnabled(enabled);
    m_freezeButton->setEnabled(enabled);
    m_cancelReaderButton->setEnabled(enabled);
    if (reader) {
        m_freezeButton->setText(reader->isFrozen
                ? QStringLiteral("解冻用户")
                : QStringLiteral("冻结用户"));
    } else {
        m_freezeButton->setText(QStringLiteral("冻结用户"));
    }
}

void AdminReaderView::toggleFreezeSelectedReader()
{
    ReaderRecord *selected = nullptr;
    const int selectedIndex = selectedReaderIndex();
    if (selectedIndex >= 0) {
        selected = &m_readers[selectedIndex];
    }
    if (!selected) {
        return;
    }
    const ServiceResult result =
        ReaderService::setFrozen(selected->readerId, !selected->isFrozen);
    if (!result.ok()) {
        setFeedback(result.message);
        return;
    }
    applyFilter();
    setFeedback(result.message);
    return;

    /*
        const ServiceResult backendResult = ReaderService::setFrozen(
        reader.readerId, !reader.isFrozen);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        applyFilter();
        setFeedback(backendResult.message);
    */
    const int index = selectedReaderIndex();
    if (index < 0) {
        return;
    }
    ReaderRecord &reader = m_readers[index];
    reader.isFrozen = !reader.isFrozen;
    applyFilter();
    setFeedback(QStringLiteral("%1 已%2。").arg(reader.name,
        reader.isFrozen ? QStringLiteral("冻结") : QStringLiteral("解冻")));
}

void AdminReaderView::cancelSelectedReader()
{
    const ReaderRecord *selected = selectedReader();
    if (!selected) {
        return;
    }
    const ServiceResult result = ReaderService::removeReader(selected->readerId);
    if (!result.ok()) {
        setFeedback(result.message);
        return;
    }
    applyFilter();
    setFeedback(result.message);
    return;

    /*
        const ReaderRecord *target = selectedReader();
        if (!target) return;
        const int readerId = target->readerId;
        const ServiceResult backendResult =
        ReaderService::removeReader(readerId);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        applyFilter();
        setFeedback(backendResult.message);
    */
    const int index = selectedReaderIndex();
    if (index < 0) {
        return;
    }
    const QString name = m_readers.at(index).name;
    m_readers.removeAt(index);
    applyFilter();
    setFeedback(QStringLiteral("已注销 %1 的读者账号。").arg(name));
}

void AdminReaderView::showBorrowingDetails()
{
    const ReaderRecord *reader = selectedReader();
    if (!reader) {
        return;
    }

    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("读者借阅概况"));
    dialog.setMinimumSize(440, 260);
    auto *layout = new QVBoxLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setSpacing(12);

    auto *title = new Label(reader->name, &dialog);
    title->setFluentTypography(Typography::FontRole::Subtitle);
    title->setTextColorRole(Label::TextColorRole::Primary);
    layout->addWidget(title);
    auto *details = new Label(
        QStringLiteral("学号：%1\n学院：%2\n当前在借：%3 本\n逾期图书：%4 本")
            .arg(reader->studentNo, reader->department)
            .arg(reader->borrowed)
            .arg(reader->overdue),
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

void AdminReaderView::editSelectedReader()
{
    const int selectedIndex = selectedReaderIndex();
    if (selectedIndex < 0) {
        return;
    }
    ReaderRecord &selected = m_readers[selectedIndex];

    /*
        ReaderInfo backendReader;
        backendReader.id = reader.readerId;
        backendReader.studentNo = reader.studentNo;
        backendReader.name = nameEdit->text().trimmed();
        backendReader.gender = reader.gender;
        backendReader.categoryId = reader.categoryId;
        backendReader.department = departmentEdit->text().trimmed();
        backendReader.phone = phoneEdit->text().trimmed();
        backendReader.email = emailEdit->text().trimmed();
        backendReader.address = reader.address;
        backendReader.frozen = reader.isFrozen;
        const ServiceResult backendResult =
        ReaderService::updateProfile(backendReader);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        applyFilter();
        setFeedback(backendResult.message);
    */
    const int index = selectedReaderIndex();
    if (index < 0) {
        return;
    }
    ReaderRecord &reader = m_readers[index];

    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("修改读者资料"));
    dialog.setMinimumSize(480, 360);
    auto *layout = new QGridLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setHorizontalSpacing(16);
    layout->setVerticalSpacing(12);

    auto makeEdit = [&dialog](const QString &text) {
        auto *edit = new LineEdit(&dialog);
        edit->setText(text);
        edit->setFixedHeight(40);
        return edit;
    };
    LineEdit *nameEdit = makeEdit(reader.name);
    LineEdit *departmentEdit = makeEdit(reader.department);
    LineEdit *phoneEdit = makeEdit(reader.phone);
    LineEdit *emailEdit = makeEdit(reader.email);
    layout->addWidget(new Label(QStringLiteral("姓名"), &dialog), 0, 0);
    layout->addWidget(nameEdit, 0, 1);
    layout->addWidget(new Label(QStringLiteral("学院"), &dialog), 1, 0);
    layout->addWidget(departmentEdit, 1, 1);
    layout->addWidget(new Label(QStringLiteral("手机号"), &dialog), 2, 0);
    layout->addWidget(phoneEdit, 2, 1);
    layout->addWidget(new Label(QStringLiteral("邮箱"), &dialog), 3, 0);
    layout->addWidget(emailEdit, 3, 1);

    auto *buttons = new QHBoxLayout;
    buttons->addStretch();
    auto *cancelButton = new Button(QStringLiteral("取消"), &dialog);
    cancelButton->setFluentStyle(Button::Subtle);
    auto *saveButton = new Button(QStringLiteral("保存"), &dialog);
    saveButton->setFluentStyle(Button::Accent);
    cancelButton->setFixedSize(88, 40);
    saveButton->setFixedSize(88, 40);
    buttons->addWidget(cancelButton);
    buttons->addWidget(saveButton);
    layout->addLayout(buttons, 4, 0, 1, 2);

    connect(cancelButton, &Button::clicked, &dialog, &QDialog::reject);
    connect(saveButton, &Button::clicked, &dialog, [&] {
        reader.name = nameEdit->text().trimmed();
        reader.department = departmentEdit->text().trimmed();
        reader.phone = phoneEdit->text().trimmed();
        reader.email = emailEdit->text().trimmed();
        dialog.accept();
    });

    if (dialog.exec() == QDialog::Accepted) {
        ReaderInfo backendReader;
        backendReader.id = selected.readerId;
        backendReader.studentNo = selected.studentNo;
        backendReader.name = selected.name;
        backendReader.gender = selected.gender;
        backendReader.categoryId = selected.categoryId;
        backendReader.department = selected.department;
        backendReader.phone = selected.phone;
        backendReader.email = selected.email;
        backendReader.address = selected.address;
        backendReader.frozen = selected.isFrozen;
        backendReader.createdAt = selected.createdAt;
        const ServiceResult result = ReaderService::updateProfile(backendReader);
        if (!result.ok()) {
            setFeedback(result.message);
            return;
        }
        applyFilter();
        setFeedback(result.message);
    }
}

void AdminReaderView::setFeedback(const QString &message)
{
    m_feedbackLabel->setText(message);
}

QString AdminReaderView::readerStatusText(const ReaderRecord &reader) const
{
    return reader.isFrozen ? QStringLiteral("已冻结") : QStringLiteral("正常");
}

QWidget *createAdminReaderView(QWidget *parent)
{
    return new AdminReaderView(parent);
}
