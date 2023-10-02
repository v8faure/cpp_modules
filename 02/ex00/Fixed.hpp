#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int fxp_value;
		static const int fr_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &_fxp_value);
		Fixed & operator= (Fixed const &_fxp_value);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif