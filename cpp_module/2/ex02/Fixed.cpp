#include "Fixed.hpp"

Fixed::Fixed(): fixed_point(0)
{}

Fixed::Fixed(const Fixed& instance)
{
	*this = instance;
}

Fixed& Fixed::operator=(const Fixed &instance)
{
	if (this == &instance)
		return (*this);
	else
	{
		this->fixed_point = instance.getRawBits();
		return (*this);
	}
}

Fixed::~Fixed()
{}

int Fixed::getRawBits( void ) const
{
	return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

Fixed::Fixed(int number)
{
	this->fixed_point = number << byte; // * 256
}

Fixed::Fixed(float number)
{
	this->fixed_point = roundf(number * (1 << byte)); // (float * int) // 256를 float로 변환
}

float Fixed::toFloat( void ) const
{
	return ((float)fixed_point / (1 << byte));
}

int Fixed::toInt( void ) const
{
	return (fixed_point >> byte);
}

bool Fixed::operator>(const Fixed &instance) const
{
	return ((fixed_point > instance.getRawBits()) ? true : false);
}

bool Fixed::operator<(const Fixed &instance) const
{
	return ((fixed_point < instance.getRawBits()) ? true : false);
}

bool Fixed::operator>=(const Fixed &instance) const
{
	return ((fixed_point >= instance.getRawBits()) ? true : false);
}

bool Fixed::operator<=(const Fixed &instance) const 
{
	return ((fixed_point <= instance.getRawBits()) ? true : false);
}

bool Fixed::operator==(const Fixed &instance) const
{
	return ((fixed_point == instance.getRawBits()) ? true : false);
}

bool Fixed::operator!=(const Fixed &instance) const
{
	return ((fixed_point != instance.getRawBits()) ? true : false);
}

Fixed Fixed::operator+(const Fixed &instance)
{
	Fixed rtn = (this->toFloat() + instance.toFloat());
	return (rtn);
}

Fixed Fixed::operator-(const Fixed &instance)
{
	Fixed rtn(this->toFloat() - instance.toFloat());
	return (rtn);
}

Fixed Fixed::operator*(const Fixed &instance)
{
	Fixed rtn(this->toFloat() * instance.toFloat());
	return (rtn);
}

Fixed Fixed::operator/(const Fixed &instance)
{
	Fixed rtn(this->toFloat() / instance.toFloat());
	return (rtn);
}

Fixed& Fixed::operator++()
{
	++fixed_point;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	fixed_point++;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	--fixed_point;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	fixed_point--;
	return (tmp);
}

Fixed& Fixed::min(Fixed &t1, Fixed &t2)
{
	return ((t1 <= t2) ? t1 : t2);
}
const Fixed& Fixed::min(const Fixed &t1, const Fixed &t2)
{
	return ((t1 <= t2) ? t1 : t2);
}

Fixed& Fixed::max(Fixed &t1, Fixed &t2)
{
	return ((t1 >= t2) ? t1 : t2);
}
const Fixed& Fixed::max(const Fixed &t1, const Fixed &t2)
{
	return ((t1 >= t2) ? t1 : t2);
}

std::ostream& operator << (std::ostream &s, const Fixed& p)
{
	s << p.toFloat();
	return (s);
}
