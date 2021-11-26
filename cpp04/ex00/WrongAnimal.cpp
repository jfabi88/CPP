/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:16:31 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:16:33 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/**PUBLIC**/

WrongAnimal::WrongAnimal()
{
    this->type = "Non defined";
    std::cout << "Mmh it's so good to eat" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType)
{
    this->type = newType;
    std::cout << "Mmh it's so good to eat" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    this->type = copy.getType();
    std::cout << "Mmh it's so good to eat" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "I'm full" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal  WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const WrongAnimal& cp)
{
    os << "type: " << cp.getType();
    return (os);
}

bool    WrongAnimal::operator==(const WrongAnimal &second) const
{
    return (this->getType() == second.getType());
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Undefined sound" << std::endl;
}
