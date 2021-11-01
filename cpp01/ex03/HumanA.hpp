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