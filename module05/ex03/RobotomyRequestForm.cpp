#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
        AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "Constructor: RobotomyRequestForm with target " << this->_target << " created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: RobotomyRequestForm with target " << this->_target << " created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor: RobotomyRequestForm with target " << this->_target << " destroyed" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
    this->_target = src._target;
    std::cout << "Assign constructor: RobotomyRequestForm with target " << this->_target << " created" << std::endl;
    return *this;
}

std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (this->isSigned()) {
        std::cout << "ShrubberyCreationForm with target " << this->_target << " had already signed" << std::endl;
        return;
    }
    if (this->getGradeToExecute() < executor.getGrade()) {
        throw GradeTooLowException();
    }
    std::cout << "Drrrrrr.... Drrrrrrr......" << std::endl;
    std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}