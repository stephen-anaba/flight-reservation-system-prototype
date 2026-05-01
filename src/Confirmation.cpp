#include "Confirmation.h"
#include "Utils.h"
#include <iostream>

// non-default constructor
Confirmation::Confirmation(int id, const std::string& name)
   : confirmationID_(id), passengerName_(name) {
     timeStamp_ = currentTime(); 
}

// member function
void Confirmation::printConfirmation() const {
  std::cout << "Confirmation ID: " << confirmationID_ << std::endl;
  std::cout << "Passenger: " << passengerName_ << std::endl;
  std::cout << "Confirmed At: " << timeStamp_ << std::endl;
}

