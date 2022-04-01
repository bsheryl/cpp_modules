#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 10;
    std::cout << "Default constructor: ScavTrap without name created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 10;
    std::cout << "Constructor: ScavTrap with name " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
    *this = src;
    std::cout << "Copy constructor: ScavTrap with name " << this->_name << "crated" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor: ScavTrap with name " << this->_name << " destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src) {
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoint();
    this->_energyPoints = src.getEnergyPoint();
    this->_attackDamage = src.getAttackDamage();
    std::cout << "Assign operator: ScavTrap  with name " << this->getName() << "created" << std::endl;
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap with name " << this->_name << " is guarding Gate" << std::endl;
}