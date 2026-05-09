# Flight Reservation System (C++ + Crow Prototype)

## Overview

This project is a modular Flight Reservation System prototype implemented in C++ using the Crow HTTP framework.

The system demonstrates:

- Object-oriented programming (OOP)
- REST API communication
- Layered backend architecture
- Frontend/backend integration
- Controller–service–model separation
- Modular software engineering principles

This project is intended for academic and educational purposes.

---

#  Architecture

The system follows a layered architecture:

```text
Frontend (HTML / CSS / JavaScript)
        ↓
Crow REST API (C++)
        ↓
Controllers
        ↓
Services
        ↓
Models

The backend is a modular monolithic system inspired by service-oriented design principles.
🛠 Technologies Used
Backend
C++17
Crow HTTP Framework
CMake
Frontend
HTML5
CSS3
Vanilla JavaScript
Testing
Python
requests library

Project Structure
FlightReservationSystem/
│
├── frontend/
├── include/
├── src/
├── server/
├── tests/
├── third_party/
├── build/
├── CMakeLists.txt
└── README.md

Setup Instructions
1. Clone Crow
From project root:
mkdir -p third_party
cd third_party
git clone https://github.com/CrowCpp/Crow.git crow

Build Instructions
From project root:
make build
This will:
create build directory
configure CMake
compile the project

Run Server
make run
Server runs on:
http://localhost:18030

Clean Build Files:
make clean
Rebuild From Scratch:
make rebuild

Frontend:
Once the server is running, open:
http://localhost:18030

The backend serves:
index.html
style.css
script.js

API Endpoints:
Create Passenger
POST /passenger/create

Response:
Passenger created successfully
Book Reservation (planned/extendable)
POST /reservation/book

API Testing:
Install dependencies:
pip install requests
Run tests:
python tests/test_api.py

Current Limitations:
This project is a prototype and does not yet include:
- Database persistence
- Authentication / authorization
- Real payment gateway integration
- Distributed microservices architecture
- Production-level error handling
The focus is on system design and modular backend architecture.

Challenges & Solutions:
1. Frontend not rendering initially
Problem: HTML file was not found by Crow server.
Solution: Fixed incorrect relative file paths and ensured correct working directory usage.
2. Static assets not loading (CSS/JS)
Problem: Browser could not locate frontend assets.
Solution: Explicitly routed /style.css and /script.js through Crow.
3. Button clicks not working
Problem: JavaScript functions were not triggered.
Solution: Fixed mismatch between HTML onclick handlers and JS function names.
4. Silent frontend failures
Problem: No visible errors when JS failed.
Solution: Used browser DevTools (Console + Network tab) to debug missing functions and requests.
5. Crow returning empty responses
Problem: HTTP 200 responses with no visible content.
Solution: Properly set Content-Type headers and ensured responses returned valid HTML strings.

Lessons Learned:
Relative paths in C++ servers depend on runtime working directory, not source location.
Frontend issues often originate from simple naming mismatches (IDs/functions).
Browser DevTools are essential for debugging full-stack applications.
Even “backend working” does not guarantee frontend integration.
Small architecture improvements (like routing static files properly) significantly improve system stability.
Clear separation of layers (Model/Service/Controller) makes debugging much easier.

Future Improvements:
- Database integration (PostgreSQL / SQLite)
- JWT authentication system
- Docker containerization
- RESTful API expansion
- Real-time seat availability updates
- Migration to frontend framework (React/Vue)
- Microservices decomposition
