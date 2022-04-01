#include "Cat.hpp"

Cat::Cat() : AAnimal() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Default constructor: " << this->_type << " created" << std::endl;
    this->_brain->printIdeas(this->_type);
}

Cat::Cat(const Cat &src) {
    *this = src;
    std::cout << "Copy constructor: " << this->_type << " created" << std::endl;
    this->_brain->printIdeas(this->_type);
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Destructor: " << this->_type << " destroyed" << std::endl;
}

Cat & Cat::operator=(const Cat &src) {
    this->_type = src.getType();
    this->_brain = new Brain();
    std::cout << "Assign constructor: " << this->_type << " created" << std::endl;
    this->_brain->printIdeas(this->_type);
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " say: \"meow\"" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->_brain;
}