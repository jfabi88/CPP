#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->Name = name;
    this->HitPoint = this->FragTrap::getHitPoint();
    this->EnergyPoints = this->ScavTrap::getEnergyPoints();
    this->AttackDamage = this->FragTrap::getAttackDamage();
    std::cout << "Hi Diamo!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy.getName() + "_clap_name"), FragTrap(copy.getName()), ScavTrap(copy.getName())
{
    this->Name = copy.getName();
    this->HitPoint = this->FragTrap::getHitPoint();
    this->EnergyPoints = this->ScavTrap::getEnergyPoints();
    this->AttackDamage = this->FragTrap::getAttackDamage();
    std::cout << "Hi Diamo!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "A Diamond became a jewel" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond Name: "<< this->Name << std::endl;
    std::cout << "Clap Name: " << this->ClapTrap::getName() << std::endl;
}

DiamondTrap DiamondTrap::operator = (const DiamondTrap &copy)
{
    DiamondTrap    ret(copy);

    return (ret);
}

std::ostream& operator<<(std::ostream& os, const DiamondTrap& cp)
{
    os << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);  
}