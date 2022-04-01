#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:

    Intern();
    Intern(Intern const &src);
    ~Intern();

    Intern & operator=(Intern const &src);

    AForm* makeForm(std::string const &form, std::string const &target);

    class FormNotFoundException : public std::exception {

    public:

        const char * what() const throw();
    };
};

#endif