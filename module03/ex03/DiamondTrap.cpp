#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Default constructor: DiamondTrap without name created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_trap"), ScavTrap(name), FragTrap(name), _name(name) {
//    ClapTrap::_name = name + "_clap_trap";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructor: DiamondTrap with name " << this->_name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
    *this = src;
    std::cout << "Copy constructor: DiamondTrap with name " << this->_name << "created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor: DiamondTrap with name " << this->_name << " destroyed" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src) {
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoint();
    this->_energyPoints = src.getEnergyPoint();
    this->_attackDamage = src.getAttackDamage();
    std::cout << "Assign operator: DiamondTrap with name " << this->_name << " created" << std::endl;
    return *this;
}

void DiamondTrap::whoAmI() const {
    std::cout << "DiamondTrap " << this->_name << ": I am " << this->_name << " and " << ClapTrap::_name << std::endl;
}