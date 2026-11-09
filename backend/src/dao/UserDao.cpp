#include "dao/UserDao.h"

#include "dao/DbUtil.h"

namespace {

const char *kReaderSelect = R"SQL(
SELECT r.reader_id, r.student_no, r.name, r.gender, r.category_id,
       c.name AS category_name, c.max_borrow,
       r.department, r.phone, r.email, r.address, r.is_frozen, r.created_at,
       r.password_hash,
       (SELECT COUNT(*) FROM borrow_record br
         WHERE br.reader_id = r.reader_id AND br.status = 'borrowed') AS active_borrows,
       (SELECT COUNT(*) FROM borrow_record br
         WHERE br.reader_id = r.reader_id AND br.status = 'borrowed'
           AND br.due_date < CURDATE()) AS overdue_count
FROM reader r
JOIN reader_category c ON c.category_id = r.category_id
)SQL";

void fillReader(const QSqlQuery &query, ReaderInfo &reader)
{
    reader.id = query.value(QStringLiteral("reader_id")).toInt();
    reader.studentNo = query.value(QStringLiteral("student_no")).toString();
    reader.name = query.value(QStringLiteral("name")).toString();
    reader.gender = query.value(QStringLiteral("gender")).toString();
    reader.categoryId = query.value(QStringLiteral("category_id")).toInt();
    reader.categoryName = query.value(QStringLiteral("category_name")).toString();
    reader.maxBorrow = query.value(QStringLiteral("max_borrow")).toInt();
    reader.department = query.value(QStringLiteral("department")).toString();
    reader.phone = query.value(QStringLiteral("phone")).toString();
    reader.email = query.value(QStringLiteral("email")).toString();
    reader.address = query.value(QStringLiteral("address")).toString();
    reader.frozen = query.value(QStringLiteral("is_frozen")).toInt() != 0;
    reader.createdAt = query.value(QStringLiteral("created_at")).toDateTime();
    reader.activeBorrows = query.value(QStringLiteral("active_borrows")).toInt();
    reader.overdueCount = query.value(QStringLiteral("overdue_count")).toInt();
}

} // namespace

bool UserDao::findAdminByUsername(const QString &username, AdminInfo *out,
                                  QString *passwordHash, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT admin_id, username, display_name, password_hash FROM admin WHERE username = ?"));
    query.addBindValue(username);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;

    if (out) {
        out->id = query.value(QStringLiteral("admin_id")).toInt();
        out->username = query.value(QStringLiteral("username")).toString();
        out->displayName = query.value(QStringLiteral("display_name")).toString();
    }
    if (passwordHash)
        *passwordHash = query.value(QStringLiteral("password_hash")).toString();
    return true;
}

bool UserDao::readerExists(const QString &studentNo, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("SELECT 1 FROM reader WHERE student_no = ?"));
    query.addBindValue(studentNo);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.next();
}

bool UserDao::findReaderByStudentNo(const QString &studentNo, ReaderInfo *out,
                                    QString *passwordHash, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kReaderSelect) + QStringLiteral(" WHERE r.student_no = ?"));
    query.addBindValue(studentNo);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (out)
        fillReader(query, *out);
    if (passwordHash)
        *passwordHash = query.value(QStringLiteral("password_hash")).toString();
    return true;
}

bool UserDao::findReaderById(int readerId, ReaderInfo *out, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kReaderSelect) + QStringLiteral(" WHERE r.reader_id = ?"));
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (out)
        fillReader(query, *out);
    return true;
}

QList<ReaderInfo> UserDao::listReaders(const QString &keyword, QString *error)
{
    QList<ReaderInfo> result;
    QSqlQuery query = DbUtil::query();
    QString sql = QString::fromLatin1(kReaderSelect);
    if (!keyword.trimmed().isEmpty()) {
        sql += QStringLiteral(" WHERE r.name LIKE ? OR r.student_no LIKE ? OR r.department LIKE ?");
    }
    sql += QStringLiteral(" ORDER BY r.reader_id");
    query.prepare(sql);
    if (!keyword.trimmed().isEmpty()) {
        const QString pattern = QStringLiteral("%") + keyword.trimmed() + QStringLiteral("%");
        query.addBindValue(pattern);
        query.addBindValue(pattern);
        query.addBindValue(pattern);
    }
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        ReaderInfo reader;
        fillReader(query, reader);
        result.append(reader);
    }
    return result;
}

bool UserDao::insertReader(const ReaderInfo &reader, const QString &passwordHash,
                           int *newId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT INTO reader (student_no, name, gender, category_id, department, phone, email, "
        "address, password_hash) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)"));
    query.addBindValue(reader.studentNo);
    query.addBindValue(reader.name);
    query.addBindValue(reader.gender);
    query.addBindValue(reader.categoryId);
    query.addBindValue(reader.department);
    query.addBindValue(reader.phone);
    query.addBindValue(reader.email);
    query.addBindValue(reader.address);
    query.addBindValue(passwordHash);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (newId) {
        ReaderInfo created;
        if (findReaderByStudentNo(reader.studentNo, &created, nullptr, error))
            *newId = created.id;
        else
            *newId = -1;
    }
    return true;
}

bool UserDao::updateReaderProfile(const ReaderInfo &reader, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE reader SET name = ?, gender = ?, category_id = ?, department = ?, phone = ?, "
        "email = ?, address = ? WHERE reader_id = ?"));
    query.addBindValue(reader.name);
    query.addBindValue(reader.gender);
    query.addBindValue(reader.categoryId);
    query.addBindValue(reader.department);
    query.addBindValue(reader.phone);
    query.addBindValue(reader.email);
    query.addBindValue(reader.address);
    query.addBindValue(reader.id);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() >= 0;
}

bool UserDao::updateReaderPassword(int readerId, const QString &passwordHash, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("UPDATE reader SET password_hash = ? WHERE reader_id = ?"));
    query.addBindValue(passwordHash);
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

bool UserDao::setReaderFrozen(int readerId, bool frozen, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("UPDATE reader SET is_frozen = ? WHERE reader_id = ?"));
    query.addBindValue(frozen ? 1 : 0);
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() >= 0;
}

bool UserDao::removeReader(int readerId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("DELETE FROM reader WHERE reader_id = ?"));
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

QList<ReaderCategory> UserDao::readerCategories(QString *error)
{
    QList<ReaderCategory> result;
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral(
            "SELECT category_id, name, max_borrow, note FROM reader_category ORDER BY category_id"))) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        ReaderCategory category;
        category.id = query.value(0).toInt();
        category.name = query.value(1).toString();
        category.maxBorrow = query.value(2).toInt();
        category.note = query.value(3).toString();
        result.append(category);
    }
    return result;
}

bool UserDao::readerCategory(int categoryId, QString *name, int *maxBorrow, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("SELECT name, max_borrow FROM reader_category WHERE category_id = ?"));
    query.addBindValue(categoryId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (name)
        *name = query.value(0).toString();
    if (maxBorrow)
        *maxBorrow = query.value(1).toInt();
    return true;
}

int UserDao::readerCount(QString *error)
{
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral("SELECT COUNT(*) FROM reader"))) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}
