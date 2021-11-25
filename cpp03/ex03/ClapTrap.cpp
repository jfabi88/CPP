/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:34:11 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:34:12 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->AttackDamage = 0;
    this->EnergyPoints = 10;
    this->HitPoint = 10;
    std::cout << "Hi Clapo!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->AttackDamage = 0;
    this->EnergyPoints = 10;
    this->HitPoint = 10;
    std::cout << "Hi Clapo!" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int attack, int hit, int energy)
{
    this->Name = name;
    this->AttackDamage = attack;
    this->EnergyPoints = energy;
    this->HitPoint = hit;
    std::cout << "Hi Clapo" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    this->Name = copy.getName();
    this->AttackDamage = copy.getAttackDamage();
    this->EnergyPoints = copy.getEnergyPoints();
    this->HitPoint = copy.getHitPoint();
    std::cout << "Hi Clapo" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Goodbye Clapo. We'll see tomorrow" << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "Clapo " << this->Name << " attack " \
    << target << ", causing " << this->AttackDamage\
    << " points of damage!" <<std::endl;
}
        
ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
    if (this == &copy)
        return (*this);
    this->Name = copy.getName();
    this->AttackDamage = copy.getAttackDamage();
    this->EnergyPoints = copy.getEnergyPoints();
    this->HitPoint = copy.getHitPoint();
    std::cout << "Hi Clapo" << std::endl;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& cp)
{
    os << "Clapo " << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int newValue;

    if (amount > 999)
        this->HitPoint = 0;
    else
    {
        newValue = this->HitPoint - amount;
        if (newValue < 0)
            this->HitPoint = 0;
        else
            this->HitPoint = newValue;
    }
    std::cout << "Clapo " << this->getName() << " take " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > 999 || this->HitPoint + amount > 999)
        this->HitPoint = 999;
    else
        this->HitPoint = this->HitPoint + amount;
    std::cout << "Clapo " << this->getName() << " heals " << amount << " hitpoints" << std::endl;
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
