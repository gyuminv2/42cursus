#include "Point.hpp"
#include "Fixed.hpp"

Fixed ft_abs(Fixed rtn)
{
	if (rtn < 0)
		return (rtn * -1);
	else
		return (rtn);
}

Fixed area(Point const a, Point const b, Point const c)
{
    // 신발끈 공식 https://m.blog.naver.com/10baba/220723256611
    Fixed rtn = a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY() - a.getX() * c.getY() - b.getX() * a.getY() + c.getX() * b.getY();
    return (ft_abs(rtn));
    
}

bool check(Point const a, Point const b, Point const c)
{
    Fixed m1, m2, m3;

    m1 = (b.getY() - a.getY()) / (b.getX() - a.getX());
    m2 = (c.getY() - b.getY()) / (c.getX() - b.getX());
    m3 = (c.getY() - a.getY()) / (c.getX() - a.getX());

    if (m1 == m2 && m2 == m3 && m1 == m3)
        return (false);
    return (true);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (check(a, b, c) == false)
		return (false);

    Fixed origin = area(a, b, c);
    Fixed s1 = area(point, a, b);
    Fixed s2 = area(point, a, c);
    Fixed s3 = area(point, b, c);

	if (s1 + s2 + s3 == origin)
		return (true);
	return (false);
}