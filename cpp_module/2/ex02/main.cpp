#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b ( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// if (b == (float)10.1016)
	// {
	// 	std::cout<<"true"<<std::endl;
	// }
	// else
	// 	std::cout<<"false"<<std::endl;

	return 0;
}