#pragma once

#include <string>

//--------------------------------------------------------------
// Handles payment requests
//--------------------------------------------------------------
class PaymentController {

public:

    // Process payment
    std::string MakePayment(
        double amount,
        const std::string& method
    );
};
