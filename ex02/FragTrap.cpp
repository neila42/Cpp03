#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) 
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " constructor\n";
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap " << name << " destructor\n";
}

void FragTrap::attack(const std::string &target) 
{
    if (energyPoints == 0 || hitPoints == 0) 
    {
        std::cout << "FragTrap " << name << " error no energy or health.\n";
        return;
    }
    std::cout << "FragTrap " << name << " attacks " << target << ", dealing " << attackDamage << " points of damage!\n";
    energyPoints--; 
}

void FragTrap::highFivesGuys() 
{
    std::cout << "FragTrap " << name << " requests a high five!\n";
}
