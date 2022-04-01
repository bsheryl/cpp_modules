#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:

    DiamondTrap();
    DiamondTrap(const std::string name);
    DiamondTrap(const DiamondTrap & src);
    ~DiamondTrap();

    DiamondTrap & operator=(const DiamondTrap & src);

    using ScavTrap::attack;
    void whoAmI(void) const;

private:

    std::string _name;

};

#endif