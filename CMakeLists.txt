# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(FlightReservationSystem)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files
include_directories(include)

# Add executable and source files
add_executable(FlightReservationSystem
    main.cpp

    src/Passenger.cpp
    src/Flight.cpp
    src/Seat.cpp
    src/Reservation.cpp
    src/Payment.cpp
    src/Notification.cpp
    src/Confirmation.cpp
    src/Utils.cpp
)
