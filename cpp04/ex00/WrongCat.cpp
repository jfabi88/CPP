/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:16:55 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:16:57 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

/**PUBLIC**/

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Hi WrongCat!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Bye Bye WrongCat!" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Moia Moia" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    this->type = copy.getType();
}

WrongCat& WrongCat::operator=(const WrongAnimal &copy)
{
    if (this == &copy)
        return (*this);
    this->type = copy.getType();
    std::cout << "Hi WrongCat!" << std::endl;
    return (*this);
}
