/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:31:27 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:31:29 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**PUBLIC**/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Name = name;
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "Hi Scavo" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.getName())
{
    this->Name = copy.getName();
    this->HitPoint = copy.getHitPoint();
    this->EnergyPoints = copy.getEnergyPoints();
    this->AttackDamage = copy.getAttackDamage();
    std::cout << "Hi Scavo" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "I love you Scavo..." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
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

std::ostream& operator<<(std::ostream& os, const ScavTrap& cp)
{
    os << "Scavo " << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "Scavo " << this->Name << " attack " \
    << target << ", causing " << this->AttackDamage\
    << " points of damage!" <<std::endl;    
}

void            ScavTrap::guardGate(void)
{
    std::cout << "Scavo " << this->Name<< " have entered in Gate keeper mode" << std::endl;
}
