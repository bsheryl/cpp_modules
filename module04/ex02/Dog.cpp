#include "Dog.hpp"

Dog::Dog() : AAnimal() {
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default constructor: " << this->_type << " created" << std::endl;
    this->_brain->printIdeas(this->_type);
}

Dog::Dog(const Dog &src) {
    *this = src;
    std::cout << "Copy constructor: " << this->_type << " created" << std::endl;
    this->_brain->printIdeas(this->_type);
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Destructor: " << this->_type << " destroyed" << std::endl;
}

Dog & Dog::operator=(const Dog &src) {
    this->_type = src.getType();
    this->_brain = new Brain();
    std::cout << "Assign constructor: " << this->_type << " created" << std::endl;
    this->_brain->printIdeas(this->_type);
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type << " say: \"woof\"" << std::endl;
}

Brain* Dog::getBrain() const {
    return this->_brain;
}