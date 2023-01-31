#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int fixed_point;    // 고정 소수점
        static const int bit = 8;   // 소수 비트
    public:
        Fixed();    // 생성자
        Fixed(const Fixed& instance);   // 복사 생성자
        Fixed& operator=(const Fixed &instance);   // 복사 대입 연산자 오버로드
        ~Fixed();   // 소멸자
    public:
        int getRawBits( void ) const;   // 고정 소수점의 raw 값을 반환
        void setRawBits( int const raw );   // 고정 소수점의 raw 값을 설정
};

#endif