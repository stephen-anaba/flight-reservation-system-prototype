#include "models/Seat.h"

// non-default constructor
Seat::Seat(int id, int r)
    : seatID_(id), row_(r), status_("Available") {}
    
// member function
void Seat::ReserveSeat() { status_ = "Reserved"; }
// getters
std::string Seat::GetStatus() const { return status_; }
int Seat::GetID() const { return seatID_; }

