/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:23:26 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:23:28 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    for (unsigned int i = 0; i < 4; i++)
        this->bag[i] = 0;
}

Character::Character(Character &copy)
{
    this->name = copy.getName();
    for (unsigned int i = 0; i < 4; i++)
        this->bag[i] = copy.bag[i];
}

Character::~Character() 
{
    for (unsigned int i = 0; i < 4; i++)
        delete(this->bag[i]);
}

std::string const& Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    int i;

    i = 0;
    while (i < 4 && this->bag[i])
        i++;
    if (i != 4)
        this->bag[i] = m;
}

void Character::unequip(int idx)
{
    if ((unsigned int)idx < 4 && idx >= 0)
    {
        unsigned int i;

        for (i = idx; i < 4 - 1; i++)
            this->bag[i] = this->bag[i + 1];
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && (unsigned int)idx < 4 && bag[idx] != 0)
        this->bag[idx]->use(target);
}
