#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
        AForm("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << "Constructor: PresidentialPardonForm with target " << this->_target << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: PresidentialPardonForm with target " << this->_target << " created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor: PresidentialPardonForm with target " << this->_target << " destroyed" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    this->_target = src._target;
    std::cout << "Assign constructor: PresidentialPardonForm with target " << this->_target << " created" << std::endl;
    return *this;
}

std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (this->isSigned()) {
        std::cout << "ShrubberyCreationForm with target " << this->_target << " had already signed" << std::endl;
        return;
    }
    if (this->getGradeToExecute() < executor.getGrade()) {
        throw GradeTooLowException();
    }
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebox" << std::endl;
}