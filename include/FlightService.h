#pragma once
#include "Flight.h"
#include <vector>

class FlightService {
public:
    void ShowAllFlights(const std::vector<Flight>& flights) const;
};
