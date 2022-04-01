#include "Bureaucrat.hpp"

int main()
{
    try {
        std::cout << "\n===========Low grade==========" << std::endl;
        Bureaucrat clerk("Clerk", 151);
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========Low grade==========" << std::endl;
        Bureaucrat clerk("Clerk", 150);
        clerk.decrement();
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========High grade==========" << std::endl;
        Bureaucrat clerk("Clerk", 0);
        clerk.increment();
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========High grade==========" << std::endl;
        Bureaucrat clerk("Clerk", 1);
        clerk.increment();
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========Normal work==========" << std::endl;
        Bureaucrat clerk("Clerk", 50);
        clerk.increment();
        std::cout << clerk << std::endl;
        clerk.decrement();
        std::cout << clerk << std::endl;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    return 0;
}