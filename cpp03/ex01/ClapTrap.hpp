#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(std::string name, int attack, int hit, int energy);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        
        ClapTrap operator = (const ClapTrap &copy);
    
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
        void            setHitPoint(int num);
        void            setEnergyPoints(int num);
        void            setAttackDamage(int num);
};