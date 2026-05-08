import './styles.css'

import { useNavigate } from 'react-router-dom'

export default function FlightBooking () {

    const navigate = useNavigate()

    return(
        <div>
            <div className='center-header-pages'>
                <p> Welcome to Flight Booking </p>
            </div>
            <div>
                <button className='center-button-pages'>
                    Back To Home
                </button>
            </div>
        </div>
    )

}