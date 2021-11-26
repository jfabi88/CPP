/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:15:15 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:15:17 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string newType);
        Animal(Animal &copy);
        virtual ~Animal();

        std::string getType() const;

        Animal&  operator=(const Animal &copy);
        bool    operator==(const Animal &second) const;
        virtual void    makeSound() const;
    protected:
        std::string type;
};

std::ostream& operator<<(std::ostream& os, const Animal& cp);

#endif
