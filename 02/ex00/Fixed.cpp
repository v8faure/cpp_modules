#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	fxp_value = 0;
}

Fixed::Fixed(const Fixed &_fxp_value) {
	std::cout << "Copy constructor called" << std::endl;
	fxp_value = _fxp_value.getRawBits();
}

Fixed & Fixed::operator= (Fixed const &_fxp_value) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &_fxp_value)
		return *this;
	this->fxp_value = _fxp_value.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (fxp_value);
}

void Fixed::setRawBits(int const raw) {
	fxp_value = raw;
}