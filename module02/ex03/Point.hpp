#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

public:

    Point();
    Point(const float x, const float y);
    Point(Fixed & x, Fixed & y);
    Point(const Point & src);
    ~Point();

    const Fixed & getX() const;
    const Fixed & getY() const;
    void setX(const Fixed & x);
    void setY(const Fixed & y);

    Point & operator=(const Point & rhs);

private:

    const Fixed _x;
    const Fixed _y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream & operator<<(std::ostream & out, Point & src);

#endif