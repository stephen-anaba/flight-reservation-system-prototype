#include "Notification.h"
#include <chrono>

Notification::Notification(int id, const std::string& t, const std::string& p, const std::string& c)
    : notificationID_(id), type_(t), priority_(p), content_(c) {
  sentAt_ = std::chrono::system_clock::now(); // currentTime();
}

void Notification::send() {
  std::cout << "[Notification Sent] " << content << std::endl;
}

