#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	private:
		int fxp_value;					// Fixed-point value
		static const int fr_bits = 8;	// Number of fractional bits
	public:
		Fixed();
		Fixed(const Fixed &_fxp_value);
		Fixed(const int number);
		Fixed(const float fnumber);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		// Arithmetic operators
		Fixed & operator= (Fixed const &_fxp_value);
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		// Comparison operators
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		// Increment/decrement operators
		Fixed& operator++(void);		// pre-increment
		Fixed operator++(int);	// post-increment
		Fixed& operator--(void);		// pre-decrement
		Fixed operator--(int);	// post-decrement

			// Static member functions
		static Fixed& min(Fixed& a, Fixed& b);
		const static Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max( Fixed& a, Fixed& b);
		const static Fixed& max(const Fixed& a, const Fixed& b);
};
		// Stream insertion operator
		std::ostream &operator<<(std::ostream &op, const Fixed &a);
#endif