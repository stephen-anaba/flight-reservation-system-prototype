#include "models/Passenger.h"

#include <iostream>

//--------------------------------------------------------------
// Constructor
//--------------------------------------------------------------
Passenger::Passenger(
    int id,
    const std::string& username,
    const std::string& email,
    const std::string& password
)
    : passengerID_(id),
      username_(username),
      email_(email),
      password_(password),
      notifyStatus_(true),
      notifyTypes_("Email") {}

//--------------------------------------------------------------
// Get passenger ID
//--------------------------------------------------------------
int Passenger::GetPassengerID() const {
    return passengerID_;
}

//--------------------------------------------------------------
// Get username
//--------------------------------------------------------------
std::string Passenger::GetName() const {
    return username_;
}

//--------------------------------------------------------------
// Get email
//--------------------------------------------------------------
std::string Passenger::GetEmail() const {
    return email_;
}

//--------------------------------------------------------------
// Get notification status
//--------------------------------------------------------------
bool Passenger::GetNotifyStatus() const {
    return notifyStatus_;
}

//--------------------------------------------------------------
// Get notification type
//--------------------------------------------------------------
std::string Passenger::GetNotifyTypes() const {
    return notifyTypes_;
}

//--------------------------------------------------------------
// Set notification status
//--------------------------------------------------------------
void Passenger::SetNotifyStatus(bool status) {
    notifyStatus_ = status;
}

//--------------------------------------------------------------
// Set notification type
//--------------------------------------------------------------
void Passenger::SetNotifyTypes(
    const std::string& type
) {
    notifyTypes_ = type;
}

//--------------------------------------------------------------
// Display passenger information
//--------------------------------------------------------------
void Passenger::ShowPassenger() const {

    std::cout << "Passenger ID: "
              << passengerID_
              << std::endl;

    std::cout << "Username: "
              << username_
              << std::endl;

    std::cout << "Email: "
              << email_
              << std::endl;
}
