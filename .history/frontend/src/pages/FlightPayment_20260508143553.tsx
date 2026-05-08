import './styles.css'

import { useNavigate } from 'react-router-dom'

export default function FlightPayment () {

    const navigate = useNavigate()

    return(
        <div>
            <div className='center-header-pages'>
                <p> Welcome to Flight Payment </p>
            </div>
            <button className='center-button-pages'>
                Back To Home
            </button>
        </div>
    )

}