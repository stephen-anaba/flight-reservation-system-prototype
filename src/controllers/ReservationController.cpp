#include "controllers/ReservationController.h"

#include "services/ReservationService.h"

//--------------------------------------------------------------
// Book flight reservation
//--------------------------------------------------------------
std::string ReservationController::BookFlight(
    int flightID,
    int seatID
) {

    // Create reservation service object
    ReservationService service;

    // Delegate booking request to service layer
    return service.BookFlight(
        flightID,
        seatID
    );
}
