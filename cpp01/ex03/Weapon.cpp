/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:00:46 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/08 18:00:48 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    type =  "";
}

Weapon::Weapon(std::string stringa)
{
    type = stringa;
}

std::string Weapon::getType(void)
{
    return (type);
}

void Weapon::setType(std::string string)
{
    type = string;
}
