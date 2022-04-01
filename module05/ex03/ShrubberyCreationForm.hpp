#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

private:

    std::string _target;

public:

    ShrubberyCreationForm(std::string const & target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);

    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};

#endif