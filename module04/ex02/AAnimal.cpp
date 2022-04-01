#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("<unknown>") {
    std::cout << "Default constructor: Animal with type " << this->_type << " created" << std::endl;
}

AAnimal::AAnimal(std::string & type) : _type(type) {
    std::cout << "Constructor: Animal with type " << this->_type << " created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
    *this = src;
    std::cout << "Copy constructor: Animal with type " << this->_type << " created" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "Destructor: Animal with type " << this->_type << " destroyed" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal &src) {
    this->_type = src.getType();
    std::cout << "Assign constructor: Animal with type " << this->_type << " created" << std::endl;
    return *this;
}

void AAnimal::makeSound() const {
    std::cout << "Nothing know how it say" << std::endl;
}

std::string AAnimal::getType() const {
    return this->_type;
}