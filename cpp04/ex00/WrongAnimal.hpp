/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:16:44 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:16:46 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string newType);
        WrongAnimal(WrongAnimal &copy);
        virtual ~WrongAnimal();

        std::string getType() const;

        WrongAnimal  operator=(const WrongAnimal &copy);
        bool    operator==(const WrongAnimal &second) const;
        void    makeSound() const;
    protected:
        std::string type;
};

std::ostream& operator<<(std::ostream& os, const WrongAnimal& cp);

#endif
