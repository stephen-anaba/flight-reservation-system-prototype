#include "Confirmation.h"
#include <chrono>
#include <ctime>
#include <iostream>

// non-default constructor
Confirmation::Confirmation(int id, const std::string& name)
   : confirmationID_(id), passengerName_(name) {
     // convert chrono time to c-style time_t, then format it
     auto now = std::chrono::system_clock::now(); // current time
     std::time_t now_c = std::chrono::system_clock::to_time_t(now);
     timeStamp_ = std::ctime(&now_c); // convert to string
}

// member function
void Confirmation::printConfirmation() const {
  std::cout << "Confirmation ID: " << confirmationID_ << std::endl;
  std::cout << "Passenger: " << passengerName_ << std::endl;
  std::cout << "Confirmed At: " << timeStamp_ << std::endl;
}

