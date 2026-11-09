#pragma once

#include "core/ServiceResult.h"
#include "models/Models.h"

#include <QList>

class ReservationService
{
public:
    static ServiceResult reserveBook(int readerId, int bookId);
    static ServiceResult cancelReservation(int reservationId, int readerId);
    static QList<Reservation> forReader(int readerId);
};
