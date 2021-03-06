/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:20:08 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:20:09 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Hi cat!" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    this->type = cat.getType();
    delete(this->brain);
    this->brain = new Brain(cat.getBrain());
    std::cout << "Hi cat!" << std::endl;
}

Cat::~Cat()
{
    delete (this->brain);
    std::cout << "Bye Bye cat!" << std::endl;
}

void    Cat::setIdea(int indx, std::string idea)
{
    this->brain->setIdea(indx, idea);
}

Brain&  Cat::getBrain() const
{
    return (*this->brain);
}

Cat&  Cat::operator=(const Cat &copy)
{
    if (this == &copy)
        return *this;
    delete(this->brain);
    this->brain = new Brain(copy.getBrain());
    std::cout << "Hi cat!" << std::endl;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miao Miao" << std::endl;
}
