#include "models/Flight.h"

#include <iostream>

//--------------------------------------------------------------
// Constructor
//--------------------------------------------------------------
Flight::Flight(
    int id,
    const std::string& dep,
    const std::string& dest
)
    : flightID_(id),
      departure_(dep),
      destination_(dest) {}

//--------------------------------------------------------------
// Add seat
//--------------------------------------------------------------
void Flight::AddSeat(const Seat& seat) {

    seats_.push_back(seat);
}

//--------------------------------------------------------------
// Non-const getter
//--------------------------------------------------------------
std::vector<Seat>& Flight::GetSeats() {

    return seats_;
}

//--------------------------------------------------------------
// Const getter
//--------------------------------------------------------------
const std::vector<Seat>& Flight::GetSeats() const {

    return seats_;
}

//--------------------------------------------------------------
// Display flight info
//--------------------------------------------------------------
void Flight::ShowFlight() const {

    std::cout << "Flight #"
              << flightID_
              << " | "
              << departure_
              << " -> "
              << destination_
              << std::endl;
}
