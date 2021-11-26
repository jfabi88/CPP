/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:20:19 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:20:21 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &cat);
        virtual ~Cat();
        
        virtual void    makeSound() const;

        void    setIdea(int indx, std::string idea);
        Brain&  getBrain() const;
        Cat&    operator=(const Cat &copy);
    private:
        Brain   *brain;
};

#endif
