#include "ClapTrap.hpp"

class FragTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();

        FragTrap operator = (const FragTrap &copy);
        friend std::ostream& operator<<(std::ostream& os, const FragTrap& cp);

        unsigned int    getAttackDamage(void) const;
        unsigned int    getHitPoint(void) const;
        unsigned int    getEnergyPoint(void) const;
        std::string     getName(void) const;
        ClapTrap        getClapTrap(void) const;

        void            highFiveGuys(void);
    private:
        ClapTrap        Clapo;
        void            setClapTrap(ClapTrap Clapo);
};