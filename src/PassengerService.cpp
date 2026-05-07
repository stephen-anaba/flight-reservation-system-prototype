#include "PassengerService.h"

void PassengerService::RegisterPassenger(
    std::vector<Passenger>& passengers,
    const Passenger& passenger) {

    passengers.push_back(passenger);
}
