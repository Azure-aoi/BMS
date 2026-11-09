#pragma once

#include "models/Models.h"

#include <QList>
#include <QString>

class ReservationDao
{
public:
    static bool create(int readerId, int bookId, const QString &note = QString(),
                       QString *error = nullptr);
    static bool cancel(int reservationId, int readerId, QString *error = nullptr);
    static QList<Reservation> listForReader(int readerId, QString *error = nullptr);
    static bool hasActive(int readerId, int bookId, QString *error = nullptr);
    static bool firstPendingForBook(int bookId, int *reservationId, int *readerId,
                                    QString *error = nullptr);
    static bool setStatus(int reservationId, const QString &status, QString *error = nullptr);
    static int countActive(QString *error = nullptr);
};
