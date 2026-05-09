#pragma once

#include <string>

//--------------------------------------------------------------
// Handles reservation-related API requests
//--------------------------------------------------------------
class ReservationController {

public:

    //----------------------------------------------------------
    // Book flight reservation
    //----------------------------------------------------------
    std::string BookFlight(
        int flightID,
        int seatID
    );
};
