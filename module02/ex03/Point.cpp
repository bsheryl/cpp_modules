#include "Point.hpp"

Point::Point() : _x(0), _y(0) {

}

Point::Point(const float x, const float y) : _x(x), _y(y) {

}

Point::Point(Fixed &x, Fixed & y) : _x(x), _y(y) {

}

Point::Point(const Point &src) {
    *this = src;
}

Point::~Point() {

}

const Fixed & Point::getX() const {
    return this->_x;
}

const Fixed & Point::getY() const {
    return this->_y;
}

void Point::setX(const Fixed &x) {
    const_cast<Fixed&>(this->_x) = x;
}

void Point::setY(const Fixed &y) {
    const_cast<Fixed&>(this->_y) = y;
}

Point & Point::operator=(const Point &rhs) {
    if (this != &rhs) {
        const_cast<Fixed&>(this->_x) = rhs.getX();
        const_cast<Fixed&>(this->_y) = rhs.getY();
    }
    return *this;
}

std::ostream & operator<<(std::ostream & out, Point & src) {
    return out << "(" << src.getX() << ", " << src.getY() << ")";
}