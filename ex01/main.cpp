#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() 
{
    ClapTrap clapTrap("Claptrap");
    ScavTrap scavTrap("Scavtrap");

    scavTrap.attack("Claptrap");
    clapTrap.takeDamage(scavTrap.getAttackDamage());

    clapTrap.attack("Scavtrap");
    scavTrap.takeDamage(clapTrap.getAttackDamage());

    scavTrap.guardGate();

    clapTrap.beRepaired(10);
    scavTrap.beRepaired(20);

    return 0;
}
