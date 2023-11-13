#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() 
{
    ClapTrap clapTrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");
    FragTrap fragTrap("FragTrap");

    fragTrap.attack("ClapTrap");
    clapTrap.takeDamage(fragTrap.getAttackDamage());
    scavTrap.attack("FragTrap");
    fragTrap.takeDamage(scavTrap.getAttackDamage());
    clapTrap.attack("ScavTrap");
    scavTrap.takeDamage(clapTrap.getAttackDamage());

    scavTrap.guardGate();
    fragTrap.highFivesGuys();
    fragTrap.attack("ScavTrap");
    scavTrap.takeDamage(fragTrap.getAttackDamage());
    clapTrap.beRepaired(15);

    scavTrap.attack("ClapTrap");
    clapTrap.takeDamage(scavTrap.getAttackDamage());
    clapTrap.attack("FragTrap");
    fragTrap.takeDamage(clapTrap.getAttackDamage());
    fragTrap.beRepaired(20);

    fragTrap.attack("ScavTrap");
    scavTrap.takeDamage(fragTrap.getAttackDamage());
    scavTrap.beRepaired(25);
    clapTrap.attack("FragTrap");
    fragTrap.takeDamage(clapTrap.getAttackDamage());

    return 0;
}
