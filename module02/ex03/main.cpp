#include "Point.hpp"

int main(void) {
    {
        Point point(1, 4);
        Point a(1, 10);
        Point b(9, 3);
        Point c(1, 1);

        if (bsp(a, b, c, point)) {
            std::cout << point << " is in the triangle";
        } else {
            std::cout << point << " is not in the triangle ";
        }
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
    {
        Point point(1.5, 4.1);
        Point a(1.1, 10.65);
        Point b(9.7, 3.2);
        Point c(-10, -1.5);

        if (bsp(a, b, c, point)) {
            std::cout << point << " is in the triangle ";
        } else {
            std::cout << point << " is not in the triangle ";
        }
        std::cout << a << ", " << b << ", " << c << std::endl;
    }


    return 0;
}