// PassengerController.cpp

#include "controllers/PassengerController.h"
#include "services/PassengerService.h"
#include <string>

class PassengerController {
public:

    // Creates passenger account
    std::string CreatePassenger(
        const std::string& username,
        const std::string& email
    );
};

