/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:19:32 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:19:34 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

/**PUBLIC**/

Animal::Animal()
{
    this->type = "Non defined";
    std::cout << "Mmh it's so good to eat" << std::endl;
}

Animal::Animal(std::string newType)
{
    this->type = newType;
    std::cout << "Mmh it's so good to eat" << std::endl;
}

Animal::Animal(Animal &copy)
{
    this->type = copy.getType();
    std::cout << "Mmh it's so good to eat" << std::endl;
}

Animal::~Animal()
{
    std::cout << "I'm full" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal&  Animal::operator=(const Animal &copy)
{
    std::cout << "Salame"<<std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Animal& cp)
{
    os << "type: " << cp.getType();
    return (os);
}

bool    Animal::operator==(const Animal &second) const
{
    return (this->getType() == second.getType());
}

void    Animal::makeSound() const
{
    std::cout << "Undefined sound" << std::endl;
}
