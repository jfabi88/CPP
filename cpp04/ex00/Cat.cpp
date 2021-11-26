/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:15:26 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:15:27 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Hi cat!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Bye Bye cat!" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    this->type = cat.getType();
    std::cout << "Hi cat!" << std::endl;
}

Cat& Cat::operator = (const Cat &copy)
{
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    std::cout << "Hi cat!" << std::endl;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miao Miao" << std::endl;
}
