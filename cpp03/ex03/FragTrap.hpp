#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();

        FragTrap operator = (const FragTrap &copy);
        friend std::ostream& operator<<(std::ostream& os, const FragTrap& cp);

        void            highFiveGuys(void);
};