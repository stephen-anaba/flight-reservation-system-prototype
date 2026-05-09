#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>

#include "crow.h"

// include models
#include "models/Passenger.h"
#include "models/Flight.h"
#include "models/Seat.h"
#include "models/Reservation.h"

//-----------------------------
// helper: load file contents
//-----------------------------
std::string LoadFile(const std::string& path) {

    std::ifstream file(path);

    if (!file.is_open()) {

        std::cerr << "FAILED TO OPEN: "
                  << path
                  << std::endl;

        return "";
    }

    std::cout << "SUCCESSFULLY OPENED: "
              << path
              << std::endl;

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}

//--------
// Main
//--------
int main() {

    // print working directory
    std::cout << "Current Path: "
              << std::filesystem::current_path()
              << std::endl;

    crow::SimpleApp app;

    //-----------------
    // frontend Routes
    //-----------------

    // Home page
    CROW_ROUTE(app, "/")
    ([]() {

        std::string html = LoadFile("frontend/index.html");

        if (html.empty()) {
            return crow::response(500, "Could not load index.html");
        }

        crow::response res(html);
        res.set_header("Content-Type", "text/html");

        return res;
    });

    // CSS
    CROW_ROUTE(app, "/style.css")
    ([]() {

        std::string css = LoadFile("frontend/style.css");

        if (css.empty()) {
            return crow::response(500, "Could not load style.css");
        }

        crow::response res(css);
        res.set_header("Content-Type", "text/css");

        return res;
    });

    // JavaScript
    CROW_ROUTE(app, "/script.js")
    ([]() {

        std::string js = LoadFile("frontend/script.js");

        if (js.empty()) {
            return crow::response(500, "Could not load script.js");
        }

        crow::response res(js);
        res.set_header("Content-Type", "application/javascript");

        return res;
    });

    //---------------------
    // sample Backend Data
    //--------------------

    // create passenger
    Passenger p1(1, "john_doe");

    // Create flight
    Flight f1(100, "Chicago", "New York");

    // Add seats
    f1.AddSeat(Seat(1, 1));
    f1.AddSeat(Seat(2, 1));

    // Create reservation
    Reservation r1(5001, 300.0, &p1, &f1);

    // Reserve seat
    r1.ReserveSeat(f1.GetSeats()[0]);

    // Payment
    r1.MakePayment();

    // Confirmation
    r1.ConfirmReservation();

    // Display reservation
    r1.ShowReservation();

    //-------------------
    // API Routes
    //------------------

    CROW_ROUTE(app, "/passenger/create")
    .methods("POST"_method)
    ([](const crow::request& req) {

        return crow::response(
            200,
            "Passenger created successfully"
        );
    });

    //--------------
    // Start Server
    //--------------

    std::cout << "\nServer running at:\n";
    std::cout << "http://localhost:18030\n\n";

    app.port(18030)
       .multithreaded()
       .run();

    return 0;
}
