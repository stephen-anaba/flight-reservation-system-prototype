// ============================================================
// Utility function to display system messages
// ============================================================

function logMessage(message) {

    const output = document.getElementById("output");

    output.innerHTML += `<p>${message}</p>`;
}

// ============================================================
// Create user account
// ============================================================

function createAccount() {

    const username =
        document.getElementById("username").value;

    const email =
        document.getElementById("email").value;

    // In real system:
    // controller -> PassengerService -> Passenger class

    logMessage(
        `Account created for ${username} (${email})`
    );
}

// ============================================================
// Book flight
// ============================================================

function bookFlight() {

    const departure =
        document.getElementById("departure").value;

    const destination =
        document.getElementById("destination").value;

    const seat =
        document.getElementById("seat").value;

    // Simulated controller call
    // controller -> ReservationService -> Flight class

    logMessage(
        `Flight booked: ${departure} → ${destination}, Seat ${seat}`
    );
}

// ============================================================
// Process payment
// ============================================================

function makePayment() {

    const amount =
        document.getElementById("amount").value;

    const method =
        document.getElementById("paymentMethod").value;

    // Simulated controller call
    // controller -> PaymentService

    logMessage(
        `Payment of $${amount} processed using ${method}`
    );
}

// ============================================================
// Save notification settings
// ============================================================

function saveNotifications() {

    const emailNotify =
        document.getElementById("emailNotify").checked;

    const smsNotify =
        document.getElementById("smsNotify").checked;

    // Simulated controller call
    // controller -> NotificationService

    logMessage(
        `Notification settings saved
        (Email: ${emailNotify},
        SMS: ${smsNotify})`
    );
}
