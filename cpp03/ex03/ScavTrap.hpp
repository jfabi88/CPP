#include "ClapTrap.hpp"

class ScavTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap();

        ScavTrap operator = (const ScavTrap &copy);
        friend std::ostream& operator<<(std::ostream& os, const ScavTrap& cp);

        unsigned int    getAttackDamage(void) const;
        unsigned int    getHitPoint(void) const;
        unsigned int    getEnergyPoint(void) const;
        std::string     getName(void) const;
        ClapTrap        getClapTrap(void) const;

        void            guardGate(void);
    private:
        ClapTrap        Clapo;
        void            setClapTrap(ClapTrap Clapo);
};