#pragma once
#include <string>

class Payment {
private:
  int paymentID_;
  std::string status_;
  std::string method_;

public:
  // non-default constructor
  Payment(int id, const std::string& m); 
  // member functions
  void processPayment(); 
  std::string getStatus() const;
};
