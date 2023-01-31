#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# define MAX_VAL 750    // subject
# define MAX 500        // mymain

template <typename T>
class Array
{
    private:
        unsigned arrlen;
    public:
        Array();
        Array(Array &instance);
        Array &operator=(const Array &instance);
	    ~Array();
    public:
        Array(unsigned int n);
        T *arr;
        T& operator[](unsigned int idx);
        const T& operator[](unsigned int idx) const;
        unsigned int size(void) const;
        
    class RangeException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};

# include "Array.tpp"

#endif