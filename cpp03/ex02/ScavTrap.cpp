#include "ScavTrap.hpp"

/**PUBLIC**/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 20, 100, 50)
{
    std::cout << "Hi Scavo" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.getName(), copy.getAttackDamage(), copy.getHitPoint(), copy.getEnergyPoints())
{
    std::cout << "Hi Scavo" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "I love you Scavo..." << std::endl;
}

ScavTrap ScavTrap::operator=(const ScavTrap &copy)
{
    ScavTrap    ret(copy);

    return (ret);
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& cp)
{
    os << "Scavo (name: " << cp.getName() << " ;attack: " << cp.getAttackDamage() \
    << " ;HitPonits: " << cp.getHitPoint() << " ;Energy: " << cp.getEnergyPoints()\
    << ")";
 
    return (os);
}

void            ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " have entered in Gate keeper mode" << std::endl;
}