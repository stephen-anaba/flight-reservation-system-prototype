import './styles.css'


export default function MainPage() {
    return(
        <div>
            <div className='center-header'>
                <p className='header-text'> Fligh Reservation System (FRS)</p>
            </div>
            <div className='carousel'>
                <div className='carousel-slide-2'> </div>
                    <div className='carousel-slide'>
                        <p> Flight Booking </p>
                        <img src='./images/Payment.png'
                    </div>
                    <div className='carousel-slide'>
                        Payment Section
                    </div>
                    <div className='carousel-slide'>
                        Notifications
                    </div>
                    <div className='carousel-slide'>
                        Account Info
                    </div>
                <div className='carousel-slide-2'></div>
            </div>
        </div>
    )
}