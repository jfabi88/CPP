/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:34:45 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:34:47 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/**PUBLIC**/

FragTrap::FragTrap() : ClapTrap()
{
    this->Name = "";
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    this->Name = copy.getName();
    this->HitPoint = copy.getHitPoint();
    this->EnergyPoints = copy.getEnergyPoints();
    this->AttackDamage = copy.getAttackDamage();
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frago fell from the tree" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    if (this == &copy)
        return (*this);
    this->Name = copy.getName();
    this->HitPoint = copy.getHitPoint();
    this->EnergyPoints = copy.getEnergyPoints();
    this->AttackDamage = copy.getAttackDamage();
    std::cout << "Hi Frago" << std::endl;
    return (*this);
}

void            FragTrap::highFiveGuys(void)
{
    std::cout << "Frago " << "High five! Pergo and Frago: one for all, all for one" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const FragTrap& cp)
{
    os << "Frago " << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);
}
