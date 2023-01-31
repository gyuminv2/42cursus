#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int byte = 8;
	public:
		Fixed();
		Fixed(const Fixed& instance);
        Fixed& operator=(const Fixed &instance);
		~Fixed();
	public:
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed(int number);
		Fixed(float number);
		float toFloat( void ) const;
		int toInt( void ) const;
		/*
		 * 비교 연산자 (>, <, >=, <=, == , !=)
		 */
		bool operator>(const Fixed &instance) const;
		bool operator<(const Fixed &instance) const ;
		bool operator>=(const Fixed &instance) const;
		bool operator<=(const Fixed &instance) const;
		bool operator==(const Fixed &instance) const;
		bool operator!=(const Fixed &instance) const;
		/*
		 * 산술 연산자 (+, -, *, /)
		 */
		Fixed operator+(const Fixed &instance);
		Fixed operator-(const Fixed &instance);
		Fixed operator*(const Fixed &instance);
		Fixed operator/(const Fixed &instance);
		/*
		 * 증감 연산자 (++a, a++, --a, a--)
		 * https://en.cppreference.com/w/cpp/language/operator_incdec
		 */
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
        /*
		 * 멤버 함수
		 */
        static Fixed& min(Fixed &t1, Fixed &t2);
        static const Fixed& min(const Fixed &t1, const Fixed &t2);
        static Fixed& max(Fixed &t1, Fixed &t2);
        static const Fixed& max(const Fixed &t1, const Fixed &t2);
};

std::ostream& operator<<(std::ostream &os, const Fixed& p);

#endif
