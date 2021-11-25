/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:34:26 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:34:28 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->Name = name;
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
    std::cout << AttackDamage << std::endl;
    std::cout << "Hi Diamo!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy.getName() + "_clap_name"), FragTrap(copy.getName()), ScavTrap(copy.getName())
{
    this->Name = copy.getName();
    this->HitPoint = this->FragTrap::getHitPoint();
    this->EnergyPoints = this->ScavTrap::getEnergyPoints();
    this->AttackDamage = this->FragTrap::AttackDamage;
    std::cout << FragTrap::AttackDamage << std::endl;
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

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &copy)
{
    if (this == &copy)
        return (*this);
    this->Name = copy.getName();
    this->HitPoint = this->FragTrap::getHitPoint();
    this->EnergyPoints = this->ScavTrap::getEnergyPoints();
    this->AttackDamage = this->FragTrap::getAttackDamage();
    std::cout << "Hi Diamo!" << std::endl;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const DiamondTrap& cp)
{
    os << "Diamo " << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);  
}
