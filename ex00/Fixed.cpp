#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fp_num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	this->fp_num = fix.fp_num;
	std::cout << "Copy constructor called" << std::endl;
}