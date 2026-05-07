#pragma once

#include "Confirmation.h"
#include "Flight.h"
#include "Notification.h"
#include "Passenger.h"
#include "Payment.h"
#include "Seat.h"   // ✅ REQUIRED
#include <string>
#include <vector>

class Reservation {
private:
    int reservationID_;
    double pricing_;
    std::string status_;

    Passenger* passenger_;
    Flight* flight_;

    std::vector<Seat*> reserved_seats_;

    Payment payment_;
    Confirmation* confirmation_;

    std::vector<Notification> notifications_;

public:
    // Constructor declaration ONLY (no implementation here)
    Reservation(int id, double price,
                Passenger* p,
                Flight* f);

    // Use reference (clean API)
    void ReserveSeat(Seat& seat);

    void MakePayment();
    void ConfirmReservation();
    void ShowReservation();

    ~Reservation();
};
