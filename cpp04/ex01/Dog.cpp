/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:20:46 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:20:48 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

/**PUBLIC**/

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Hi dog!" << std::endl;
}

void    Dog::setIdea(int indx, std::string idea)
{
    this->brain->setIdea(indx, idea);
}

Brain&  Dog::getBrain() const
{
    return(*this->brain);
}

Dog&  Dog::operator=(const Dog &copy)
{
    if (this == &copy)
        return *this;
    delete(this->brain);
    this->brain = new Brain(copy.getBrain());
    std::cout << "Hi dog!" << std::endl;
    return (*this);
}

Dog::Dog(const Dog &copy)
{
    this->type = copy.getType();
    delete(this->brain);
    this->brain = new Brain(copy.getBrain());
    std::cout << "Hi dog!" << std::endl;
}

Dog::~Dog()
{
    delete(this->brain);
    std::cout << "Bye Bye dog!" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Bau Bau" << std::endl;
}
