#pragma once
#include "Passenger.h"
#include <vector>

class PassengerService {
public:
    void RegisterPassenger(std::vector<Passenger>& passengers,
                           const Passenger& passenger);
};
