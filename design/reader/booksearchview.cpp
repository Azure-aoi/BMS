#include "booksearchview.h"

#include <FluentQt/FluentQt.h>
#include "core/SessionManager.h"
#include "services/BookService.h"
#include "services/BorrowService.h"

#include <QAction>
#include <QApplication>
#include <QClipboard>
#include <QDialog>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QModelIndex>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTime>
#include <QVBoxLayout>

using fluent::basicinput::Button;
using fluent::basicinput::ComboBox;
using fluent::collections::DataGrid;
using fluent::menus_toolbars::FluentMenu;
using fluent::textfields::Label;
using fluent::textfields::LineEdit;

BookSearchView::BookSearchView(QWidget *parent)
    : QWidget(parent)
{
    setObjectName(QStringLiteral("ReaderBookSearchView"));
    buildUi();
    performSearch(true);
}

BookSearchView::~BookSearchView() = default;

void BookSearchView::buildUi()
{
    auto *rootLayout = new QVBoxLayout(this);
    rootLayout->setContentsMargins(28, 24, 28, 24);
    rootLayout->setSpacing(14);

    auto *title = new Label(QStringLiteral("图书检索"), this);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    rootLayout->addWidget(title);

    auto *subtitle = new Label(
        QStringLiteral("输入书名、作者或 ISBN，按回车或点击查询按钮检索馆藏图书。"), this);
    subtitle->setFluentTypography(Typography::FontRole::Body);
    subtitle->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(subtitle);

    auto *searchLayout = new QHBoxLayout;
    searchLayout->setSpacing(10);

    auto *keywordLabel = new Label(QStringLiteral("关键词"), this);
    keywordLabel->setFluentTypography(Typography::FontRole::BodyStrong);
    keywordLabel->setTextColorRole(Label::TextColorRole::Primary);
    searchLayout->addWidget(keywordLabel);

    m_searchEdit = new LineEdit(this);
    m_searchEdit->setObjectName(QStringLiteral("BookSearchKeywordEdit"));
    m_searchEdit->setPlaceholderText(QStringLiteral("搜索书名、作者或 ISBN"));
    m_searchEdit->setClearButtonEnabled(true);
    m_searchEdit->setFixedHeight(40);
    searchLayout->addWidget(m_searchEdit, 1);

    m_searchButton = new Button(QStringLiteral("查询"), this);
    m_searchButton->setObjectName(QStringLiteral("BookSearchButton"));
    m_searchButton->setFluentStyle(Button::Accent);
    m_searchButton->setFluentLayout(Button::IconBefore);
    m_searchButton->setIconGlyph(Typography::Icons::Search,
                                 Typography::IconSize::Standard,
                                 Typography::FontFamily::FluentIcons);
    m_searchButton->setFixedSize(96, 40);
    searchLayout->addWidget(m_searchButton);
    rootLayout->addLayout(searchLayout);

    auto *actionLayout = new QHBoxLayout;
    actionLayout->setSpacing(8);

    m_resultLabel = new Label(this);
    m_resultLabel->setFluentTypography(Typography::FontRole::BodyStrong);
    m_resultLabel->setTextColorRole(Label::TextColorRole::Primary);
    actionLayout->addWidget(m_resultLabel);
    actionLayout->addStretch();

    m_detailButton = createActionButton(QStringLiteral("查看详情"), Typography::Icons::View);
    m_borrowButton = createActionButton(QStringLiteral("立即借阅"), Typography::Icons::Document);
    m_favoriteButton = createActionButton(QStringLiteral("收藏"), Typography::Icons::Heart);
    m_copyButton = createActionButton(QStringLiteral("复制信息"), Typography::Icons::Copy);
    m_detailButton->setObjectName(QStringLiteral("BookDetailsButton"));
    m_borrowButton->setObjectName(QStringLiteral("BookBorrowButton"));
    m_favoriteButton->setObjectName(QStringLiteral("BookFavoriteButton"));
    m_copyButton->setObjectName(QStringLiteral("BookCopyButton"));
    for (Button *button : {m_detailButton, m_borrowButton, m_favoriteButton, m_copyButton}) {
        actionLayout->addWidget(button);
        m_actionButtons.append(button);
    }
    rootLayout->addLayout(actionLayout);

    m_feedbackLabel = new Label(
        QStringLiteral("选择一行图书后，可使用操作按钮或右键菜单。"), this);
    m_feedbackLabel->setFluentTypography(Typography::FontRole::Caption);
    m_feedbackLabel->setTextColorRole(Label::TextColorRole::Secondary);
    rootLayout->addWidget(m_feedbackLabel);

    m_model = new QStandardItemModel(0, 6, this);
    m_model->setHorizontalHeaderLabels({
        QStringLiteral("书名"),
        QStringLiteral("作者"),
        QStringLiteral("ISBN"),
        QStringLiteral("出版社"),
        QStringLiteral("可借 / 馆藏"),
        QStringLiteral("状态"),
    });

    m_grid = new DataGrid(this);
    m_grid->setObjectName(QStringLiteral("BookSearchDataGrid"));
    m_grid->setModel(m_model);
    m_grid->setPlaceholderText(QStringLiteral("暂无检索结果"));
    m_grid->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_grid->setSelectionMode(DataGrid::SelectionMode::Single);
    m_grid->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_grid->setAlternatingRowColors(false);
    m_grid->setShowGrid(false);
    m_grid->setBorderVisible(false);
    m_grid->verticalHeader()->hide();
    m_grid->verticalHeader()->setDefaultSectionSize(46);
    m_grid->horizontalHeader()->setHighlightSections(false);
    m_grid->horizontalHeader()->setStretchLastSection(false);
    m_grid->horizontalHeader()->setMinimumSectionSize(70);
    m_grid->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Interactive);
    m_grid->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Interactive);
    m_grid->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Interactive);
    m_grid->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Interactive);
    m_grid->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Interactive);
    m_grid->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Interactive);
    m_grid->horizontalHeader()->resizeSection(0, 170);
    m_grid->horizontalHeader()->resizeSection(1, 200);
    m_grid->horizontalHeader()->resizeSection(2, 145);
    m_grid->horizontalHeader()->resizeSection(3, 130);
    m_grid->horizontalHeader()->resizeSection(4, 120);
    m_grid->horizontalHeader()->resizeSection(5, 100);
    m_grid->setMinimumHeight(300);
    m_grid->setContextMenuPolicy(Qt::CustomContextMenu);
    rootLayout->addWidget(m_grid, 1);

    auto *paginationLayout = new QHBoxLayout;
    paginationLayout->setSpacing(8);

    auto *pageSizeLabel = new Label(QStringLiteral("每页条数"), this);
    pageSizeLabel->setFluentTypography(Typography::FontRole::Body);
    pageSizeLabel->setTextColorRole(Label::TextColorRole::Secondary);
    paginationLayout->addWidget(pageSizeLabel);

    m_pageSizeCombo = new ComboBox(this);
    m_pageSizeCombo->setObjectName(QStringLiteral("BookSearchPageSize"));
    m_pageSizeCombo->addItem(QStringLiteral("5 条/页"), 5);
    m_pageSizeCombo->addItem(QStringLiteral("10 条/页"), 10);
    m_pageSizeCombo->addItem(QStringLiteral("20 条/页"), 20);
    m_pageSizeCombo->setFixedSize(116, 36);
    paginationLayout->addWidget(m_pageSizeCombo);
    paginationLayout->addStretch();

    m_previousButton = new Button(QStringLiteral("上一页"), this);
    m_previousButton->setObjectName(QStringLiteral("BookPreviousPageButton"));
    m_previousButton->setFluentStyle(Button::Subtle);
    m_previousButton->setFluentSize(Button::Small);
    m_previousButton->setFluentLayout(Button::IconBefore);
    m_previousButton->setIconGlyph(Typography::Icons::ChevronLeftMed,
                                   Typography::IconSize::Standard,
                                   Typography::FontFamily::FluentIcons);
    m_previousButton->setFixedHeight(36);
    paginationLayout->addWidget(m_previousButton);

    m_pageLabel = new Label(this);
    m_pageLabel->setMinimumWidth(112);
    m_pageLabel->setAlignment(Qt::AlignCenter);
    m_pageLabel->setFluentTypography(Typography::FontRole::BodyStrong);
    m_pageLabel->setTextColorRole(Label::TextColorRole::Secondary);
    paginationLayout->addWidget(m_pageLabel);

    m_nextButton = new Button(QStringLiteral("下一页"), this);
    m_nextButton->setObjectName(QStringLiteral("BookNextPageButton"));
    m_nextButton->setFluentStyle(Button::Subtle);
    m_nextButton->setFluentSize(Button::Small);
    m_nextButton->setFluentLayout(Button::IconAfter);
    m_nextButton->setIconGlyph(Typography::Icons::ChevronRightMed,
                               Typography::IconSize::Standard,
                               Typography::FontFamily::FluentIcons);
    m_nextButton->setFixedHeight(36);
    paginationLayout->addWidget(m_nextButton);
    rootLayout->addLayout(paginationLayout);

    connect(m_searchButton, &Button::clicked, this, [this] {
        performSearch(true);
    });
    connect(m_searchEdit, &LineEdit::returnPressed, this, [this] {
        performSearch(true);
    });
    connect(m_pageSizeCombo, &ComboBox::currentIndexChanged, this, [this] {
        m_currentPage = 0;
        performSearch(true);
    });
    connect(m_previousButton, &Button::clicked, this, [this] {
        if (m_currentPage > 0) {
            --m_currentPage;
            performSearch(false);
        }
    });
    connect(m_nextButton, &Button::clicked, this, [this] {
        ++m_currentPage;
        performSearch(false);
    });
    connect(m_grid, &QAbstractItemView::doubleClicked, this, [this](const QModelIndex &index) {
        const BookRecord *book = bookForRow(index.row());
        if (book) {
            showBookDetails(*book);
        }
    });
    connect(m_grid, &QWidget::customContextMenuRequested, this, [this](const QPoint &position) {
        showContextMenu(position);
    });
    connect(m_grid->selectionModel(), &QItemSelectionModel::selectionChanged, this, [this] {
        updateActionState();
    });
    connect(m_detailButton, &Button::clicked, this, [this] {
        const BookRecord *book = selectedBook();
        if (book) {
            showBookDetails(*book);
        }
    });
    connect(m_borrowButton, &Button::clicked, this, [this] {
        borrowSelectedBook();
    });
    connect(m_favoriteButton, &Button::clicked, this, [this] {
        favoriteSelectedBook();
    });
    connect(m_copyButton, &Button::clicked, this, [this] {
        copySelectedBook();
    });

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
    addBook(2, QStringLiteral("9787506365437"), QStringLiteral("活着"),
            QStringLiteral("余华"), QStringLiteral("作家出版社"), QDate(2012, 8, 1),
            1, QStringLiteral("文学"), 28.00, 5, 3, 191, QStringLiteral("小说,人生"));
    addBook(3, QStringLiteral("9787544253994"), QStringLiteral("百年孤独"),
            QStringLiteral("加西亚·马尔克斯"), QStringLiteral("南海出版公司"),
            QDate(2011, 6, 1), 1, QStringLiteral("文学"), 39.50, 2, 1, 360,
            QStringLiteral("魔幻现实主义"));
    addBook(4, QStringLiteral("9787020090006"), QStringLiteral("围城"),
            QStringLiteral("钱钟书"), QStringLiteral("人民文学出版社"), QDate(1991, 2, 1),
            1, QStringLiteral("文学"), 36.00, 4, 4, 359, QStringLiteral("小说,讽刺"));
    addBook(5, QStringLiteral("9787508647357"), QStringLiteral("人类简史"),
            QStringLiteral("尤瓦尔·赫拉利"), QStringLiteral("中信出版社"),
            QDate(2014, 11, 1), 4, QStringLiteral("社科"), 68.00, 4, 2, 440,
            QStringLiteral("历史,人类学"));
    addBook(6, QStringLiteral("9787020042494"), QStringLiteral("小王子"),
            QStringLiteral("安托万·德·圣埃克苏佩里"), QStringLiteral("人民文学出版社"),
            QDate(2003, 8, 1), 1, QStringLiteral("文学"), 22.00, 6, 6, 120,
            QStringLiteral("童话,成长"));
    addBook(7, QStringLiteral("9787514370850"), QStringLiteral("明朝那些事儿"),
            QStringLiteral("当年明月"), QStringLiteral("北京联合出版公司"),
            QDate(2019, 9, 1), 3, QStringLiteral("历史"), 158.00, 3, 3, 1200,
            QStringLiteral("明史,通俗历史"));
    addBook(8, QStringLiteral("9787530216781"), QStringLiteral("平凡的世界"),
            QStringLiteral("路遥"), QStringLiteral("北京十月文艺出版社"), QDate(2017, 6, 1),
            1, QStringLiteral("文学"), 108.00, 2, 2, 1631, QStringLiteral("小说,奋斗"));
    addBook(9, QStringLiteral("9787111544937"), QStringLiteral("深入理解计算机系统"),
            QStringLiteral("Randal E. Bryant"), QStringLiteral("机械工业出版社"),
            QDate(2016, 11, 1), 2, QStringLiteral("科技"), 139.00, 3, 1, 737,
            QStringLiteral("计算机,操作系统"));
    addBook(10, QStringLiteral("9787121310911"), QStringLiteral("C++ Primer"),
            QStringLiteral("Stanley B. Lippman"), QStringLiteral("电子工业出版社"),
            QDate(2013, 9, 1), 2, QStringLiteral("科技"), 128.00, 4, 2, 838,
            QStringLiteral("C++,编程"));
    addBook(11, QStringLiteral("9787111213826"), QStringLiteral("设计模式"),
            QStringLiteral("Erich Gamma"), QStringLiteral("机械工业出版社"),
            QDate(2007, 3, 1), 2, QStringLiteral("科技"), 59.00, 2, 0, 395,
            QStringLiteral("面向对象,软件设计"));
    addBook(12, QStringLiteral("9787535732309"), QStringLiteral("时间简史"),
            QStringLiteral("史蒂芬·霍金"), QStringLiteral("湖南科学技术出版社"),
            QDate(2010, 4, 1), 2, QStringLiteral("科技"), 45.00, 5, 3, 210,
            QStringLiteral("宇宙,物理"));
    addBook(13, QStringLiteral("9787544270878"), QStringLiteral("解忧杂货店"),
            QStringLiteral("东野圭吾"), QStringLiteral("南海出版公司"), QDate(2014, 5, 1),
            1, QStringLiteral("文学"), 39.50, 5, 4, 291, QStringLiteral("小说,治愈"));
    addBook(14, QStringLiteral("9787532759206"), QStringLiteral("局外人"),
            QStringLiteral("阿尔贝·加缪"), QStringLiteral("上海译文出版社"),
            QDate(2013, 8, 1), 1, QStringLiteral("文学"), 29.00, 2, 1, 128,
            QStringLiteral("小说,存在主义"));
}

