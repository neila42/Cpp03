#include "ClapTrap.hpp"
#include <iostream>

int main() 
{
    ClapTrap clapTrap1("ClapTrap 1");
    ClapTrap clapTrap2("ClapTrap 2");

    clapTrap2.attack("ClapTrap 1");
    clapTrap1.takeDamage(clapTrap2.getAttackDamage());

    clapTrap1.beRepaired(5);
    clapTrap2.beRepaired(5);

    clapTrap1.attack("ClapTrap 2");
    clapTrap2.takeDamage(clapTrap1.getAttackDamage());

    return 0;
}
