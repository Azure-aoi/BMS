#pragma once

#include <QDate>
#include <QDateTime>
#include <QList>
#include <QString>

struct ReaderCategory
{
    int id = -1;
    QString name;
    int maxBorrow = 5;
    QString note;
};

struct ReaderInfo
{
    int id = -1;
    QString studentNo;
    QString name;
    QString gender = QStringLiteral("其他");
    int categoryId = -1;
    QString categoryName;
    int maxBorrow = 5;
    QString department;
    QString phone;
    QString email;
    QString address;
    bool frozen = false;
    int activeBorrows = 0;
    int overdueCount = 0;
    QDateTime createdAt;
};

struct AdminInfo
{
    int id = -1;
    QString username;
    QString displayName;
};

struct SessionUser
{
    enum class Role { None, Reader, Admin };

    Role role = Role::None;
    int id = -1;
    QString account;
    QString name;
    QString categoryName;
    int maxBorrow = 5;

    bool isAdmin() const { return role == Role::Admin; }
    bool isReader() const { return role == Role::Reader; }
};

struct BookCategory
{
    int id = -1;
    QString name;
    QString keywords;
};

struct Book
{
    int id = -1;
    QString isbn;
    QString title;
    QString author;
    QString publisher;
    QDate publishDate;
    int categoryId = -1;
    QString categoryName;
    double price = 0.0;
    int totalCopies = 1;
    int availableCopies = 1;
    int pages = 0;
    QString keywords;
    QString summary;
    QString coverPath;
    QDateTime createdAt;

    int borrowedCopies() const { return totalCopies - availableCopies; }
};

struct BorrowRecord
{
    int id = -1;
    int readerId = -1;
    int bookId = -1;
    QString readerNo;
    QString readerName;
    QString bookTitle;
    QString bookAuthor;
    QDateTime borrowDate;
    QDate dueDate;
    QDateTime returnDate;
    int renewCount = 0;
    QString status = QStringLiteral("borrowed");
    int overdueDays = 0;

    bool isReturned() const { return status == QStringLiteral("returned"); }
    bool isOverdue() const { return !isReturned() && dueDate.isValid() && dueDate < QDate::currentDate(); }
};

struct Reservation
{
    int id = -1;
    int readerId = -1;
    int bookId = -1;
    QString bookTitle;
    QString bookAuthor;
    QDateTime reserveDate;
    QString status = QStringLiteral("pending");
    QString note;
};

struct FavoriteBook
{
    int bookId = -1;
    QString title;
    QString author;
    QString categoryName;
    int availableCopies = 0;
    int totalCopies = 0;
    QDateTime createdAt;
};

struct Message
{
    int id = -1;
    QString title;
    QString content;
    bool read = false;
    QDateTime createdAt;
};

struct OperationLog
{
    int id = -1;
    QString adminName;
    QString action;
    QString detail;
    QDateTime createdAt;
};

struct LoginResult
{
    enum Code { Success, Failed, Frozen, Error };
    Code code = Failed;
    QString message;

    bool ok() const { return code == Success; }
};

struct RegisterRequest
{
    QString studentNo;
    QString name;
    QString gender = QStringLiteral("其他");
    int categoryId = 1;
    QString department;
    QString phone;
    QString email;
    QString address;
    QString password;
};

struct BookQuery
{
    QString keyword;
    int categoryId = -1;
    int page = 1;
    int pageSize = 10;
};

struct BookPage
{
    QList<Book> items;
    int total = 0;
};

struct LibraryStats
{
    int bookTitles = 0;
    int totalCopies = 0;
    int readerCount = 0;
    int activeBorrows = 0;
    int overdueCount = 0;
    int reservationCount = 0;
};

struct CategoryStat
{
    QString name;
    int titles = 0;
    int copies = 0;
};

struct PopularBook
{
    QString title;
    QString author;
    int borrowCount = 0;
};

inline QString borrowStatusText(const BorrowRecord &record)
{
    if (record.isReturned())
        return QStringLiteral("已归还");
    if (record.isOverdue())
        return QStringLiteral("已逾期");
    return QStringLiteral("在借");
}

inline QString reservationStatusText(const QString &status)
{
    if (status == QStringLiteral("pending"))
        return QStringLiteral("排队中");
    if (status == QStringLiteral("ready"))
        return QStringLiteral("可借阅");
    if (status == QStringLiteral("cancelled"))
        return QStringLiteral("已取消");
    if (status == QStringLiteral("fulfilled"))
        return QStringLiteral("已完成");
    return status;
}
