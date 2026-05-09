cmake_minimum_required(VERSION 3.10)

project(FlightReservationSystem)

#--------------------------------------------------------------
# Use C++17
#--------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)

#--------------------------------------------------------------
# Include directories
#--------------------------------------------------------------
include_directories(include)
include_directories(third_party/crow/include)
include_directories(include)
include_directories(third_party/crow/include)
include_directories(
    include
    third_party/crow/include
)
# ASIO
include_directories(/Users/guestuser/homebrew/include)
# OpenSSL
include_directories(
    /Users/guestuser/homebrew/opt/openssl@3/include
)
# Linker directories
link_directories(
    /Users/guestuser/homebrew/opt/openssl@3/lib
)

#--------------------------------------------------------------
# Executable
#--------------------------------------------------------------
add_executable(FlightReservationSystem

    # Server
    server/main.cpp

    # Controllers
    src/controllers/PassengerController.cpp
    src/controllers/ReservationController.cpp

    # Services
    src/services/PassengerService.cpp
    src/services/ReservationService.cpp

    # Models
    src/models/Passenger.cpp
    src/models/Flight.cpp
    src/models/Seat.cpp
    src/models/Reservation.cpp
    src/models/Payment.cpp
    src/models/Notification.cpp
    src/models/Confirmation.cpp

    src/utils/Utils.cpp
)

#--------------------------------------------------------------
# Threads required for Crow
#--------------------------------------------------------------
find_package(Threads REQUIRED)

target_link_libraries(
    FlightReservationSystem
    Threads::Threads
)
