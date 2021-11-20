#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap();

        ScavTrap operator = (const ScavTrap &copy);
        friend std::ostream& operator<<(std::ostream& os, const ScavTrap& cp);

        void            guardGate(void);
};