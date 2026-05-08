import './styles.css'

import { useNavigate } from 'react-router-dom'

export default function AccountDetails () {

    const navigate = useNavigate()

    return(
        <div>
            <div className='center-header-pages'>
                <p> Welcome to Account Details </p>
            </div>
        </div>
    )

}