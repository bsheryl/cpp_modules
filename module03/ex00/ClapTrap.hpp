#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstring>

class ClapTrap {

public:

    ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap & src);
    ~ClapTrap();

    ClapTrap & operator=(const ClapTrap & src);

    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    unsigned int getHitPoint() const;
    unsigned int getEnergyPoint() const;
    unsigned int getAttackDamage() const;

private:

    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif