#include "Payment.h"

Payment::Payment(int id, const std::string& m)
    : paymentID_(id), method_(m), status_("Pending") {}

void Payment::processPayment() {
  status_ = "Paid";
}

std::string Payment::getStatus() const { return status_; }

