/* #include "PassengerService.h"

void PassengerService::RegisterPassenger(
    std::vector<Passenger>& passengers,
    const Passenger& passenger) {

    passengers.push_back(passenger);
} */

#include "services/PassengerService.h"

//--------------------------------------------------------------
// Create passenger account
//--------------------------------------------------------------
std::string PassengerService::CreatePassenger(
    const std::string& username,
    const std::string& email
) {

    return "Passenger created: "
        + username
        + " (" + email + ")";
}
