import './styles.css'

import { useNavigate } from 'react-router-dom'

export default function Notifications () {

    const navigate = useNavigate()

    return(
        <div>
            <div className='center-header-pages'>
                <p> Welcome to Notifications </p>
            </div>
        </div>
    )

}