#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Default constructor: FragTrap without name created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Constructor: FragTrap with name " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
    *this = src;
    std::cout << "Copy constructor: FragTrap with name " << this->_name << " created" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor: FragTrap with name " << this->_name << " destroyed" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src) {
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoint();
    this->_energyPoints = src.getEnergyPoint();
    this->_attackDamage = src.getAttackDamage();
    std::cout << "Assign operator: FragTrap  with name " << this->getName() << "created" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys() {
    if (this->_energyPoints != 0 && this->_hitPoints != 0)
        std::cout << "FragTrap " << this->_name << ": high fives, guys!" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " had already died" << std::endl;
}