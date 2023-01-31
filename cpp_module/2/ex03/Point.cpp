#include "Point.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(const Point& instance) : x(instance.x), y(instance.y)
{}

Point& Point::operator=(const Point &instance)
{
    if (this == &instance)
		return (*this);
	else
	{
        (void) instance;
		return (*this);
	}
}

Point::~Point()
{}

Point::Point(const float x, const float y) : x(x), y(y)
{}

Fixed Point::getX() const
{
    return (this->x);
}

Fixed Point::getY() const
{
    return (this->y);
}