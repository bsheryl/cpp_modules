#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:

    std::string _name;
    int _grade;

public:

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat();

    Bureaucrat & operator=(Bureaucrat const & src);

    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    void signForm(Form & form);

class GradeTooHighException : public std::exception {

public:

    const char *what() const throw();
};

class GradeTooLowException : public std::exception {

public:

    const char *what() const throw();
};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const & src);

#endif