#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <algorithm>
# include <stack> // 컨테이너 어뎁터

#include <list>

// http://www.tcpschool.com/cpp/cpp_container_adapter
// https://gcc.gnu.org/onlinedocs/gcc-4.6.3/libstdc++/api/a01049_source.html page(753)
// https://gcc.gnu.org/onlinedocs/gcc-4.6.3/libstdc++/api/a01065_source.html

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack()
        {};
        MutantStack(const MutantStack &instance)
        {
            *this = instance;
        };
        MutantStack& operator=(const MutantStack &instance)
        {
            if (this == &instance)
                return *this;
            else
            {
                std::stack<T>::operator=(instance);
                return *this;
            }
        }
        ~MutantStack()
        {};
        
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin()
    {
        return this->c.begin();
    }
    const_iterator begin() const
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    const_iterator end() const
    {
        return this->c.end();
    }
    reverse_iterator rbegin()
    {
        return this->c.rbegin();
    }
    const_reverse_iterator rbegin() const
    {
        return this->c.rbegin();
    }
    reverse_iterator rend()
    {
        return this->c.rend();
    }
    const_reverse_iterator rend() const
    {
        return this->c.rend();
    }
};

#endif