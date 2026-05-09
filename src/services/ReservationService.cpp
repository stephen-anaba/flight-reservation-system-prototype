/* #include "ReservationService.h"

void ReservationService::Confirm(Reservation& reservation) {
    reservation.confirmReservation();
} */

#include "services/ReservationService.h"

//--------------------------------------------------------------
// Book flight
//--------------------------------------------------------------
std::string ReservationService::BookFlight(
    int flightID,
    int seatID
) {

    return "Reservation successful | Flight "
        + std::to_string(flightID)
        + " | Seat "
        + std::to_string(seatID);
}
