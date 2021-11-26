/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:23:59 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:24:00 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    this->type = "cure";
}

Cure::Cure(Cure const &copy) : AMateria("cure")
{
    this->type = copy.getType();
}

Cure::~Cure()
{
}
    
AMateria*    Cure::clone() const
{
    AMateria *ret = new Cure();

    return (ret);
}
