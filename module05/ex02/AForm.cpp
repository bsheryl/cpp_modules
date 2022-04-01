#include "AForm.hpp"

AForm::AForm() : _name("AForm") {
    std::cout << "Default constructor: AForm crated" << std::endl;
}

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute) {
    if (gradeToSign > 150 || gradeToExecute > 150) {
        throw AForm::GradeTooLowException();
    }
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    this->_name = name;
    this->_isSigned = false;
    this->_gradeToSign = gradeToSign;
    this->_gradeToExecute = gradeToExecute;
    std::cout << "Constructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
        << " and gradeToExecute=" << this->_gradeToExecute << " created" << std::endl;
}

AForm::AForm(const AForm &src) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
    << " and gradeToExecute=" << this->_gradeToExecute << " created" << std::endl;
}

AForm::~AForm() {
    std::cout << "Destructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
    << " and gradeToExecute=" << this->_gradeToExecute << " destroyed" << std::endl;
}

AForm & AForm::operator=(const AForm &src) {
    this->_name = src.getName();
    this->_isSigned = src.isSigned();
    this->_gradeToSign = src.getGradeToSign();
    this->_gradeToExecute = src.getGradeToExecute();
    std::cout << "Assign constructor: Form " << this->_name << " with gradeToSign=" << this->_gradeToSign
    << " and gradeToExecute=" << this->_gradeToExecute << " created" << std::endl;
    return *this;
}

std::string AForm::getName() const {
    return this->_name;
}

bool AForm::isSigned() const {
    return this->_isSigned;
}

int AForm::getGradeToSign() const {
    return this->_gradeToSign;
}

int AForm::getGradeToExecute() const {
    return this->_gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (this->_gradeToSign <= bureaucrat.getGrade())
        throw AForm::GradeTooLowException();
    if (this->_isSigned)
        std::cout << this->_name << " had already signed" << std::endl;
    this->_isSigned = true;
}

const char * AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char * AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, AForm const &src) {
    if (src.isSigned()) {
        os << "Form " << src.getName() << " with gradeToSign " << src.getGradeToSign()
        << " and gradeToExecute " << src.getGradeToExecute() << " is signed";
    } else {
        os << "Form " << src.getName() << " with gradeToSign " << src.getGradeToSign()
        << " and gradeToExecute " << src.getGradeToExecute() << " isn't signed";
    }
    return os;
}