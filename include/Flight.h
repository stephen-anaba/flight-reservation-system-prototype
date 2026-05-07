#pragma once
#include "Seat.h"
#include <string>
#include <vector>

class Flight {
private:
    int flightID_;
    std::string departure_;
    std::string destination_;
    std::vector<Seat> seats_;

public:
    Flight(int id, const std::string& dep, const std::string& dest);

    void AddSeat(const Seat& seat); 
    // const and non-const versions
    std::vector<Seat>& GetSeats();
    const std::vector<Seat>& GetSeats() const; 

    void ShowFlight() const; 
};
