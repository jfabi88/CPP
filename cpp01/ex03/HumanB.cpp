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

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

std::string HumanB::getName()
{
    return (name);
}

void HumanB::attack(void)
{
    if (weapon)
    {
        std::cout << name << " attacks with his weapon " << this->weapon->getType();
        std::cout << std::endl;
    }
    else
        std::cout << name << " hasn't a weapon" << std::endl;
}

HumanB::~HumanB(void)
{
    weapon = 0;
}
