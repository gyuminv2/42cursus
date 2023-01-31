#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

/*
std::find()
Return value
Iterator to the first element satisfying the condition or last if no such element is found.
*/

template <typename T>
typename T::iterator easyfind(T& container, int integer)
{
	typename T::iterator iter = std::find(container.begin(),container.end(), integer);
	return iter;
}

#endif