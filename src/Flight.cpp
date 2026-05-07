#include "Flight.h"
#include <iostream>

Flight::Flight(int id, const std::string& dep, const std::string& dest)
    : flightID_(id), departure_(dep), destination_(dest) {}

void Flight::AddSeat(const Seat& seat) {
    seats_.push_back(seat);
}

const std::vector<Seat>& Flight::GetSeats() const {
    return seats_;
}

std::vector<Seat>& Flight::GetSeats() {
  return seats_;
}

void Flight::ShowFlight() const {
  std::cout << "Flight #" << flightID_
          << " | " << departure_
          << " -> " << destination_ << std::endl;
}

