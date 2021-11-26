/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:23:13 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:23:15 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(AMateria const &copy)
{
    this->type = copy.getType();
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    if (this->type == "cure")
        std::cout << "*heals " << target.getName() << "'s wounds *" << std::endl;
    else if (this->type == "ice")
        std::cout << "*shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else
        std::cout << "*uses materia at" << target.getName() << " *" << std::endl;
}

AMateria  &AMateria::operator=(const AMateria &copy)
{
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const AMateria& am)
{
    os << am.getType();

    return (os);
}
