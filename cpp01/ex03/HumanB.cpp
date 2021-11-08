/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:00:11 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/08 18:00:13 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = 0;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

Weapon HumanB::getWeapon()
{
    return (*weapon);
}

std::string HumanB::getName()
{
    return (name);
}

void HumanB::attack(void)
{
    if (weapon)
    {
        std::cout << name << " attacks with his weapon " << getWeapon().getType();
        std::cout << std::endl;
    }
    else
        std::cout << name << " hasn't a weapon" << std::endl;
}

HumanB::~HumanB(void)
{
    weapon = 0;
}
