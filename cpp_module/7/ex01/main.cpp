#include "iter.h"

const char* RangeException::what() const throw()
{
    return ("Error: length of the array must be PLUS!!!!");
}

int main(void)
{
	char array1[]={'a','b','c','d','e'};
	int array2[]={0,1,2,3,4};
	float array3[]={0.1,1.1,2.1,3.1,4.1};
	double array4[]={0.1,1.1,2.1,3.1,4.1};

	try
	{
		std::cout << "###CHAR###CHAR###CHAR###CHAR###CHAR###CHAR###" << std::endl;
		::iter(array1, 5, ::print);
		std::cout << "###INT###INT###INT###INT###INT###INT###" << std::endl;
		::iter(array2, 5, ::print);
		std::cout << "###FLOAT###FLOAT###FLOAT###FLOAT###FLOAT###FLOAT###" << std::endl;
		::iter(array3, 5, ::print);
		std::cout << "###DOUBLE###DOUBLE###DOUBLE###DOUBLE###DOUBLE###DOUBLE###" << std::endl;
		::iter(array4, 5, ::print);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}