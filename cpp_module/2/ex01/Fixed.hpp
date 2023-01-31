#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int bit = 8;
    public:
        Fixed();
        Fixed(const Fixed& instance);
        Fixed& operator=(const Fixed &instance);
        ~Fixed();
    public:
        int getRawBits( void ) const;   // ex00
        void setRawBits( int const raw );   // ex00
    public:
        Fixed(int number);
        Fixed(float number);
        float toFloat( void ) const;    // 고정 소수점을 부동 소수점으로
        int toInt( void ) const;    // 고정 소수점을 정수로
};

std::ostream& operator<<(std::ostream &os, const Fixed& p);

#endif