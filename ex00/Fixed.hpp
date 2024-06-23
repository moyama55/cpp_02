#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fp_num;
		const static int byte = 8;
	public:
		Fixed();
		Fixed(const Fixed& fix);
		~Fixed();
};

#endif