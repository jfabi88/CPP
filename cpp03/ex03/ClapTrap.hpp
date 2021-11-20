#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int attack, int hit, int energy);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        
        ClapTrap operator = (const ClapTrap &copy);
        friend std::ostream& operator<<(std::ostream& os, const ClapTrap& cp);

        void    attack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        unsigned int    getHitPoint() const;
        unsigned int    getEnergyPoints() const;
        unsigned int    getAttackDamage() const;
        std::string     getName() const;
    protected:
        unsigned int    HitPoint;
        unsigned int    EnergyPoints;
        unsigned int    AttackDamage;
        std::string     Name;
    private:
        void            setHitPoint(int num);
        void            setEnergyPoints(int num);
        void            setAttackDamage(int num);
};

#endif