Button *BookSearchView::createActionButton(const QString &text, const QString &icon)
{
    auto *button = new Button(text, this);
    button->setFluentStyle(Button::Subtle);
    button->setFluentSize(Button::Small);
    button->setFluentLayout(Button::IconBefore);
    button->setIconGlyph(icon, Typography::IconSize::Standard,
                         Typography::FontFamily::FluentIcons);
    button->setFixedHeight(36);
    button->setEnabled(false);
    return button;
}

int BookSearchView::pageSize() const
{
    return m_pageSizeCombo ? m_pageSizeCombo->currentData().toInt() : 5;
}

void BookSearchView::performSearch(bool resetPage)
{
    if (resetPage) {
        m_currentPage = 0;
    }

    BookQuery bookQuery;
    bookQuery.keyword = m_searchEdit->text().trimmed();
    bookQuery.categoryId = -1;
    bookQuery.page = m_currentPage + 1;
    bookQuery.pageSize = pageSize();

    QString backendError;
    const BookPage result = BookService::search(bookQuery, &backendError);
    if (!backendError.isEmpty()) {
        setFeedback(QStringLiteral("图书查询失败：%1").arg(backendError));
        return;
    }

    auto toViewRecord = [](const Book &source) {
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
        return record;
    };

    m_filteredBooks.clear();
    for (const Book &source : result.items) {
        m_filteredBooks.append(toViewRecord(source));
    }
    m_totalBooks = result.total;
    renderPage();
    return;

    /*
        BookQuery bookQuery;
        bookQuery.keyword = m_searchEdit->text().trimmed();
        bookQuery.categoryId = -1;
        bookQuery.page = m_currentPage + 1;
        bookQuery.pageSize = pageSize();
        QString backendError;
        const BookPage result = BookService::search(bookQuery, &backendError);
        if (!backendError.isEmpty()) {
            setFeedback(QStringLiteral("图书查询失败：%1").arg(backendError));
            return;
        }
        auto toViewRecord = [](const Book &source) {
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
            return record;
        };
        m_filteredBooks.clear();
        for (const Book &source : result.items) {
            m_filteredBooks.append(toViewRecord(source));
        }
    */
    if (resetPage) {
        m_currentPage = 0;
    }

    const QString query = m_searchEdit->text().trimmed();
    m_filteredBooks.clear();
    for (const BookRecord &book : m_books) {
        if (query.isEmpty()
            || book.title.contains(query, Qt::CaseInsensitive)
            || book.author.contains(query, Qt::CaseInsensitive)
            || book.isbn.contains(query, Qt::CaseInsensitive)) {
            m_filteredBooks.append(book);
        }
    }

    m_grid->setPlaceholderText(
        query.isEmpty()
            ? QStringLiteral("暂无可显示的馆藏图书")
            : QStringLiteral("没有找到与“%1”匹配的图书").arg(query));
    m_feedbackLabel->setText(
        m_filteredBooks.isEmpty()
            ? QStringLiteral("可以尝试更换关键词，或清空搜索框查看全部图书。")
            : QStringLiteral("选择一行图书后，可使用操作按钮或右键菜单。"));
    renderPage();
}

