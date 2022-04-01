#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Constructor: Intern created" << std::endl;
}

Intern::Intern(const Intern &src) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: Intern created" << std::endl;
}

Intern::~Intern() {
    std::cout << "Destructor: Intern destroyed" << std::endl;
}

Intern & Intern::operator=(const Intern &src) {
    if (this != &src)
        *this = src;
    std::cout << "Assign constructor: Intern created" << std::endl;
    return *this;
}

AForm* Intern::makeForm(const std::string &form, const std::string &target) {
    int index = -1;
    std::string array[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < (int)array->length(); i++) {
        if (array[i] == form) {
            index = i;
            break;
        }
    }
    switch (index) {
        case 0:
            std::cout << "Intern creates " << array[index] << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << array[index] << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << array[index] << std::endl;
            return new PresidentialPardonForm(target);
        default:
            throw Intern::FormNotFoundException();
    }
}

const char * Intern::FormNotFoundException::what() const throw() {
    return "Form not found";
}