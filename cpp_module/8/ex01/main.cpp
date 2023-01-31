#include "Span.h"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // 꽉 찼을 때
        // sp.addNumber(100);
        // 없는 숫자일 때
        // Span test2 = Span(5);
        // std::cout << test2.shortestSpan() << std::endl;
        // std::cout << test2.longestSpan() << std::endl;
        // 숫자가 한개일 때
        // Span test3 = Span(5);
        // test3.addNumber(0);
        // // test3.addNumber(1); // 추가하면 됌
        // std::cout << test3.shortestSpan() << std::endl;
        // std::cout << test3.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr<<e.what()<<std::endl;
    }
    return 0;
}