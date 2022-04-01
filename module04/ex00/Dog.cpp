#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->_type = "Dog";
    std::cout << "Default constructor: " << this->_type << " created" << std::endl;
}

Dog::Dog(const Dog &src) {
    *this = src;
    std::cout << "Copy constructor: " << this->_type << " created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor: " << this->_type << " destroyed" << std::endl;
}

Dog & Dog::operator=(const Dog &src) {
    this->_type = src.getType();
    std::cout << "Assign constructor: " << this->_type << " created" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type << " say: \"woof\"" << std::endl;
}