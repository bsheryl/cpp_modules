#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Default constructor: " << this->_type << " created" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src._type) {
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor: " << this->_type << " created" << std::endl;
}

Cure::~Cure() {
    std::cout << "Destructor: " << this->_type << " destructor" << std::endl;
}

Cure const & Cure::operator=(const Cure &src) {
    this->_type = src._type;
    std::cout << "Assign constructor: " << this->_type << " created" << std::endl;
    return *this;
}

AMateria * Cure::clone() const {
    std::cout << "Ice clone created" << std::endl;
    return new Cure(*this);
}

void Cure::use(ICharacter & target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" <<  std::endl;
}