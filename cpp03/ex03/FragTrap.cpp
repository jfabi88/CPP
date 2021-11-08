#include "FragTrap.hpp"

/**PUBLIC**/

FragTrap::FragTrap(std::string name) : Clapo(name, 30, 100, 100)
{
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : Clapo(copy.getClapTrap())
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
    os << cp.getClapTrap();
    return (os);
}

unsigned int    FragTrap::getAttackDamage(void) const
{
    return (this->getClapTrap().getAttackDamage());
}

unsigned int    FragTrap::getHitPoint(void) const
{
    return (this->getClapTrap().getHitPoint());
}
unsigned int    FragTrap::getEnergyPoint(void) const
{
    return (this->getClapTrap().getEnergyPoints());
}

std::string     FragTrap::getName(void) const
{
    return (this->getClapTrap().getName());
}

ClapTrap        FragTrap::getClapTrap(void) const
{
    return(this->Clapo);
}

void            highFiveGuys(void)
{
    std::cout << "high five, we won the friendship medal" << std::endl;
}

/**PRIVATE**/

void            FragTrap::setClapTrap(ClapTrap tmp)
{
    this->Clapo = tmp;
}