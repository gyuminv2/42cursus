#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
    private:
	    std::vector<int> v;
        unsigned int size;
    public:
        Span();
        Span(const Span &instance);
        Span& operator=(const Span &instance);
        virtual ~Span();
    public:
        Span(unsigned int n);
        // number가 이미 저장된 번호인 경우 예외를 통한 에러를 띄워야한다.
        void addNumber(unsigned int n);
        // 저장된 숫자가 없거나 하나만 있으면 예외가 발생한다
        unsigned int shortestSpan(); // 두 수의 범위가 짧은 수의 범위를 리턴
        unsigned int longestSpan();	// 두 수의 범위가 긴 수의 범위를 리턴

    class SizeOver : public std::exception
    {
        public:
            const char *what(void) const throw();
    };

    class NoRange : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
};

#endif