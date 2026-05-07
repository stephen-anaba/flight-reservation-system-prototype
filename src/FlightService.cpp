#include "FlightService.h"

void FlightService::ShowAllFlights(
    const std::vector<Flight>& flights) const {

    for (const auto& f : flights)
        f.ShowFlight();
}
