#include "Form.hpp"

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute) {
    if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    this->_name = name;
    this->_isSigned = false;
    this->_gradeToSign = gradeToSign;
    this->_gradeToExecute = gradeToExecute;
    std::cout << "Constructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
        << " and gradeToExecute=" << this->_gradeToExecute << " created" << std::endl;
}

Form::Form(const Form &src) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
    << " and gradeToExecute=" << this->_gradeToExecute << " created" << std::endl;
}

Form::~Form() {
    std::cout << "Destructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
    << " and gradeToExecute=" << this->_gradeToExecute << " destroyed" << std::endl;
}

Form & Form::operator=(const Form &src) {
    this->_name = src.getName();
    this->_isSigned = src.isSigned();
    this->_gradeToSign = src.getGradeToSign();
    this->_gradeToExecute = src.getGradeToExecute();
    std::cout << "Assign constructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
    << " and gradeToExecute=" << this->_gradeToExecute << " created" << std::endl;
    return *this;
}

std::string Form::getName() const {
    return this->_name;
}

bool Form::isSigned() const {
    return this->_isSigned;
}

int Form::getGradeToSign() const {
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
    return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (this->_gradeToSign <= bureaucrat.getGrade())
        throw Form::GradeTooLowException();
    if (this->_isSigned)
        std::cout << this->_name << " had already signed" << std::endl;
    this->_isSigned = true;
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, Form const &src) {
    if (src.isSigned()) {
        os << "Form " << src.getName() << " with gradeToSign " << src.getGradeToSign()
        << " and gradeToExecute " << src.getGradeToExecute() << " is signed";
    } else {
        os << "Form " << src.getName() << " with gradeToSign " << src.getGradeToSign()
        << " and gradeToExecute " << src.getGradeToExecute() << " isn't signed";
    }
    return os;
}