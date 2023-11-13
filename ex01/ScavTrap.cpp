#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) //Claptrap constructeur appelé en premier et apres celui la modifie
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructor\n";
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << name << " destructor\n";
}

void ScavTrap::attack(const std::string &target) 
{
    if (energyPoints == 0 || hitPoints == 0) 
    {
        std::cout << "ScavTrap " << name << " error no energy or health.\n";
        return;
    }
    std::cout << "ScavTrap " << name << " attacks (bcp lol) " << target << ", causing " << attackDamage << " points of damage!\n";
    energyPoints--; 
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode.\n";
}
