"use client";

import MainPage from "./components/MainPage";

import { BrowserRouter, Routes, Route} from 'react-router-dom'

import AccountDetails from './pages/AccountDetails';
import FlightBooking from './pages/FlightBooking';
import FlightPayment from './pages/FlightPayment';
import Notifications from './pages/Notifications';

export default function App() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<MainPage />} />
        <Route path="/flight-booking" element={<FlightBooking />} />
        <Route path="/flight-payment" element={<FlightPayment />} />
        <Route path="/notifications" element={<Notifications />} />
        <Route path="/account-details" element={<AccountDetails />} />
      </Routes>
    </BrowserRouter>
  );
}

