#include "FragTrap.hpp"

/**PUBLIC**/

FragTrap::FragTrap(std::string name) : ClapTrap(name, 30, 100, 100)
{
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.getName(), 30, 100, 100)
{
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "I love you Frago..." << std::endl;
}

FragTrap FragTrap::operator=(const FragTrap &copy)
{
    FragTrap    ret(copy);

    return (ret);
}

std::ostream& operator<<(std::ostream& os, const FragTrap& cp)
{
    os << "Frago (name: " << cp.getName() << " ;Attack: " << cp.getAttackDamage() \
    << " ;HitPonits: " << cp.getHitPoint() << " ;Energy: " << cp.getEnergyPoints()\
    << ")";

    return (os);
}

void            highFiveGuys(void)
{
    std::cout << "high five, we won the friendship medal" << std::endl;
}
