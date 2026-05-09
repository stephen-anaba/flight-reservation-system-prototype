#pragma once
#include <string>

class Confirmation {
private:
    int confirmationID_;
    std::string passengerName_;
    std::string timeStamp_;

public:
    // non-default constructor
    Confirmation(int id, const std::string& name); 
    // member function
    void PrintConfirmation() const; 
};
