# Flight Reservation System (C++ Prototype)

##  Overview

This project is a **Flight Reservation System** implemented in C++ using an object-oriented and modular design.

It models core components of a real-world airline booking system, including:

* Passenger management
* Flight and seat handling
* Reservation lifecycle
* Payment processing
* Notifications and confirmations

---

## Architecture

This project follows a **service-oriented modular architecture** inspired by microservices.

### Important Note

> This is **NOT a true microservices system**.

Instead, it is a:

> **Monolithic prototype with clear separation of concerns**, designed to simulate microservices behavior.

### Why not real microservices?

A true microservices system requires:

* Independent processes/services
* Network communication (HTTP/gRPC)
* Distributed databases
* Deployment orchestration (Docker/Kubernetes)

These are **outside the scope of this academic prototype**.

---

## System Design

### Layers

* **Models (Entities)**
  Represent system data (Passenger, Flight, Seat, etc.)

* **Services**
  Handle business logic (ReservationService, PaymentService, etc.)

* **Utilities**
  Provide reusable helper functions (e.g., time generation)

---

## Project Structure

```
FlightReservationSystem/
│── CMakeLists.txt
│── main.cpp
│
├── include/
│   ├── Passenger.h
│   ├── Flight.h
│   ├── Seat.h
│   ├── Reservation.h
│   ├── Payment.h
│   ├── Notification.h
│   ├── Confirmation.h
│   ├── Utils.h
│
├── src/
│   ├── Passenger.cpp
│   ├── Flight.cpp
│   ├── Seat.cpp
│   ├── Reservation.cpp
│   ├── Payment.cpp
│   ├── Notification.cpp
│   ├── Confirmation.cpp
│   ├── Utils.cpp
```

---

## Build Instructions

### Requirements

* C++17 or later
* CMake (version 3.10+)

---

### Build Steps

```bash
mkdir build
cd build
cmake ..
make
```

---

### Run

```bash
./FlightReservationSystem
```

---

## Example Flow

1. Create a Passenger
2. Create a Flight with Seats
3. Make a Reservation
4. Reserve a Seat
5. Process Payment
6. Generate Confirmation
7. Send Notification

---

## Learning Objectives

This project demonstrates:

* Object-Oriented Design (OOD)
* Separation of Concerns
* Modular Architecture
* Basic system modeling
* UML-driven design

---

## Future Improvements

* Convert services into real microservices (REST APIs)
* Add persistent storage (database)
* Introduce concurrency handling
* Implement authentication

---

## Author Notes

This project prioritizes **clarity and architecture** over production complexity.

It is designed as a **teaching and learning artifact**, not a production system.

