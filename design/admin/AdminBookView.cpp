#include "AdminBookView.h"
#include "services/BookService.h"

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
using fluent::basicinput::ComboBox;
using fluent::collections::DataGrid;
using fluent::textfields::Label;
using fluent::textfields::LineEdit;
using fluent::textfields::NumberBox;

AdminBookView::AdminBookView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("AdminBookView"));
    buildUi();
    applyFilter();
}

AdminBookView::~AdminBookView() = default;

void AdminBookView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("图书管理"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("维护馆藏图书信息、分类和库存状态。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *searchLayout = new QHBoxLayout;
    searchLayout->setSpacing(10);

    m_searchEdit = new LineEdit(this);
    m_searchEdit->setObjectName(QStringLiteral("AdminBookSearchEdit"));
    m_searchEdit->setPlaceholderText(QStringLiteral("搜索书名、作者或 ISBN"));
    m_searchEdit->setClearButtonEnabled(true);
    m_searchEdit->setFixedHeight(40);
    searchLayout->addWidget(m_searchEdit, 1);

    m_categoryCombo = new ComboBox(this);
    m_categoryCombo->setObjectName(QStringLiteral("AdminBookCategoryCombo"));
    /*
        for (const BookCategory &category : BookService::categories()) {
            m_categoryCombo->addItem(category.name, category.id);
        }
        BookService::isFavorite(), favorites() and toggleFavorite() are
    */
    m_categoryCombo->addItem(QStringLiteral("全部分类"), -1);
    for (const BookCategory &category : BookService::categories()) {
        m_categoryCombo->addItem(category.name, category.id);
    }
    m_categoryCombo->setFixedSize(120, 40);
    searchLayout->addWidget(m_categoryCombo);

    m_searchButton = new Button(QStringLiteral("查询"), this);
    m_searchButton->setObjectName(QStringLiteral("AdminBookSearchButton"));
    m_searchButton->setFluentStyle(Button::Accent);
    m_searchButton->setFluentLayout(Button::IconBefore);
    m_searchButton->setIconGlyph(Typography::Icons::Search, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_searchButton->setFixedSize(96, 40);
    searchLayout->addWidget(m_searchButton);
    rootLayout->addLayout(searchLayout);

    auto *actionLayout = new QHBoxLayout;
    actionLayout->setSpacing(8);

    m_addButton = new Button(QStringLiteral("添加书籍"), this);
    m_addButton->setObjectName(QStringLiteral("AddBookButton"));
    m_addButton->setFluentStyle(Button::Subtle);
    m_addButton->setFluentSize(Button::Small);
    m_addButton->setFluentLayout(Button::IconBefore);
    m_addButton->setIconGlyph(Typography::Icons::Add, Typography::IconSize::Standard,
                              Typography::FontFamily::FluentIcons);
    m_addButton->setFixedHeight(36);
    actionLayout->addWidget(m_addButton);
    actionLayout->addStretch();

    m_editButton = new Button(QStringLiteral("修改"), this);
    m_editButton->setObjectName(QStringLiteral("EditBookButton"));
    m_editButton->setFluentStyle(Button::Subtle);
    m_editButton->setFluentSize(Button::Small);
    m_editButton->setFluentLayout(Button::IconBefore);
    m_editButton->setIconGlyph(Typography::Icons::Edit, Typography::IconSize::Standard,
                               Typography::FontFamily::FluentIcons);
    m_editButton->setFixedHeight(36);
    m_editButton->setEnabled(false);
    actionLayout->addWidget(m_editButton);

    m_deleteButton = new Button(QStringLiteral("删除"), this);
    m_deleteButton->setObjectName(QStringLiteral("DeleteBookButton"));
    m_deleteButton->setFluentStyle(Button::Subtle);
    m_deleteButton->setFluentSize(Button::Small);
    m_deleteButton->setFluentLayout(Button::IconBefore);
    m_deleteButton->setIconGlyph(Typography::Icons::Delete, Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_deleteButton->setFixedHeight(36);
    m_deleteButton->setEnabled(false);
    actionLayout->addWidget(m_deleteButton);
    rootLayout->addLayout(actionLayout);

    m_model = new QStandardItemModel(0, 7, this);
    m_model->setHorizontalHeaderLabels({
        QStringLiteral("书名"), QStringLiteral("ISBN"), QStringLiteral("分类"),
        QStringLiteral("作者"), QStringLiteral("馆藏"), QStringLiteral("可借"),
        QStringLiteral("状态"),
    });

    m_grid = new DataGrid(this);
    m_grid->setObjectName(QStringLiteral("AdminBookGrid"));
    m_grid->setModel(m_model);
    m_grid->setPlaceholderText(QStringLiteral("没有匹配的图书"));
    m_grid->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_grid->setSelectionMode(DataGrid::SelectionMode::Single);
    m_grid->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_grid->setShowGrid(false);
    m_grid->setBorderVisible(false);
    m_grid->verticalHeader()->hide();
    m_grid->verticalHeader()->setDefaultSectionSize(46);
    m_grid->horizontalHeader()->setStretchLastSection(false);
    m_grid->horizontalHeader()->setMinimumSectionSize(70);
    for (int column = 0; column < 7; ++column) {
        m_grid->horizontalHeader()->setSectionResizeMode(column, QHeaderView::Interactive);
    }
    m_grid->horizontalHeader()->resizeSection(0, 170);
    m_grid->horizontalHeader()->resizeSection(1, 150);
    m_grid->horizontalHeader()->resizeSection(2, 90);
    m_grid->horizontalHeader()->resizeSection(3, 200);
    m_grid->horizontalHeader()->resizeSection(4, 85);
    m_grid->horizontalHeader()->resizeSection(5, 85);
    m_grid->horizontalHeader()->resizeSection(6, 100);
    rootLayout->addWidget(m_grid, 1);

    m_feedbackLabel = new Label(
        QStringLiteral("选择一行图书后，可以修改或删除。"), this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    connect(m_searchButton, &Button::clicked, this, [this] { applyFilter(); });
    connect(m_searchEdit, &LineEdit::returnPressed, this, [this] { applyFilter(); });
    connect(m_categoryCombo, &ComboBox::currentIndexChanged, this, [this] { applyFilter(); });
    connect(m_grid->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, [this] { updateActionState(); });
    connect(m_addButton, &Button::clicked, this, [this] { addBook(); });
    connect(m_editButton, &Button::clicked, this, [this] { editSelectedBook(); });
    connect(m_deleteButton, &Button::clicked, this, [this] { deleteSelectedBook(); });

    auto addBook = [this](int id, const QString &isbn, const QString &title,
                           const QString &author, const QString &publisher,
                           const QDate &publishDate, int categoryId,
                           const QString &categoryName, double price,
                           int totalCopies, int availableCopies, int pages,
                           const QString &keywords) {
        BookRecord book;
        book.bookId = id;
        book.isbn = isbn;
        book.title = title;
        book.author = author;
        book.publisher = publisher;
        book.publishDate = publishDate;
        book.categoryId = categoryId;
        book.categoryName = categoryName;
        book.price = price;
        book.totalCopies = totalCopies;
        book.availableCopies = availableCopies;
        book.pages = pages;
        book.keywords = keywords;
        book.createdAt = QDateTime(QDate(2026, 1, 1), QTime(8, 0));
        m_books.append(book);
    };

    addBook(1, QStringLiteral("9787536692930"), QStringLiteral("三体"),
            QStringLiteral("刘慈欣"), QStringLiteral("重庆出版社"), QDate(2008, 1, 1),
            1, QStringLiteral("文学"), 23.00, 8, 5, 302, QStringLiteral("科幻,宇宙"));
    addBook(5, QStringLiteral("9787508647357"), QStringLiteral("人类简史"),
            QStringLiteral("尤瓦尔·赫拉利"), QStringLiteral("中信出版社"),
            QDate(2014, 11, 1), 4, QStringLiteral("社科"), 68.00, 4, 2, 440,
            QStringLiteral("历史,人类学"));
    addBook(11, QStringLiteral("9787111213826"), QStringLiteral("设计模式"),
            QStringLiteral("Erich Gamma"), QStringLiteral("机械工业出版社"),
            QDate(2007, 3, 1), 2, QStringLiteral("科技"), 59.00, 2, 0, 395,
            QStringLiteral("面向对象,软件设计"));
    addBook(12, QStringLiteral("9787535732309"), QStringLiteral("时间简史"),
            QStringLiteral("史蒂芬·霍金"), QStringLiteral("湖南科学技术出版社"),
            QDate(2010, 4, 1), 2, QStringLiteral("科技"), 45.00, 5, 3, 210,
            QStringLiteral("宇宙,物理"));
    addBook(7, QStringLiteral("9787514370850"), QStringLiteral("明朝那些事儿"),
            QStringLiteral("当年明月"), QStringLiteral("北京联合出版公司"),
            QDate(2019, 9, 1), 3, QStringLiteral("历史"), 158.00, 3, 1, 1200,
            QStringLiteral("明史,通俗历史"));
}

void AdminBookView::applyFilter()
{
    BookQuery bookQuery;
    bookQuery.keyword = m_searchEdit->text().trimmed();
    bookQuery.categoryId = m_categoryCombo->currentData().toInt();
    bookQuery.page = 1;
    bookQuery.pageSize = 10000;

    QString backendError;
    const BookPage page = BookService::search(bookQuery, &backendError);
    if (!backendError.isEmpty()) {
        setFeedback(QStringLiteral("查询失败：%1").arg(backendError));
        return;
    }

    m_books.clear();
    for (const Book &source : page.items) {
        BookRecord record;
        record.bookId = source.id;
        record.isbn = source.isbn;
        record.title = source.title;
        record.author = source.author;
        record.publisher = source.publisher;
        record.publishDate = source.publishDate;
        record.categoryId = source.categoryId;
        record.categoryName = source.categoryName;
        record.price = source.price;
        record.totalCopies = source.totalCopies;
        record.availableCopies = source.availableCopies;
        record.pages = source.pages;
        record.keywords = source.keywords;
        record.summary = source.summary;
        record.coverPath = source.coverPath;
        record.createdAt = source.createdAt;
        m_books.append(record);
    }
    m_visibleIndices.clear();
    for (int index = 0; index < m_books.size(); ++index) {
        m_visibleIndices.append(index);
    }
    renderTable();
    return;

    /*
        BookQuery bookQuery;
        bookQuery.keyword = m_searchEdit->text().trimmed();
        bookQuery.categoryId = m_categoryCombo->currentData().toInt();
        bookQuery.page = 1;
        bookQuery.pageSize = 10000;
        QString backendError;
        const BookPage page = BookService::search(bookQuery, &backendError);
        if (!backendError.isEmpty()) {
            setFeedback(QStringLiteral("查询失败：%1").arg(backendError));
            return;
        }
        m_books.clear();
        for (const Book &source : page.items) {
            BookRecord record;
            record.bookId = source.id;
            record.isbn = source.isbn;
            record.title = source.title;
            record.author = source.author;
            record.publisher = source.publisher;
            record.publishDate = source.publishDate;
            record.categoryId = source.categoryId;
            record.categoryName = source.categoryName;
            record.price = source.price;
            record.totalCopies = source.totalCopies;
            record.availableCopies = source.availableCopies;
            record.pages = source.pages;
            record.keywords = source.keywords;
            record.summary = source.summary;
            record.coverPath = source.coverPath;
            record.createdAt = source.createdAt;
            m_books.append(record);
        }
    */
    const QString query = m_searchEdit->text().trimmed();
    const QString category = m_categoryCombo->currentData().toString();
    m_visibleIndices.clear();

    for (int index = 0; index < m_books.size(); ++index) {
        const BookRecord &book = m_books.at(index);
        const bool queryMatches = query.isEmpty()
            || book.title.contains(query, Qt::CaseInsensitive)
            || book.author.contains(query, Qt::CaseInsensitive)
            || book.isbn.contains(query, Qt::CaseInsensitive);
        const bool categoryMatches = category.isEmpty() || book.categoryName == category;
        if (queryMatches && categoryMatches) {
            m_visibleIndices.append(index);
        }
    }
    renderTable();
}

void AdminBookView::renderTable()
{
    m_model->removeRows(0, m_model->rowCount());
    for (int index : m_visibleIndices) {
        const BookRecord &book = m_books.at(index);
        auto makeItem = [](const QString &text) {
            auto *item = new QStandardItem(text);
            item->setEditable(false);
            return item;
        };
        auto *status = makeItem(statusText(book));
        status->setTextAlignment(Qt::AlignCenter);
        status->setForeground(QBrush(book.availableCopies > 0
                ? QColor(QStringLiteral("#1B7F4B"))
                : QColor(QStringLiteral("#C2410C"))));
        m_model->appendRow({
            makeItem(book.title),
            makeItem(book.isbn),
            makeItem(book.categoryName),
            makeItem(book.author),
            makeItem(QString::number(book.totalCopies)),
            makeItem(QString::number(book.availableCopies)),
            status,
        });
    }
    m_feedbackLabel->setText(
        QStringLiteral("共 %1 本图书，选择一行后可修改或删除。").arg(m_visibleIndices.size()));
    updateActionState();
}

int AdminBookView::selectedBookIndex() const
{
    const QModelIndexList rows = m_grid->selectionModel()->selectedRows();
    if (rows.isEmpty()) {
        return -1;
    }
    const int row = rows.first().row();
    return row >= 0 && row < m_visibleIndices.size() ? m_visibleIndices.at(row) : -1;
}

void AdminBookView::updateActionState()
{
    const bool enabled = selectedBookIndex() >= 0;
    m_editButton->setEnabled(enabled);
    m_deleteButton->setEnabled(enabled);
}

void AdminBookView::addBook()
{
    /*
        Book backendBook;
        backendBook.isbn = book.isbn;
        backendBook.title = book.title;
        backendBook.author = book.author;
        backendBook.publisher = book.publisher;
        backendBook.publishDate = book.publishDate;
        backendBook.categoryId = book.categoryId;
        backendBook.price = book.price;
        backendBook.totalCopies = book.totalCopies;
        backendBook.availableCopies = book.totalCopies;
        backendBook.pages = book.pages;
        backendBook.keywords = book.keywords;
        backendBook.summary = book.summary;
        backendBook.coverPath = book.coverPath;
        const ServiceResult backendResult = BookService::addBook(backendBook);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        setFeedback(backendResult.message);
    */
    BookRecord book;

    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("添加书籍"));
    dialog.setMinimumSize(480, 420);
    auto *layout = new QGridLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setHorizontalSpacing(16);
    layout->setVerticalSpacing(12);

    auto makeLineEdit = [&dialog](const QString &placeholder) {
        auto *edit = new LineEdit(&dialog);
        edit->setPlaceholderText(placeholder);
        edit->setFixedHeight(40);
        return edit;
    };
    LineEdit *titleEdit = makeLineEdit(QStringLiteral("书名"));
    LineEdit *isbnEdit = makeLineEdit(QStringLiteral("ISBN"));
    LineEdit *authorEdit = makeLineEdit(QStringLiteral("作者"));
    auto *categoryCombo = new ComboBox(&dialog);
    categoryCombo->addItems({QStringLiteral("文学"), QStringLiteral("科技"),
                             QStringLiteral("历史"), QStringLiteral("社科")});
    categoryCombo->setFixedHeight(40);
    auto *totalBox = new NumberBox(&dialog);
    totalBox->setRange(1, 999);
    totalBox->setDisplayPrecision(0);
    totalBox->setValue(1);
    totalBox->setFixedHeight(40);

    layout->addWidget(new Label(QStringLiteral("书名"), &dialog), 0, 0);
    layout->addWidget(titleEdit, 0, 1);
    layout->addWidget(new Label(QStringLiteral("ISBN"), &dialog), 1, 0);
    layout->addWidget(isbnEdit, 1, 1);
    layout->addWidget(new Label(QStringLiteral("作者"), &dialog), 2, 0);
    layout->addWidget(authorEdit, 2, 1);
    layout->addWidget(new Label(QStringLiteral("分类"), &dialog), 3, 0);
    layout->addWidget(categoryCombo, 3, 1);
    layout->addWidget(new Label(QStringLiteral("馆藏数量"), &dialog), 4, 0);
    layout->addWidget(totalBox, 4, 1);

    auto *buttons = new QHBoxLayout;
    buttons->addStretch();
    auto *cancelButton = new Button(QStringLiteral("取消"), &dialog);
    cancelButton->setFluentStyle(Button::Subtle);
    auto *saveButton = new Button(QStringLiteral("添加"), &dialog);
    saveButton->setFluentStyle(Button::Accent);
    cancelButton->setFixedSize(88, 40);
    saveButton->setFixedSize(88, 40);
    buttons->addWidget(cancelButton);
    buttons->addWidget(saveButton);
    layout->addLayout(buttons, 5, 0, 1, 2);

    connect(cancelButton, &Button::clicked, &dialog, &QDialog::reject);
    connect(saveButton, &Button::clicked, &dialog, [&] {
        if (titleEdit->text().trimmed().isEmpty()
            || isbnEdit->text().trimmed().isEmpty()
            || authorEdit->text().trimmed().isEmpty()) {
            return;
        }
        book.title = titleEdit->text().trimmed();
        book.isbn = isbnEdit->text().trimmed();
        book.author = authorEdit->text().trimmed();
        book.categoryName = categoryCombo->currentText();
        book.categoryId = book.categoryName == QStringLiteral("科技") ? 2
            : book.categoryName == QStringLiteral("历史") ? 3
            : book.categoryName == QStringLiteral("社科") ? 4
            : 1;
        book.totalCopies = totalBox->value();
        book.availableCopies = book.totalCopies;
        int nextId = 1;
        for (const BookRecord &existing : m_books) {
            nextId = qMax(nextId, existing.bookId + 1);
        }
        book.bookId = nextId;
        book.createdAt = QDateTime::currentDateTime();
        dialog.accept();
    });

    if (dialog.exec() == QDialog::Accepted) {
        Book backendBook;
        backendBook.isbn = book.isbn;
        backendBook.title = book.title;
        backendBook.author = book.author;
        backendBook.publisher = book.publisher;
        backendBook.publishDate = book.publishDate;
        backendBook.categoryId = book.categoryId;
        backendBook.price = book.price;
        backendBook.totalCopies = book.totalCopies;
        backendBook.availableCopies = book.totalCopies;
        backendBook.pages = book.pages;
        backendBook.keywords = book.keywords;
        backendBook.summary = book.summary;
        backendBook.coverPath = book.coverPath;
        const ServiceResult result = BookService::addBook(backendBook);
        if (!result.ok()) {
            setFeedback(result.message);
            return;
        }
        applyFilter();
        setFeedback(result.message);
    }
}

void AdminBookView::editSelectedBook()
{
    /*
        Book backendBook;
        backendBook.id = book.bookId;
        backendBook.isbn = book.isbn;
        backendBook.title = book.title;
        backendBook.author = book.author;
        backendBook.publisher = book.publisher;
        backendBook.publishDate = book.publishDate;
        backendBook.categoryId = book.categoryId;
        backendBook.price = book.price;
        backendBook.totalCopies = book.totalCopies;
        backendBook.availableCopies = book.availableCopies;
        backendBook.pages = book.pages;
        backendBook.keywords = book.keywords;
        backendBook.summary = book.summary;
        backendBook.coverPath = book.coverPath;
        const ServiceResult backendResult = BookService::updateBook(backendBook);
        setFeedback(backendResult.message);
    */
    const int bookIndex = selectedBookIndex();
    if (bookIndex < 0) {
        return;
    }
    BookRecord &book = m_books[bookIndex];

    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("修改书籍"));
    dialog.setMinimumSize(480, 420);
    auto *layout = new QGridLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setHorizontalSpacing(16);
    layout->setVerticalSpacing(12);

    auto *titleEdit = new LineEdit(&dialog);
    auto *isbnEdit = new LineEdit(&dialog);
    auto *authorEdit = new LineEdit(&dialog);
    titleEdit->setText(book.title);
    isbnEdit->setText(book.isbn);
    authorEdit->setText(book.author);
    for (LineEdit *edit : {titleEdit, isbnEdit, authorEdit}) {
        edit->setFixedHeight(40);
    }
    auto *categoryCombo = new ComboBox(&dialog);
    categoryCombo->addItems({QStringLiteral("文学"), QStringLiteral("科技"),
                             QStringLiteral("历史"), QStringLiteral("社科")});
    categoryCombo->setCurrentText(book.categoryName);
    categoryCombo->setFixedHeight(40);
    auto *totalBox = new NumberBox(&dialog);
    totalBox->setRange(1, 999);
    totalBox->setDisplayPrecision(0);
    totalBox->setValue(book.totalCopies);
    totalBox->setFixedHeight(40);
    auto *availableBox = new NumberBox(&dialog);
    availableBox->setRange(0, 999);
    availableBox->setDisplayPrecision(0);
    availableBox->setValue(book.availableCopies);
    availableBox->setFixedHeight(40);

    layout->addWidget(new Label(QStringLiteral("书名"), &dialog), 0, 0);
    layout->addWidget(titleEdit, 0, 1);
    layout->addWidget(new Label(QStringLiteral("ISBN"), &dialog), 1, 0);
    layout->addWidget(isbnEdit, 1, 1);
    layout->addWidget(new Label(QStringLiteral("作者"), &dialog), 2, 0);
    layout->addWidget(authorEdit, 2, 1);
    layout->addWidget(new Label(QStringLiteral("分类"), &dialog), 3, 0);
    layout->addWidget(categoryCombo, 3, 1);
    layout->addWidget(new Label(QStringLiteral("馆藏数量"), &dialog), 4, 0);
    layout->addWidget(totalBox, 4, 1);
    layout->addWidget(new Label(QStringLiteral("可借数量"), &dialog), 5, 0);
    layout->addWidget(availableBox, 5, 1);

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
    layout->addLayout(buttons, 6, 0, 1, 2);

    connect(cancelButton, &Button::clicked, &dialog, &QDialog::reject);
    connect(saveButton, &Button::clicked, &dialog, [&] {
        book.title = titleEdit->text().trimmed();
        book.isbn = isbnEdit->text().trimmed();
        book.author = authorEdit->text().trimmed();
        book.categoryName = categoryCombo->currentText();
        book.categoryId = book.categoryName == QStringLiteral("科技") ? 2
            : book.categoryName == QStringLiteral("历史") ? 3
            : book.categoryName == QStringLiteral("社科") ? 4
            : 1;
        book.totalCopies = totalBox->value();
        book.availableCopies = static_cast<int>(qMin<qreal>(
            availableBox->value(), static_cast<qreal>(book.totalCopies)));
        dialog.accept();
    });

    if (dialog.exec() == QDialog::Accepted) {
        Book backendBook;
        backendBook.id = book.bookId;
        backendBook.isbn = book.isbn;
        backendBook.title = book.title;
        backendBook.author = book.author;
        backendBook.publisher = book.publisher;
        backendBook.publishDate = book.publishDate;
        backendBook.categoryId = book.categoryId;
        backendBook.price = book.price;
        backendBook.totalCopies = book.totalCopies;
        backendBook.availableCopies = book.availableCopies;
        backendBook.pages = book.pages;
        backendBook.keywords = book.keywords;
        backendBook.summary = book.summary;
        backendBook.coverPath = book.coverPath;
        const ServiceResult result = BookService::updateBook(backendBook);
        if (!result.ok()) {
            setFeedback(result.message);
            return;
        }
        applyFilter();
        setFeedback(result.message);
    }
}

void AdminBookView::deleteSelectedBook()
{
    const int selectedIndex = selectedBookIndex();
    if (selectedIndex < 0) {
        return;
    }
    const ServiceResult result =
        BookService::deleteBook(m_books.at(selectedIndex).bookId);
    if (!result.ok()) {
        setFeedback(result.message);
        return;
    }
    applyFilter();
    setFeedback(result.message);
    return;

    /*
        const ServiceResult backendResult =
        BookService::deleteBook(m_books.at(bookIndex).bookId);
        if (!backendResult.ok()) {
            setFeedback(backendResult.message);
            return;
        }
        applyFilter();
        setFeedback(backendResult.message);
    */
    const int bookIndex = selectedBookIndex();
    if (bookIndex < 0) {
        return;
    }
    const QString title = m_books.at(bookIndex).title;
    m_books.removeAt(bookIndex);
    applyFilter();
    setFeedback(QStringLiteral("已删除《%1》。").arg(title));
}

void AdminBookView::setFeedback(const QString &message)
{
    m_feedbackLabel->setText(message);
}

QString AdminBookView::statusText(const BookRecord &book) const
{
    if (book.availableCopies <= 0) {
        return QStringLiteral("不可借");
    }
    if (book.availableCopies == 1) {
        return QStringLiteral("馆藏紧张");
    }
    return QStringLiteral("可借");
}

QWidget *createAdminBookView(QWidget *parent)
{
    return new AdminBookView(parent);
}
