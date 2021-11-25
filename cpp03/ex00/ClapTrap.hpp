/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:29:31 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:29:34 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        
        ClapTrap &operator = (const ClapTrap &copy);
    
        void    attack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        unsigned int    getHitPoint() const;
        unsigned int    getEnergyPoints() const;
        unsigned int    getAttackDamage() const;
        std::string     getName() const;
    private:
        unsigned int    HitPoint;
        unsigned int    EnergyPoints;
        unsigned int    AttackDamage;
        std::string     Name;
};

std::ostream& operator<<(std::ostream& os, const ClapTrap& cp);

#endif
