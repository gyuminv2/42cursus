#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <cstring>
# include <cmath>
# include <cfloat>
# include <limits>

// https://en.cppreference.com/w/c/string/byte/strtof

/*
PRINT
a
1.1
0
42.0f

NOT PRINT
1.a
.1
1..1
"1  1"
1.

static_cast<type>(value);
컴파일 타임에 형변환을 진행하는 정적 캐스팅
명시적으로 형변환을 할 수 있는 방법 중 하나
가장 기본적인 형태의 타입 캐스팅

*/

class ScalarConversion
{
    private:
        char *av;
        char *av_end;
        double d;
    public:
        ScalarConversion();
        ScalarConversion(const ScalarConversion &instance);
        ScalarConversion& operator=(const ScalarConversion &instance);
        ~ ScalarConversion();
    public:
        ScalarConversion(char *av);
        void toChar();
        void toInt();
        void toFloat();
        void toDouble();
        int helpConvert(char *av);

    class InvalidArgvException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};

// 1 / 0  = inf
// -1 / 0 = -inf

// f: -inff, +inff, nanf
// d: -inf, +inf, nan

#endif