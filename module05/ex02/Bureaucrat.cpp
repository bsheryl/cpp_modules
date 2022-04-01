#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("<unknown>"), _grade(150) {
    std::cout << "Default constructor: Bureaucrat without name created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
    std::cout << "Constructor: Bureaucrat " << this->_name << " with grade " << this->_grade << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: Bureaucrat " << this->_name << " with grade " << this->_grade << " created" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor: Bureaucrat " << this->_name << " destroyed" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src) {
    this->_name = src._name;
    this->_grade = src._grade;
    std::cout << "Assign constructor: Bereaucrat " << this->_name << " with grade " << this->_grade << " created" << std::endl;
    return *this;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::increment() {
    if (this->_grade > 1) {
        this->_grade--;
        std::cout << this->_name << " increment grade" << std::endl;
    } else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement() {
    if (this->_grade < 150) {
        this->_grade++;
        std::cout << this->_name << " decrement grade" << std::endl;
    } else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form) {
    if (form.isSigned())
        std::cout << "Form " << form.getName() << " had already signed" << std::endl;
    else {
        try {
            form.beSigned(*this);
            std::cout << this->_name << " signed " << form.getName() << std::endl;
        } catch (std::exception &exception) {
            std::cout << this->_name << " couldn't sign " << form.getName()
                << " because " << exception.what() << std::endl;
        }
    }
}

void Bureaucrat::executeForm(AForm const &form) const {
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    } catch (std::exception &exception) {
        std::cout << *this << " can't execute, because " << form << std::endl;
    }
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const & src) {
    os << src.getName() << ", bureaucrat grade " << src.getGrade();
    return os;
}