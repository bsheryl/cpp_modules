#include "Point.hpp"

bool checkIsTriangle(Fixed x[3], Fixed y[3]) {
    if (x[0] == x[1] && x[0] == x[2])
        return false;
    else if (x[0] == x[1] || x[0] == x[2])
        return true;
    else
        return ((y[2] - y[0]) / (x[2] - x[0])) != ((y[1] - y[0] / (x[1] - x[0])));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed s1, s2, s3;
    Fixed pointX = const_cast<Fixed&>(point.getX()),
            pointY = const_cast<Fixed&>(point.getY());
    Fixed x[3], y[3];

    x[0] = const_cast<Fixed&>(a.getX());
    y[0] = const_cast<Fixed&>(a.getY());
    x[1] = const_cast<Fixed&>(b.getX());
    y[1] = const_cast<Fixed&>(b.getY());
    x[2] = const_cast<Fixed&>(c.getX());
    y[2] = const_cast<Fixed&>(c.getY());

    if (!checkIsTriangle(x, y)) {
        std::cout << "Triangle " << const_cast<Point&>(a) << ", "
            << const_cast<Point&>(b) << ", " << const_cast<Point&>(c)
            << " doesn't exist" << std::endl;
        return false;
    }

    s1 = (pointX - x[0]) * (pointY - y[1]) - (pointX - x[1]) * (pointY - y[0]);
    s2 = (pointX - x[1]) * (pointY - y[2]) - (pointX - x[2]) * (pointY - y[1]);
    s3 = (pointX - x[2]) * (pointY - y[0]) - (pointX - x[0]) * (pointY - y[2]);

    return (s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0);
}