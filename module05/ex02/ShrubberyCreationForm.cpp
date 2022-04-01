#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
    AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "Constructor: ShrubberyCreationForm with target " << this->_target << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: ShrubberyCreationForm with target " << this->_target << " created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor: ShrubberyCreationForm with target " << this->_target << " destroyed" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    this->_target = src._target;
    std::cout << "Assign constructor: ShrubberyCreationForm with target " << this->_target << " created" << std::endl;
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (this->isSigned()) {
        std::cout << "ShrubberyCreationForm with target " << this->_target << " had already signed" << std::endl;
        return;
    }
    if (this->getGradeToExecute() < executor.getGrade()) {
        throw GradeTooLowException();
    }
    std::fstream file;
    file.open(this->_target + "_shrubbery", std::fstream::out | std::fstream::trunc);
    if (file.is_open()) {
        file << "                 # #### ####			" << std::endl;
        file << "               ### \\/#|### |/####		" << std::endl;
        file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        file << "          __#_--###`  |{,###---###-~	" << std::endl;
        file << "                    \\ }{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     {{}				" << std::endl;
        file << "               , -=-~{ .-^- _			" << std::endl;
        file << "                     `}				" << std::endl;
        file << "                      {				" << std::endl;
        file.close();
        std::cout << "Tree created in file " << (this->_target + "_shrubbery") << std::endl;
    } else {
        std::cout << "Error: file " << (this->_target + "_shrubbery") << " hadn't opened" << std::endl;
    }
}