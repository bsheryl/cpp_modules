#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->_type = "Cat";
    std::cout << "Default constructor: " << this->_type << " created" << std::endl;
}

Cat::Cat(const Cat &src) {
    *this = src;
    std::cout << "Copy constructor: " << this->_type << " created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor: " << this->_type << " destroyed" << std::endl;
}

Cat & Cat::operator=(const Cat &src) {
    this->_type = src.getType();
    std::cout << "Assign constructor: " << this->_type << " created" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " say: \"meow\"" << std::endl;
}