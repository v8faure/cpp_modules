#include "Fixed.hpp"

Fixed::Fixed() {
	fxp_value = 0;
}

Fixed::Fixed(const Fixed &_fxp_value) {
	fxp_value = _fxp_value.getRawBits();
}

Fixed::Fixed(const int number) {
	fxp_value = number << fr_bits;
}

Fixed::Fixed( const float fnumber ) {
	fxp_value = (int)(roundf(fnumber * (1 << fr_bits)));
}

Fixed::~Fixed() {}

int Fixed::getRawBits( void ) const {
	return (fxp_value);
}

void Fixed::setRawBits(int const raw) {
	fxp_value = raw;
}

float	Fixed::toFloat() const {
	return ((float)fxp_value / (1 << fr_bits));
}

int Fixed::toInt() const {
	return ((int)(fxp_value >> fr_bits));
}

// Arithmetic operators
Fixed & Fixed::operator= (Fixed const &_fxp_value) {
	if (this == &_fxp_value)
		return *this;
	this->fxp_value = _fxp_value.getRawBits();
	return *this;
}
Fixed Fixed::operator+(const Fixed& other) const {
	Fixed temp;
	temp.setRawBits(fxp_value + other.getRawBits());
	return (temp);
}
Fixed Fixed::operator-(const Fixed& other) const {
	Fixed temp;
	temp.setRawBits(fxp_value - other.getRawBits());
	return (temp);
}
Fixed Fixed::operator*(const Fixed& other) const {
	Fixed temp;
	temp.setRawBits((fxp_value * other.getRawBits()) >> fr_bits);
	return (temp);
}
Fixed Fixed::operator/(const Fixed& other) const {
	Fixed temp;
	temp.setRawBits((fxp_value << fr_bits) / other.getRawBits());
	return (temp);
}

// Comparison operators
bool Fixed::operator>(const Fixed& other) const {
		return fxp_value > other.fxp_value; }
bool Fixed::operator<(const Fixed& other) const {
		return fxp_value < other.fxp_value; }
bool Fixed::operator>=(const Fixed& other) const {
		return fxp_value >= other.fxp_value; }
bool Fixed::operator<=(const Fixed& other) const {
		return fxp_value <= other.fxp_value; }
bool Fixed::operator==(const Fixed& other) const {
		return fxp_value == other.fxp_value; }
bool Fixed::operator!=(const Fixed& other) const {
		return fxp_value != other.fxp_value; }


// Increment/decrement operators
Fixed& Fixed::operator++() { 
	++fxp_value;
	return (*this);
}
Fixed Fixed::operator++(int) {
	Fixed temp(*this); 
	++(*this);
	return temp; 
}
Fixed& Fixed::operator--() {
	--fxp_value;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return temp; 
}
	
// Static member functions
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return a < b ? a : b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return a < b ? a : b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return a > b ? a : b; 
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return a > b ? a : b;
}

std::ostream &operator<<(std::ostream &op, const Fixed &a) {
	op << a.toFloat();
	return (op);
}