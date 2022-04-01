#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

private:

    std::string _target;

public:

    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    ~RobotomyRequestForm();

    RobotomyRequestForm & operator=(RobotomyRequestForm const & src);

    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};

#endif