/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:22:42 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:22:44 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        virtual ~Dog();

        void    setIdea(int indx, std::string idea);
        Dog&    operator=(const Dog &copy);
        Brain&  getBrain() const;
        virtual void    makeSound() const;
    private:
        Brain   *brain;
};

#endif
