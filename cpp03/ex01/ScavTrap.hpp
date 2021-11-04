#include "ClapTrap.hpp"

class ScavTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        unsigned int    getAttackDamage(void) const;
        unsigned int    getHitPoint(void) const;
        unsigned int    getEnergyPoint(void) const;
    private:
        ClapTrap    Clapo;
}