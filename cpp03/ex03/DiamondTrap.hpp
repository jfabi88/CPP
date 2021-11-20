#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &copy);
        ~DiamondTrap();

        void whoAmI();
        using ScavTrap::attack;

        DiamondTrap operator = (const DiamondTrap &copy);
        friend std::ostream& operator<<(std::ostream& os, const DiamondTrap& cp);
    private:
        std::string Name;
};

#endif