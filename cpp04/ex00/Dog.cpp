/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:16:02 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:16:05 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Hi dog!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Bye Bye dog!" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->type = copy.getType();
    std::cout << "Hi dog!" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Bau Bau" << std::endl;
}

Dog& Dog::operator = (const Dog &copy)
{
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    std::cout << "Hi dog!" << std::endl;
    return (*this);
}
