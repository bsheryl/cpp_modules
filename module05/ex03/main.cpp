#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        std::cout << "\n===========RobotomyRequestForm==========" << std::endl;
        Intern someRandomIntern;
        AForm *rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        delete rrf;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========RobotomyRequestForm==========" << std::endl;
        Intern someRandomIntern;
        AForm *rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Home");

        delete rrf;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========UnknownForm==========" << std::endl;
        Intern someRandomIntern;
        AForm *rrf;

        rrf = someRandomIntern.makeForm("something new", "Home");

        delete rrf;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    return 0;
}