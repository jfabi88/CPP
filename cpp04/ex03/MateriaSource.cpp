/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:28:18 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:28:20 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->size = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    for (int i = 0; i < this->size; i++)
        delete(this->bag[i]);  
    this->size = copy.size;
    for (int i = 0; i < copy.size; i++)
        this->bag[i] = copy.bag[i];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->size; i++)
        delete(this->bag[i]);
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& op)
{
    if (this == &op)
        return (*this);
    for (int i = 0; i < this->size; i++)
        delete(this->bag[i]);
    for (int i= 0; i < op.size; i++)
        this->bag[i] = op.bag[i];
    return (*this);
}

void            MateriaSource::learnMateria(AMateria* m)
{
    if (this->size == 4)
        return ;
    for (int i = 0; i < this->size; i++)
    {
        if (this->bag[i]->getType() == m->getType())
            return ;
    }
    this->bag[this->size] = m;
    this->size = size + 1;
}

AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->size; i++)
		if (this->bag[i]->getType() == type)
			return (this->bag[i]->clone());
	return (0);
}
