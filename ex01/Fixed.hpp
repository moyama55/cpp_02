#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		static const int	bit = 8;
		int					fix_num;
	public:
		Fixed();
		Fixed(const int parms);
		Fixed(const float parms);
		Fixed(const Fixed& fix);
		~Fixed();
		Fixed& operator=(const Fixed &fix);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif