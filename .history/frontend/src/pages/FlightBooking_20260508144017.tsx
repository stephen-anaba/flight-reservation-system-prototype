import './styles.css'

import { useNavigate } from 'react-router-dom'

export default function FlightBooking () {

    const navigate = useNavigate()

    return(
        <div>
            <div className='center-header-pages'>
                <p> Welcome to Flight Booking </p>
            </div>
            <div className='center-button'>
                <button className='color-button'>
                    Back To Home
                </button>
            </div>
        </div>
    )

}