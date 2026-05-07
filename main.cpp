#include <iostream>

// Include models
#include "Passenger.h"
#include "Flight.h"
#include "Seat.h"
#include "Reservation.h"

int main() {

    // Create passenger
    Passenger p1(1, "john_doe");

    // Create flight
    Flight f1(100, "Chicago", "New York");

    // Add seats to flight
    f1.AddSeat(Seat(1, 1));
    f1.AddSeat(Seat(2, 1));

    // Create reservation
    Reservation r1(5001, 300.0, &p1, &f1);

    // Reserve a seat (uses reference version)
    r1.ReserveSeat(f1.GetSeats()[0]);

    // Process payment
    r1.MakePayment();

    // Confirm reservation
    r1.ConfirmReservation();

    // Display result
    r1.ShowReservation();

    return 0;
}
