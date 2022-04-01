#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

    std::string  _name;
    bool _isSigned;
    int  _gradeToSign;
    int  _gradeToExecute;

public:

    Form(std::string const &name, int const gradeToSign, int const gradeToExecute);
    Form(Form const & src);
    ~Form();

    Form & operator=(Form const & src);

    std::string getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat const &bureaucrat);

    class GradeTooHighException : public std::exception {

    public:

    const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {

    public:

        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Form const &src);

#endif