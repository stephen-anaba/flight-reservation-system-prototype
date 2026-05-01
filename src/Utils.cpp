#include "Utils.h"
#include <ctime>

std::string currentTime() {
    // get the time now
    std::time_t now = std::time(nullptr);
    std::string t = std::ctime(&now); // convert to string
    // format & return
    if (!t.empty() && t.back() == '\n')
        t.pop_back();

    return t;
}
