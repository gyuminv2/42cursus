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
    std::cout<<"getRawBits member function called"<<std::endl;
    return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}