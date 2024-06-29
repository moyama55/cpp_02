#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
		static const int	byte = 8;
		int					fix_num;
	public:
		Fixed();
		Fixed(const int parms);
		Fixed(const float parms);
		~Fixed();
		Fixed& operator<<(const Fixed &fix);
		const float toFloat(void);
		const int toInt(void);
};

#endif