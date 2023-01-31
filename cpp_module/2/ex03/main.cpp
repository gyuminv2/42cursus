#include "Point.hpp"

void	print(Point a, Point b, Point c, Point point)
{
	if (bsp(a, b, c, point) == true)
		std::cout<<"in"<<std::endl;
	else
		std::cout<<"not in"<<std::endl;
}

int main(void)
{
	Point a(2.0f, 0.0f);
	Point b(0.0f, 2.0f);
	Point c(0.0f, 0.0f);
	Point point1(0.0f, 2.0f);
	Point point2(-0.1f, 1.5f);
	Point point3(0.5f, 0.7f);
	
	print(a, b, c, point1);
	print(a, b, c, point2);
	print(a, b, c, point3);

	return (0);
}