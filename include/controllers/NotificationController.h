#pragma once

#include <string>

//--------------------------------------------------------------
// Handles notification requests
//--------------------------------------------------------------
class NotificationController {

public:

    // Save notification settings
    std::string SaveSettings(
        bool emailEnabled,
        bool smsEnabled
    );
};
