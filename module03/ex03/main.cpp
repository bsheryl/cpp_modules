#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
//    {
//        std::cout << "==============ClapTrap class==============" << std::endl;
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
//    {
//        std::cout << "\n==============ScavTrap class==============" << std::endl;
//        ScavTrap mike("Mike");
//        ScavTrap tony("Tony");
//
//        tony.guardGate();
//        tony.beRepaired(10);
//        mike.attack(tony.getName());
//        tony.takeDamage(mike.getAttackDamage());
//        tony.takeDamage(mike.getAttackDamage());
//        tony.beRepaired(10);
//        tony.takeDamage(mike.getAttackDamage());
//    }
//    {
//        std::cout << "\n==============FragTrap class==============" << std::endl;
//        FragTrap mike("Mike");
//        FragTrap tony("Tony");
//
//        tony.beRepaired(10);
//        mike.attack(tony.getName());
//        tony.takeDamage(mike.getAttackDamage());
//        tony.takeDamage(mike.getAttackDamage());
//        tony.takeDamage(mike.getAttackDamage());
//        tony.beRepaired(10);
//        tony.highFivesGuys();
//        tony.takeDamage(mike.getAttackDamage());
//        tony.highFivesGuys();
//    }
    {
        std::cout << "\n==============DiamondTrap class==============" << std::endl;
        DiamondTrap mike("Mike");
        DiamondTrap tony("Tony");

        mike.whoAmI();
        tony.whoAmI();
        tony.beRepaired(10);
        mike.attack(tony.getName());
        tony.takeDamage(mike.getAttackDamage());
        tony.takeDamage(mike.getAttackDamage());
        tony.takeDamage(mike.getAttackDamage());
        tony.beRepaired(10);
        tony.highFivesGuys();
        tony.takeDamage(mike.getAttackDamage());
        tony.highFivesGuys();
    }
    return (0);
}