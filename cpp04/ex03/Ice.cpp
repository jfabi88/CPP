/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:24:43 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:24:45 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    this->type = "ice";
}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
    this->type = copy.getType();
}

Ice::~Ice()
{
}
    
AMateria*   Ice::clone() const
{
    AMateria    *ret = new Ice();

    return (ret);
}
