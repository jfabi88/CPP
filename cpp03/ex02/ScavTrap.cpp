#include "ScavTrap.hpp"

/**PUBLIC**/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Name = name;
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "Hi Scavo" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.getName())
{
    this->Name = copy.getName();
    this->HitPoint = copy.getHitPoint();
    this->EnergyPoints = copy.getEnergyPoints();
    this->AttackDamage = copy.getAttackDamage();
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
    os << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);
}

void            ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " have entered in Gate keeper mode" << std::endl;
}