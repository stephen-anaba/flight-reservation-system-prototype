#pragma once
#include <string>

class Seat {
private:
    int seatID_;
    int row_;
    std::string status_;

public:
    // non-default constructor
    Seat(int id, int r); 
    
    // member function
    void ReserveSeat();
    // getters
    std::string GetStatus() const;
    int GetID() const;
};
