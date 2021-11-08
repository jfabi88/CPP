#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->setAttackDamage(0);
    this->setEnergyPoints(10);
    this->setHitPoint(10);
    std::cout << "Hi Clapo!" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int attack, int hit, int energy)
{
    this->Name = name;
    this->setAttackDamage(attack);
    this->setEnergyPoints(energy);
    this->setHitPoint(hit);
    std::cout << "Hi Clapo" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    this->Name = copy.getName();
    this->setAttackDamage(copy.getAttackDamage());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoint(copy.getHitPoint());
    std::cout << "Hi Clapo" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Goodbye Clapo. We'll see tomorrow" << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "Clap " << this->getName() << " attack " \
    << target << ", causing " << this->getAttackDamage()\
    << " points of damage!" <<std::endl;
}
        
ClapTrap ClapTrap::operator=(const ClapTrap &copy)
{
    ClapTrap    ret(copy);

    return (ret);
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& cp)
{
    os << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int newValue;

    newValue = this->getHitPoint() - amount;
    if (newValue < 0)
        this->setHitPoint(0);
    else
        this->setHitPoint(newValue);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->setHitPoint(this->getHitPoint() + amount);
}

unsigned int    ClapTrap::getHitPoint() const
{
    return (this->HitPoint);
}

unsigned int    ClapTrap::getEnergyPoints() const
{
    return (this->EnergyPoints);
}

unsigned int    ClapTrap::getAttackDamage() const
{
    return (this->AttackDamage);
}

std::string     ClapTrap::getName() const
{
    return (this->Name);
}

void            ClapTrap::setHitPoint(int num)
{
    this->HitPoint = num;
}

void            ClapTrap::setEnergyPoints(int num)
{
    this->EnergyPoints = num;
}

void            ClapTrap::setAttackDamage(int num)
{
    this->AttackDamage = num;
}
