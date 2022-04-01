#include "Character.hpp"

Character::Character() : _name("<unknown>") {
    for (int i = 0; i < NUMBER_SLOTS; i++) {
        this->_slots[i] = nullptr;
    }
    std::cout << "Default constructor: Character with name " << this->_name << " created" << std::endl;
}

Character::Character(const std::string &name) : _name(name) {
    for (int i = 0; i < NUMBER_SLOTS; i++) {
        this->_slots[i] = nullptr;
    }
    std::cout << "Constructor: Character with name " << this->_name << " created" << std::endl;
}

Character::Character(const Character &src) {
    if (this != &src)
        *this = src;
    for (int i = 0; i < NUMBER_SLOTS; i++) {
        this->_slots[i] = nullptr;
    }
    std::cout << "Copy constructor: Character with name " << this->_name << " created" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < NUMBER_SLOTS; i++) {
        if (this->_slots[i] != nullptr) {
            delete this->_slots[i];
            this->_slots[i] = nullptr;
        }
    }
    std::cout << "Destructor: Character with name " << this->_name << " destroyed" << std::endl;
}

Character & Character::operator=(const Character &src) {
    this->_name = src._name;
    for (int i = 0; i < NUMBER_SLOTS; i++) {
        this->_slots[i] = nullptr;
    }
    std::cout << "Assign constructor: Character with name " << this->_name << " created" << std::endl;
    return *this;
}

std::string const & Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < NUMBER_SLOTS; i++) {
        if (this->_slots[i] == nullptr && m != nullptr) {
            this->_slots[i] = m;
            std::cout << "Materia " << this->_slots[i]->getType() << " equiped to slots" << std::endl;
            return;
        }
    }
    if (m == nullptr)
        std::cout << "Nothing to equip" << std::endl;
    else
        std::cout << "No free slots" << std::endl;
}

void Character::unequip(int idx) {
    if (0 <= idx && idx < NUMBER_SLOTS && this->_slots[idx] != nullptr) {
        std::cout << "Materia " << this->_slots[idx]->getType() << " unequiped" << std::endl;
        delete this->_slots[idx];
        this->_slots[idx] = nullptr;
        return;
    }
    std::cout << "Error index" << std::endl;
}

void Character::use(int idx, ICharacter & target) {
    if (idx >= 0 && idx < NUMBER_SLOTS && this->_slots[idx] != nullptr) {
        std::cout << "Character " << this->_name << " use " << this->_slots[idx]->getType() << std::endl;
        this->_slots[idx]->use(target);
        return;
    }
    std::cout << "Something wrong" << std::endl;
}