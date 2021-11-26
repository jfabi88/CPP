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
    size = 0;
    for (unsigned int i = 0; i < 4; i++)
        this->bag[i] = 0;
}

Character::Character(Character &copy)
{
    this->name = copy.getName();
    this->size = copy.size;
    for (unsigned int i = 0; i < copy.size; i++)
        this->bag[i] = copy.bag[i];
    for (unsigned int i = this->size; i < 4; i++)
        this->bag[i] = 0;
}

Character::~Character() 
{
    for (unsigned int i = 0; i < this->size; i++)
        delete(this->bag[i]);
}

std::string const& Character::getName() const
{
    return (this->name);
}

unsigned int Character::getSize() const
{
    return (this->size);
}

AMateria *Character::getAMateria(unsigned int indx) const
{
    if (indx < this->size)
        return (this->bag[indx]);
    return (0);
}

void Character::equip(AMateria* m)
{
    if (this->size != 4)
    {
        bag[this->size] = m;
        this->size = this->size + 1;
    }
}

void Character::unequip(int idx)
{
    if ((unsigned int)idx < this->size && idx >= 0)
    {
        unsigned int i;

        for (i = idx; i < this->size - 1; i++)
            this->bag[i] = this->bag[i + 1];
        this->size = this->size - 1;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && (unsigned int)idx < this->size && bag[idx] != 0)
        this->bag[idx]->use(target);
}
