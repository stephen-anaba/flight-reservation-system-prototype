#include "Reservation.h"

// non-default constructor
Reservation::Reservation(int id, double price,
                Passenger* p,
                Flight* f)
        : reservationID_(id),
          pricing_(price),
          status_("Pending"),
          passenger_(p),
          flight_(f),
          payment_(id + 1000, "Credit Card") {
        confirmation_ = nullptr;
    }

    void Reservation::ReserveSeat(Seat* seat) {
        seat->ReserveSeat();
        reserved_seats_.push_back(seat);
    }

    void Reservation::MakePayment() {
        payment_.ProcessPayment();
    }

    void Reservation::ConfirmReservation() {
        if (payment_.GetStatus() == "Paid") {
            status_ = "Confirmed";
            confirmation_ = new Confirmation(
                reservationID_ + 5000,
                passenger_->GetName()
            );

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

    void Reservation::ShowReservation() {
      std::cout << "\nReservation ID: " << reservationID_ << std::endl;
      std::cout << "Passenger: " << passenger_->GetName() << std::endl;
      std::cout << "Price: $" << pricing_ << std::endl;
      std::cout << "Status: " << status_ << std::endl;

        if (confirmation_)
            confirmation_->PrintConfirmation();
    }

    ~Reservation::Reservation() { // destructor
        delete confirmation;
    }

