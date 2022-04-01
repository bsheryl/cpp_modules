#include "AMateria.hpp"

AMateria::AMateria() : _type("<unknown>") {
    std::cout << "Default constructor: AMateria with type " << this->_type << " created" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type) {
    std::cout << "Constructor: AMateria with type " << this->_type << " created" << std::endl;
}

AMateria::AMateria(const AMateria &src) {
    *this = src;
    std::cout << "Copy constructor: AMateria with type " << this->_type << " created" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "Destructor: AMateria with type " << this->_type << " destructor" << std::endl;
}

AMateria const & AMateria::operator=(const AMateria &src) {
    this->_type = src._type;
    std::cout << "Assign constructor: AMateria with type " << this->_type << " created" << std::endl;
    return *this;
}

std::string const & AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter & target) {
    std::cout << "Throw " << this->_type << " to " << target.getName() << std::endl;
}