#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    ClapTrap    newClapTrap(name, 30, 100, 100);

    this->Clapo = newClapTrap;
    std::cout << "Hi Scavo" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "I love you Scavo..." << std::endl;
}

unsigned int    ScavTrap::getAttackDamage(void) const
{
    return (this->Clapo.getAttackDamage());
}

unsigned int    ScavTrap::getHitPoint(void) const
{
    return (this->Clapo.getHitPoint());
}
unsigned int    ScavTrap::getEnergyPoint(void) const
{
    return (this->Clapo.getEnergyPoints());
}