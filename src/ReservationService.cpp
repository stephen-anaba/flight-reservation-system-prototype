#include "ReservationService.h"

void ReservationService::Confirm(Reservation& reservation) {
    reservation.confirmReservation();
}
