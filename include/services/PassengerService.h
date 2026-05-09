/*#pragma once
#include "Passenger.h"
#include <vector>

class PassengerService {
public:
    void RegisterPassenger(std::vector<Passenger>& passengers,
                           const Passenger& passenger);
}; */

#pragma once

#include <string>

//----------------------------------
// Handles passenger business logic
//-----------------------------------
class PassengerService {

public:

    // Create passenger account
    std::string CreatePassenger(
        const std::string& username,
        const std::string& email
    );
};
