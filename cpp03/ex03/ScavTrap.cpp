#include "ScavTrap.hpp"

/**PUBLIC**/

ScavTrap::ScavTrap(std::string name) : Clapo(name, 30, 100, 100)
{
    std::cout << "Hi Scavo" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : Clapo(copy.getClapTrap())
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
    os << cp.getClapTrap();
    return (os);
}

unsigned int    ScavTrap::getAttackDamage(void) const
{
    return (this->getClapTrap().getAttackDamage());
}

unsigned int    ScavTrap::getHitPoint(void) const
{
    return (this->getClapTrap().getHitPoint());
}
unsigned int    ScavTrap::getEnergyPoint(void) const
{
    return (this->getClapTrap().getEnergyPoints());
}

std::string     ScavTrap::getName(void) const
{
    return (this->getClapTrap().getName());
}

ClapTrap        ScavTrap::getClapTrap(void) const
{
    return(this->Clapo);
}

void            ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " have entered in Gate keeper mode" << std::endl;
}

/**PRIVATE**/

void            ScavTrap::setClapTrap(ClapTrap tmp)
{
    this->Clapo = tmp;
}