#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fp_num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp_num = fix.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_num);
}

void Fixed::setRawBits(int const raw)
{
	this->fp_num = raw;
}