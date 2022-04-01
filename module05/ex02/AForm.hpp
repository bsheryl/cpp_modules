#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

private:

    std::string  _name;
    bool _isSigned;
    int  _gradeToSign;
    int  _gradeToExecute;

public:

    AForm();
    AForm(std::string const &name, int const gradeToSign, int const gradeToExecute);
    AForm(AForm const & src);
    virtual ~AForm();

    AForm & operator=(AForm const & src);

    std::string getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat const &bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception {

    public:

    const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {

    public:

        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, AForm const &src);

#endif