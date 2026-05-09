#pragma once

#include <string>

//--------------------------------------------------------------
// Passenger class
// Represents a user of the flight reservation system
//--------------------------------------------------------------
class Passenger {

private:

    int passengerID_;

    std::string username_;
    std::string email_;
    std::string password_;

    bool notifyStatus_;
    std::string notifyTypes_;

public:

    //----------------------------------------------------------
    // Constructor
    //----------------------------------------------------------
    Passenger(
        int id,
        const std::string& username,
        const std::string& email = "",
        const std::string& password = ""
    );

    //----------------------------------------------------------
    // Getters
    //----------------------------------------------------------
    int GetPassengerID() const;

    std::string GetName() const;

    std::string GetEmail() const;

    bool GetNotifyStatus() const;

    std::string GetNotifyTypes() const;

    //----------------------------------------------------------
    // Setters
    //----------------------------------------------------------
    void SetNotifyStatus(bool status);

    void SetNotifyTypes(const std::string& type);

    //----------------------------------------------------------
    // Display passenger information
    //----------------------------------------------------------
    void ShowPassenger() const;
};
