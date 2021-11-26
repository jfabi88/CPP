/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:21:46 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:21:47 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        virtual ~Animal();

        std::string getType() const;

        Animal&  operator=(const Animal &copy);
        bool    operator==(const Animal &second) const;
        virtual void    makeSound() const = 0;
    protected:
        std::string type;
        Animal();
        Animal(std::string newType);
        Animal(Animal &copy);
};

std::ostream& operator<<(std::ostream& os, const Animal& cp);

#endif
