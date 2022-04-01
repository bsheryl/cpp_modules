#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Default constructor: " << this->_type << " created" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src._type)  {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: " << this->_type << " created" << std::endl;
}

Ice::~Ice() {
    std::cout << "Destructor: " << this->_type << " destructor" << std::endl;
}

Ice const & Ice::operator=(const Ice &src) {
    this->_type = src._type;
    std::cout << "Assign constructor: " << this->_type << " created" << std::endl;
    return *this;
}

AMateria * Ice::clone() const {
    std::cout << "Ice clone created" << std::endl;
    return new Ice(*this);
}

void Ice::use(ICharacter & target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}