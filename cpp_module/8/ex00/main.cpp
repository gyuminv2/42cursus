#include "easyfind.h"

template <typename T>
void print(T& container,typename T::iterator iter)
{
	if (iter == container.end())
		std::cerr << "error: Not Found in container" << std::endl;
	else
		std::cout << *iter << std::endl;
}

int main(void)
{
	std::vector<int> v;
	std::list<int> l;

	for (int i=0 ; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(i);
	}

	// vector
	print(v, easyfind(v, 3));
    print(v, easyfind(v, 10));

	// list
	print(l, easyfind(l, 3));
	print(l, easyfind(l, 10));

	return (0);
}