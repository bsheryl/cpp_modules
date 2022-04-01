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

ScavTrap::~ScavTrap() {
    std::cout << "Destructor: ScavTrap with name " << this->_name << " destroyed" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap with name " << this->_name << " is guarding Gate" << std::endl;
}