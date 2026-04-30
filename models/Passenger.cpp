#include "Passenger.h"

Passenger::Passenger(int id, std::string name)
    : passengerID(id), username(name) {}

int Passenger::getID() const {
    return passengerID;
}
