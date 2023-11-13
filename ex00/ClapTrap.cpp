#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap " << name << " constructor\n";
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << name << " destructor\n";
}

void ClapTrap::attack(const std::string &target) 
{
    if (energyPoints == 0 || hitPoints == 0) 
    {
        std::cout << "ClapTrap " << name << " error no energy or health\n";
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (amount >= hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (energyPoints == 0) 
    {
        std::cout << "ClapTrap " << name << " error no energy\n";
        return;
    }
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " recovering " << amount << " hit points!\n";
    energyPoints--;
}

unsigned int ClapTrap::getHitPoints() const 
{
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const 
{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const 
{
    return attackDamage;
}
