/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:00:25 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/08 18:00:27 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon weapon);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void setName(std::string name);
        Weapon getWeapon();
        std::string getName();
        void attack(void);
    private:
        std::string name;
        Weapon  *weapon;
};

#endif
