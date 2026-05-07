#pragma once
#include <string>

class Passenger {
private:
    int passengerID_;
    std::string username_;

public:
    // for simplicity, constructor is abridged
    Passenger(int id, const std::string& name);
    int GetID() const;
    std::string GetName() const;
};

// passID, username, email, password
// Passenger p1(1, "john_doe", "john@email.com", "1234");
