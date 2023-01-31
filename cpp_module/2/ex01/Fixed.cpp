#include "Fixed.hpp"

Fixed::Fixed(): fixed_point(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& instance)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = instance;
}

Fixed& Fixed::operator=(const Fixed &instance)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this == &instance)
		return (*this);
	else
	{
		this->fixed_point = instance.getRawBits();
		return (*this);
	}
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

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
    std::cout<<"Int constructor called"<<std::endl;
    this->fixed_point = number << bit; // * 256
}

Fixed::Fixed(float number)
{
    std::cout<<"Float constructor called"<<std::endl;
    this->fixed_point = roundf(number * (1 << bit)); // (float * int) // 256를 float로 변환
}

float Fixed::toFloat( void ) const
{
    return ((float)fixed_point / (1 << bit));
}

int Fixed::toInt( void ) const
{
    return (fixed_point >> bit);
}

std::ostream& operator<<(std::ostream &os, const Fixed& p)
{
    os << p.toFloat();
    return (os);
}