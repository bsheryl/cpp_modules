#include "Animal.hpp"

Animal::Animal() : _type("<unknown>") {
    std::cout << "Default constructor: Animal with type " << this->_type << " created" << std::endl;
}

Animal::Animal(std::string & type) : _type(type) {
    std::cout << "Constructor: Animal with type " << this->_type << " created" << std::endl;
}

Animal::Animal(const Animal &src) {
    *this = src;
    std::cout << "Copy constructor: Animal with type " << this->_type << " created" << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor: Animal with type " << this->_type << " destroyed" << std::endl;
}

Animal & Animal::operator=(const Animal &src) {
    this->_type = src.getType();
    std::cout << "Assign constructor: Animal with type " << this->_type << " created" << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Nothing know how it say" << std::endl;
}

std::string Animal::getType() const {
    return this->_type;
}