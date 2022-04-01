#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        std::cout << "\n===========ShrubberyCreationForm==========" << std::endl;
        AForm* form = new ShrubberyCreationForm("home");
        const Bureaucrat* clerk = new Bureaucrat("Clerk", 100);
        form->execute(*clerk);
        delete form;
        delete clerk;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }


    try {
        std::cout << "\n===========RobotomyRequestForm==========" << std::endl;
        AForm* form = new RobotomyRequestForm("home");
        const Bureaucrat* clerk = new Bureaucrat("Clerk", 40);
        form->execute(*clerk);
        delete form;
        delete clerk;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========PresidentialPardonForm==========" << std::endl;
        AForm* form = new PresidentialPardonForm("home");
        Bureaucrat* clerk = new Bureaucrat("Clerk", 7);
        clerk->executeForm(*form);
        delete form;
        delete clerk;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    return 0;
}