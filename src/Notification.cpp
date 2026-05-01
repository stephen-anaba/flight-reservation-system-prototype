#include "Notification.h"
#include "Utils.h" // for time
#include <iostream>
// #include <chrono>

Notification::Notification(int id, const std::string& t, const std::string& p, const std::string& c)
    : notificationID_(id), type_(t), priority_(p), content_(c) {
      sentAt_ = currentTime();
      // sentAt_ = std::chrono::system_clock::now();
}

void Notification::Send() {
  std::cout << "[Notification Sent] " << content_ << std::endl;
}

