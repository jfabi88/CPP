/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:59:59 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/08 18:00:01 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon weapon);
        void setWeapon(Weapon weapon);
        void setName(std::string name);
        Weapon getWeapon();
        std::string getName();
        void attack(void);
    private:
        std::string name;
        Weapon  weapon;
};

#endif
