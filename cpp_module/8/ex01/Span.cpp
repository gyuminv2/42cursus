#include "Span.h"

Span::Span(): size(0)
{}

Span::Span(const Span &instance)
{
    *this = instance;
}

Span& Span::operator=(const Span &instance)
{
    if (this == &instance)
    {
        return (*this);
    }
    else
    {
        this->v = instance.v;
        this->size = instance.size;
        return (*this);
    }
}

Span::~Span()
{}

void Span::addNumber(unsigned int n)
{
    if (this->v.size() == this->size)
        throw SizeOver();
    this->v.push_back(n);
}

unsigned int Span::shortestSpan()
{
    if (this->v.size() == 0 || this->v.size() == 1)
        throw NoRange();
    std::vector<int> tmp;
    tmp.assign(v.begin(), v.end());
    std::sort(tmp.begin(), tmp.end());
    unsigned int size = tmp.size();
    unsigned int space;
    unsigned int min = *min_element(tmp.begin(), tmp.end());;
    for (unsigned int i = 0; i < size; i++)
    {
        if (i == size - 1)
            break;
        unsigned int o_min = *min_element(tmp.begin(), tmp.end());
        tmp.erase(tmp.begin() + 0);
        unsigned int n_min = *min_element(tmp.begin(), tmp.end());
        space = n_min - o_min;
        if (min > space)
            min = space;
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (this->v.size() == 0 || this->v.size() == 1)
        throw NoRange();
    std::vector<int> tmp;
    tmp.assign(v.begin(), v.end());
    unsigned int max = *max_element(tmp.begin(), tmp.end());
    unsigned int min = *min_element(tmp.begin(), tmp.end());
    return (max - min);
}

Span::Span(unsigned int n): size(n)
{}

const char* Span::SizeOver::what() const throw()
{
    return ("Span is full");
}

const char* Span::NoRange::what() const throw()
{
    return ("Span has no number or only one");
}