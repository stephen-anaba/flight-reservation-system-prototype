#include "models/Payment.h"

Payment::Payment(int id, const std::string& m)
    : paymentID_(id), method_(m), status_("Pending") {}

void Payment::ProcessPayment() {
  status_ = "Paid";
}

std::string Payment::GetStatus() const { return status_; }

