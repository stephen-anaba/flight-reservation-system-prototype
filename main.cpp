#include "Reservation.h"

int main() {

    Passenger p1(1, "john_doe", "john@email.com", "1234");

    Flight f1(100, "Chicago", "New York");

    f1.addSeat(Seat(1, 1));
    f1.addSeat(Seat(2, 1));
    f1.addSeat(Seat(3, 2));

    Reservation r1(5001, 350.00, &p1, &f1);

    r1.reserveSeat(&f1.getSeats()[0]);

    r1.makePayment();

    r1.confirmReservation();

    r1.showReservation();

    return 0;
}
