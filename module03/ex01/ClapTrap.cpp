#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name ("<noName>"), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
    std::cout << "Default constructor: ClapTrap without name created" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
    std::cout << "Constructor: ClapTrap with name " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) {
    *this = src;
    std::cout << "Copy constructor: ClapTrap with name " << this->_name << "created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor: ClapTrap with name " << this->_name << " destroyed" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src) {
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoint();
    this->_energyPoints = src.getEnergyPoint();
    this->_attackDamage = src.getAttackDamage();
    std::cout << "Assign operator: ClapTrap  with name " << this->getName() << "created" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string & target) {
    if (this->_energyPoints > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage" << std::endl;
        this->_energyPoints--;
    } else
        std::cout << "ClapTrap " << this->_name << " has not energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " had already died" << std::endl;
        return;
    }
    this->_hitPoints -= amount;
    if (this->_hitPoints < 1) {
        std::cout << "ClapTrap " << this->_name << " has died" << std::endl;
        this->_hitPoints = 0;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " take damage " << amount
    << ". Now he has " << this->_hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " has not energy points" << std::endl;
        return;
    }
    if (this->_hitPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " cannot be repaired. He had already died" << std::endl;
        return;
    }
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " has been repaired " << amount
    << " hit points. Now he has " << this->_hitPoints << " hit points" << std::endl;
}

std::string ClapTrap::getName() const {
    return this->_name;
}

unsigned int ClapTrap::getHitPoint() const {
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoint() const {
    return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
    return this->_attackDamage;
}