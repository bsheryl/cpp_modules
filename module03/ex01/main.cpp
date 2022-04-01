#include "ScavTrap.hpp"

int main() {

//    {
//        std::cout << "==============ClapTrap class==============" << std::endl;
//        ClapTrap noName;
//        ClapTrap mike("Mike");
//        ClapTrap tony("Tony");
//
//        tony.beRepaired(10);
//        mike.attack(tony.getName());
//        tony.takeDamage(mike.getAttackDamage());
//        tony.takeDamage(mike.getAttackDamage());
//        tony.beRepaired(10);
//        tony.takeDamage(mike.getAttackDamage());
//    }
    {
        std::cout << "\n==============ScavTrap class==============" << std::endl;
        ScavTrap noName;
        ScavTrap mike("Mike");
        ScavTrap tony("Tony");

        tony.guardGate();
        tony.beRepaired(10);
        mike.attack(tony.getName());
        tony.takeDamage(mike.getAttackDamage());
        tony.takeDamage(mike.getAttackDamage());
        tony.beRepaired(10);
        tony.takeDamage(mike.getAttackDamage());
    }
    return (0);
}