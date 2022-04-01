#include "ClapTrap.hpp"

int main() {
    ClapTrap noName;
    ClapTrap mike("Mike");
    ClapTrap tony("Tony");

    tony.beRepaired(10);
    mike.attack(tony.getName());
    tony.takeDamage(mike.getAttackDamage());
    tony.takeDamage(mike.getAttackDamage());
    tony.beRepaired(10);
    tony.takeDamage(mike.getAttackDamage());
    return (0);
}