void BookSearchView::renderPage()
{
    const int size = qMax(1, pageSize());
    const int totalItems = m_totalBooks > 0 ? m_totalBooks : m_filteredBooks.size();
    const int pageCount = qMax(1, (totalItems + size - 1) / size);
    m_currentPage = qBound(0, m_currentPage, pageCount - 1);

    m_model->removeRows(0, m_model->rowCount());
    const int first = 0;
    const int last = qMin(size, m_filteredBooks.size());

    for (int index = first; index < last; ++index) {
        const BookRecord &book = m_filteredBooks.at(index);
        auto makeItem = [](const QString &text, Qt::Alignment alignment) {
            auto *item = new QStandardItem(text);
            item->setEditable(false);
            item->setTextAlignment(alignment);
            return item;
        };

        auto *statusItem = makeItem(statusText(book), Qt::AlignCenter);
        statusItem->setForeground(QBrush(
            book.availableCopies > 0 ? QColor(QStringLiteral("#1B7F4B"))
                                     : QColor(QStringLiteral("#9A5B13"))));

        m_model->appendRow({
            makeItem(book.title, Qt::AlignVCenter | Qt::AlignLeft),
            makeItem(book.author, Qt::AlignVCenter | Qt::AlignLeft),
            makeItem(book.isbn, Qt::AlignCenter),
            makeItem(book.publisher, Qt::AlignVCenter | Qt::AlignLeft),
            makeItem(QStringLiteral("%1 / %2").arg(book.availableCopies)
                         .arg(book.totalCopies), Qt::AlignCenter),
            statusItem,
        });
    }

    m_resultLabel->setText(QStringLiteral("检索结果 · %1 条").arg(totalItems));
    m_pageLabel->setText(QStringLiteral("第 %1 / %2 页").arg(m_currentPage + 1).arg(pageCount));
    m_previousButton->setEnabled(m_currentPage > 0);
    m_nextButton->setEnabled(m_currentPage + 1 < pageCount);
    updateActionState();
}

