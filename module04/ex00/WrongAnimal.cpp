#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("<unknown>") {
    std::cout << "Default constructor: WrongAnimal with type " << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string & type) : _type(type) {
    std::cout << "Constructor: WrongAnimal with type " << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    *this = src;
    std::cout << "Copy constructor: WrongAnimal with type " << this->_type << " created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor: WrongAnimal with type " << this->_type << " destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src) {
    this->_type = src.getType();
    std::cout << "Assign constructor: WrongAnimal with type " << this->_type << " created" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "Nothing know how it say" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}