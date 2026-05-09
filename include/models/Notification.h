#pragma once
#include <string>

class Notification {
private:
    int notificationID_;
    std::string type_;
    std::string priority_;
    std::string content_;
    std::string sentAt_;

public:
    // non-default constructor
    Notification(int id, const std::string& t, const std::string& p, const std::string& c); 
    // member function
    void Send(); 
};
