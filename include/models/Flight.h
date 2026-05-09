#pragma once

#include "models/Seat.h"

#include <string>
#include <vector>

//--------------------------------------------------------------
// Flight class
//--------------------------------------------------------------
class Flight {

private:

    int flightID_;

    std::string departure_;
    std::string destination_;

    std::vector<Seat> seats_;

public:

    //----------------------------------------------------------
    // Constructor
    //----------------------------------------------------------
    Flight(
        int id,
        const std::string& dep,
        const std::string& dest
    );

    //----------------------------------------------------------
    // Add seat to flight
    //----------------------------------------------------------
    void AddSeat(const Seat& seat);

    //----------------------------------------------------------
    // Get seats
    //----------------------------------------------------------
    std::vector<Seat>& GetSeats();

    const std::vector<Seat>& GetSeats() const;

    //----------------------------------------------------------
    // Display flight information
    //----------------------------------------------------------
    void ShowFlight() const;
};