const BookSearchView::BookRecord *BookSearchView::bookForRow(int row) const
{
    if (row < 0) {
        return nullptr;
    }
    return row >= 0 && row < m_filteredBooks.size()
        ? &m_filteredBooks.at(row)
        : nullptr;
}

const BookSearchView::BookRecord *BookSearchView::selectedBook() const
{
    const QModelIndexList rows = m_grid->selectionModel()->selectedRows();
    return rows.isEmpty() ? nullptr : bookForRow(rows.first().row());
}

void BookSearchView::updateActionState()
{
    const bool enabled = selectedBook() != nullptr;
    for (Button *button : m_actionButtons) {
        button->setEnabled(enabled);
    }
}

void BookSearchView::setFeedback(const QString &message)
{
    m_feedbackLabel->setText(message);
}

void BookSearchView::showBookDetails(const BookRecord &book)
{
    /*
        const Book detail = BookService::book(book.bookId);
    */
    QDialog dialog(this);
    dialog.setWindowTitle(QStringLiteral("图书详情"));
    dialog.setMinimumSize(480, 320);
    dialog.setStyleSheet(QStringLiteral("QDialog { background: #FFFFFF; }"));

    auto *layout = new QVBoxLayout(&dialog);
    layout->setContentsMargins(28, 24, 28, 24);
    layout->setSpacing(14);

    auto *title = new Label(book.title, &dialog);
    title->setFluentTypography(Typography::FontRole::Title);
    title->setTextColorRole(Label::TextColorRole::Primary);
    layout->addWidget(title);

    auto *details = new Label(
        QStringLiteral(
            "作者：%1\nISBN：%2\n出版社：%3\n出版日期：%4\n分类：%5\n"
            "价格：￥%6\n页数：%7\n可借 / 馆藏：%8 / %9\n状态：%10\n关键词：%11")
            .arg(book.author, book.isbn, book.publisher)
            .arg(book.publishDate.isValid()
                     ? book.publishDate.toString(QStringLiteral("yyyy-MM-dd"))
                     : QStringLiteral("未知"))
            .arg(book.categoryName)
            .arg(book.price, 0, 'f', 2)
            .arg(book.pages)
            .arg(book.availableCopies)
            .arg(book.totalCopies)
            .arg(statusText(book), book.keywords),
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

void BookSearchView::borrowSelectedBook()
{
    const BookRecord *selected = selectedBook();
    if (!selected) {
        return;
    }
    const ServiceResult result = BorrowService::borrowBook(
        SessionManager::userId(), selected->bookId);
    setFeedback(result.message);
    if (result.ok()) {
        performSearch(false);
    }
    return;

    /*
        const ServiceResult backendResult = BorrowService::borrowBook(
        SessionManager::userId(), book->bookId);
        setFeedback(backendResult.message);
        if (backendResult.ok()) {
            performSearch(false);
        }
    */
    const BookRecord *book = selectedBook();
    if (!book) {
        return;
    }
    setFeedback(book->availableCopies > 0
            ? QStringLiteral("已提交《%1》的借阅请求，等待后端接口接入。").arg(book->title)
            : QStringLiteral("《%1》当前不可借阅。").arg(book->title));
}

void BookSearchView::favoriteSelectedBook()
{
    const BookRecord *selected = selectedBook();
    if (!selected) {
        return;
    }
    bool favorite = false;
    const ServiceResult result = BookService::toggleFavorite(
        SessionManager::userId(), selected->bookId, &favorite);
    setFeedback(result.message);
    m_favoriteButton->setText(favorite ? QStringLiteral("取消收藏")
                                       : QStringLiteral("收藏"));
    return;

    /*
        bool nowFavorite = false;
        const ServiceResult backendResult = BookService::toggleFavorite(
        SessionManager::userId(), book->bookId, &nowFavorite);
        setFeedback(backendResult.message);
        m_favoriteButton->setText(nowFavorite
        ? QStringLiteral("取消收藏")
        : QStringLiteral("收藏"));
    */
    const BookRecord *book = selectedBook();
    if (!book) {
        return;
    }
    setFeedback(QStringLiteral("已收藏《%1》。").arg(book->title));
}

void BookSearchView::copySelectedBook()
{
    const BookRecord *book = selectedBook();
    if (!book) {
        return;
    }
    const QString text =
        QStringLiteral(
            "%1\n作者：%2\nISBN：%3\n出版社：%4\n分类：%5\n可借 / 馆藏：%6 / %7\n状态：%8")
            .arg(book->title, book->author, book->isbn, book->publisher, book->categoryName)
            .arg(book->availableCopies)
            .arg(book->totalCopies)
            .arg(statusText(*book));
    QApplication::clipboard()->setText(text);
    setFeedback(QStringLiteral("已复制《%1》的图书信息。").arg(book->title));
}

void BookSearchView::showContextMenu(const QPoint &position)
{
    const QModelIndex index = m_grid->indexAt(position);
    if (!index.isValid()) {
        return;
    }
    m_grid->selectRow(index.row());

    FluentMenu menu(QStringLiteral("图书操作"), this);
    menu.setFontStyle(Typography::FontRole::Body);
    QAction *detailsAction = menu.addAction(QStringLiteral("查看详情"));
    QAction *borrowAction = menu.addAction(QStringLiteral("立即借阅"));
    QAction *favoriteAction = menu.addAction(QStringLiteral("收藏"));
    menu.addSeparator();
    QAction *copyAction = menu.addAction(QStringLiteral("复制信息"));

    connect(detailsAction, &QAction::triggered, this, [this] {
        const BookRecord *book = selectedBook();
        if (book) {
            showBookDetails(*book);
        }
    });
    connect(borrowAction, &QAction::triggered, this, [this] {
        borrowSelectedBook();
    });
    connect(favoriteAction, &QAction::triggered, this, [this] {
        favoriteSelectedBook();
    });
    connect(copyAction, &QAction::triggered, this, [this] {
        copySelectedBook();
    });

    menu.exec(m_grid->viewport()->mapToGlobal(position));
}

QString BookSearchView::statusText(const BookRecord &book) const
{
    if (book.availableCopies <= 0) {
        return QStringLiteral("不可借");
    }
    if (book.availableCopies == 1) {
        return QStringLiteral("库存紧张");
    }
    return QStringLiteral("可借");
}

QWidget *createBookSearchView(QWidget *parent)
{
    return new BookSearchView(parent);
}
