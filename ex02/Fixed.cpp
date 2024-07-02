#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fix_num = 0;
}

Fixed::Fixed(const int parms)
{
	this->fix_num = parms << this->bit;
}

Fixed::Fixed(const float parms)
{
	this->fix_num = roundf(parms * (1 << this->bit));
}

Fixed::Fixed(const Fixed& fix)
{
	*this = fix;
}

Fixed& Fixed::operator=(const Fixed& fix)
{
	this->fix_num = fix.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &fix)
{
	return (this->toFloat() > fix.toFloat());
}

bool Fixed::operator<(const Fixed &fix)
{
	return (this->toFloat() < fix.toFloat());
}

bool Fixed::operator>=(const Fixed &fix)
{
	return (this->toFloat() >= fix.toFloat());
}

bool Fixed::operator<=(const Fixed &fix)
{
	return (this->toFloat() <= fix.toFloat());
}

bool Fixed::operator==(const Fixed &fix)
{
	return (this->toFloat() == fix.toFloat());
}

bool Fixed::operator!=(const Fixed &fix)
{
	return (this->toFloat() != fix.toFloat());
}

Fixed Fixed::operator+(const Fixed &fix)
{
	return Fixed(this->toFloat() + fix.toFloat());
}

Fixed Fixed::operator-(const Fixed &fix)
{
	return Fixed(this->toFloat() - fix.toFloat());
}

Fixed Fixed::operator/(const Fixed &fix)
{
	return Fixed(this->toFloat() / fix.toFloat());
}

Fixed Fixed::operator*(const Fixed &fix)
{
	return Fixed(this->toFloat() * fix.toFloat());
}

Fixed& Fixed::operator++()
{
	this->fix_num++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	this->operator++();
	return (old);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > b)
		return (a);
	else
		return (b);
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

}