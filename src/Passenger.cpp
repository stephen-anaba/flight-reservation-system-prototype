#include "Passenger.h"

Passenger::Passenger(int id, const std::string& name)
    : passengerID_(id), username_(name) {}

int Passenger::GetID() const {
    return passengerID_;
}

std::string Passenger::GetName() const { return username_; }
