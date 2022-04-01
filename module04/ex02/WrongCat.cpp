#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    this->_type = "WrongCat";
    std::cout << "Default constructor: " << this->_type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
    *this = src;
    std::cout << "Copy constructor: " << this->_type << " created" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor: " << this->_type << " destroyed" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &src) {
    this->_type = src.getType();
    std::cout << "Assign constructor: " << this->_type << " created" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << this->_type << " say: \"meow\"" << std::endl;
}