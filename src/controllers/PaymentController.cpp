#include "controllers/PaymentController.h"

//--------------------------------------------------------------
// Process payment
//--------------------------------------------------------------
std::string PaymentController::MakePayment(
    double amount,
    const std::string& method
) {

    return "Payment processed | Amount: $"
        + std::to_string(amount)
        + " | Method: "
        + method;
}
