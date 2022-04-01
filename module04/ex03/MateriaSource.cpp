#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
        this->_materias[i] = nullptr;
    }
    std::cout << "Default constructor: MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
    if (this != &src)
        *this = src;
    for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
        this->_materias[i] = nullptr;
    }
    std::cout << "Copy constructor: MateriaSource created" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
        if (this->_materias[i] != nullptr) {
            delete this->_materias[i];
            this->_materias[i] = nullptr;
        }
    }
    std::cout << "Destructor: MateriaSource destroyed" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src) {
    for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
        this->_materias[i] = src._materias[i];
    }
    std::cout << "Assign constructor: MateriaSource created" << std::endl;
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
        if (this->_materias[i] == nullptr) {
            this->_materias[i] = m;
            std::cout << "Materia " << this->_materias[i]->getType() << " learned" << std::endl;
            return;
        }
    }
    std::cout << "No free resource for learning " << m->getType() << std::endl;
}

AMateria * MateriaSource::createMateria(const std::string &type) {
    for (int i = NUMBER_OF_MATERIAS - 1; i >= 0; i--) {
        if (this->_materias[i] != nullptr && type == this->_materias[i]->getType()) {
            std::cout << "Materia " << this->_materias[i]->getType() << " created" << std::endl;
            return this->_materias[i]->clone();
        }
    }
    std::cout << "Materia " << type << " not found" << std::endl;
    return nullptr;
}