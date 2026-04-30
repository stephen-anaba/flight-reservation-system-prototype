#pragma once
#include <string>

class Passenger {
private:
    int passengerID;
    std::string username;

public:
    Passenger(int id, std::string name);
    int getID() const;
};
