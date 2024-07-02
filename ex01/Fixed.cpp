#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fix_num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int parms)
{
	std::cout << "Int constructor called" << std::endl;
	this->fix_num = parms << this->bit;
}

Fixed::Fixed(const float parms)
{
	std::cout << "Float constructor called" << std::endl;
	this->fix_num = roundf(parms * (1 << this->bit));
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed& Fixed::operator=(const Fixed& fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fix_num = fix.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

float Fixed::toFloat(void) const
{
	return ((float)this->fix_num / (float)(1 << this->bit));
}

int Fixed::toInt(void) const
{
	return (this->fix_num >> 8);
}

int Fixed::getRawBits(void) const
{
	return (this->fix_num);
}

void Fixed::setRawBits(int const raw)
{
	this->fix_num = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}