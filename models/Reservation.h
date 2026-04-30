#pragma once
#include "Confirmation.h"
#include "Flight.h"
#include "Notification.h"
#include "Passenger.h"
#include "Payment.h"
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
    Reservation(int id, double price,
                Passenger* p,
                Flight* f)
        : reservationID_(id),
          pricing_(price),
          status_("Pending"),
          passenger_(p),
          flight_(f),
          payment_(id + 1000, "Credit Card"); 

    void ReserveSeat(Seat* seat); 

    void MakePayment(); 

    void ConfirmReservation(); 

    void ShowReservation(); 

    ~Reservation(); 
};
