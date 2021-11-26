/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:23:47 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:23:48 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string name);
        Character(Character &copy);
        virtual ~Character();

        virtual std::string const & getName() const;
        unsigned int    getSize() const;
        AMateria        *getAMateria(unsigned int indx) const;

        virtual void    equip(AMateria* m);
        virtual void    unequip(int idx);
        virtual void    use(int idx, ICharacter& target);
    private:
        std::string     name;
        unsigned int    size;
        AMateria        *bag[4];
};

#endif
