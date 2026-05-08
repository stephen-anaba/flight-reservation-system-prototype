import './styles.css'
import paymentImage from './images/payment.png'
import flightBooking from './images/flightBooking.png'
import notificationImage from './images/notification.png'
import accountImage from './images/account.png'


export default function MainPage() {
    return(
        <div>
            <div className='center-header'>
                <p className='header-text'> Fligh Reservation System (FRS)</p>
            </div>
            <div className='carousel'>
                <div className='carousel-slide-2'> </div>
                    <div className='carousel-slide'>
                        <div className='content-center'>
                            <h2 className='option-text'> Flight Booking </h2>
                            <img className='image-main' src={flightBooking} alt='Flight'/>
                            <p> View flights that are available for booking </p>
                            <button className='redirect-button'> Redirect To </button>
                        </div>
                    </div>
                    <div className='carousel-slide'>
                        <div className='content-center'>
                            <h2 className='option-text'> Booking Payment </h2>
                            <img className='image-main' src={paymentImage} alt='Payment'/>
                            <p> Pay for any flights that you have wanted to take</p>
                            <button className='redirect-button'> Redirect To </button>
                        </div>
                    </div>
                    <div className='carousel-slide'>
                        <div className='content-center'>
                            <h2 className='option-text'> Notifications </h2>
                            <img className='image-main' src={notificationImage} alt='Notification'/>
                            <p> Get notifications of any payments that have been made </p>
                            <button className='redirect-button'> Redirect To </button>
                        </div>
                    </div>
                    <div className='carousel-slide'>
                        <div className='content-center'>
                            <h2 className='option-text'> Account Information </h2>
                            <img className='image-main' src={accountImage} alt='Account'/>
                            <p> View and input basic information of this account </p>
                            <button className='redirect-button'> Redirect To </button>
                        </div>
                    </div>
                <div className='carousel-slide-2'></div>
            </div>
        </div>
    )
}