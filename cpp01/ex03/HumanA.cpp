/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:59:39 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/08 17:59:41 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

Weapon HumanA::getWeapon()
{
    return (weapon);
}

std::string HumanA::getName()
{
    return (name);
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with his weapon " << weapon.getType();
    std::cout << std::endl;
}
