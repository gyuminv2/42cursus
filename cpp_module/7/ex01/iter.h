#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <cstring>

class RangeException: public std::exception
{
    public:
        const char *what() const throw();
};

template <typename T>
void iter(T *loc, int len, void (*f_ptr)(T))
{
    if (len < 0)
        throw RangeException();

    for (int i = 0; i < len; i++)
        f_ptr(loc[i]);
}

template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

#endif