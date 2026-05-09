/* #pragma once
#include "Reservation.h"

class ReservationService {
public:
    void Confirm(Reservation& reservation);
}; */

#pragma once

#include <string>

//--------------------------------------------------------------
// Handles reservation business logic
//--------------------------------------------------------------
class ReservationService {

public:

    // Book flight reservation
    std::string BookFlight(
        int flightID,
        int seatID
    );
};
