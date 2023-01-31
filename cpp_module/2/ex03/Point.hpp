#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const Point& instance);
        Point& operator=(const Point &instance);
        ~Point();
    public:
        Point(const float x, const float y);
        Fixed getX() const;
        Fixed getY() const;
};

/*
    1. a, b, c: 우리가 사랑하는 삼각형의 꼭짓점.
    2. point: 체크 포인트.
    3. Returns: 점이 삼각형 안에 있으면 참입니다. 그렇지 않으면 거짓이다.
    따라서 점이 꼭짓점 또는 모서리일 경우 False를 반환합니다.
 */
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif