#include "PaymentService.h"

void PaymentService::Process(Payment& payment) {
    payment.ProcessPayment();
}
