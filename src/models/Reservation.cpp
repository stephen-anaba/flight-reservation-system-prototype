#include "models/Reservation.h"
#include <iostream>

// ----------- Constructor implementation ----------
Reservation::Reservation(int id, double price,
                         Passenger* p,
                         Flight* f)
    : reservationID_(id),
      pricing_(price),
      status_("Pending"),
      passenger_(p),
      flight_(f),
      payment_(id + 1000, "Credit Card"),
      confirmation_(nullptr) {}   


// --------- Reserve a seat -----------
void Reservation::ReserveSeat(Seat& seat) {
    // Mark seat as reserved
    seat.ReserveSeat();

    // Store pointer internally
    reserved_seats_.push_back(&seat);
}


// --------- Process payment ----------
void Reservation::MakePayment() {
    payment_.ProcessPayment();
}

// -------- Confirm reservation -----------
void Reservation::ConfirmReservation() {
    if (payment_.GetStatus() == "Paid") {
        status_ = "Confirmed";

        // Create confirmation
        confirmation_ = new Confirmation(
            reservationID_ + 5000,
            passenger_->GetName()
        );

        // Send notification
        notifications_.push_back(
            Notification(
                reservationID_ + 9000,
                "Email",
                "High",
                "Your reservation is confirmed."
            )
        );

        notifications_.back().Send();
    }
}

// ----- Display reservation details --------
void Reservation::ShowReservation() {
    std::cout << "\nReservation ID: " << reservationID_ << std::endl;
    std::cout << "Passenger: " << passenger_->GetName() << std::endl;
    std::cout << "Price: $" << pricing_ << std::endl;
    std::cout << "Status: " << status_ << std::endl;

    if (confirmation_)
        confirmation_->PrintConfirmation();
}

// ----- Destructor --------
Reservation::~Reservation() {
    delete confirmation_;
}
