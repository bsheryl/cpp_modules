#include "Brain.hpp"

Brain::Brain() {
    std::string idea;
    for (int i = 0; i < 100; i++) {
        idea = "crazyIdea" + std::to_string(i);
        this->_ideas[i] = idea;
    }
    std::cout << "Default constructor: Brain created" << std::endl;
}

Brain::Brain(const Brain &src) {
    *this = src;
    std::cout << "Copy constructor: Brain created" << std::endl;
}

Brain::~Brain() {
    std::cout << "Destructor: Brain destroyed" << std::endl;
}

Brain & Brain::operator=(const Brain &src) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = src.getIdea(i);
    }
    return *this;
}

std::string Brain::getIdea(const int & index) const {
    return this->_ideas[index];
}

void Brain::printIdeas(std::string type) const {
    for (int i = 0; i < 100; i++) {
        std::cout << type << " has " << this->getIdea(i) << std::endl;
    }
}