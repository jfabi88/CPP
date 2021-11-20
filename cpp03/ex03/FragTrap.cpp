#include "FragTrap.hpp"

/**PUBLIC**/

FragTrap::FragTrap()
{
    this->Name = "";
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    this->Name = copy.getName();
    this->HitPoint = copy.getHitPoint();
    this->EnergyPoints = copy.getEnergyPoints();
    this->AttackDamage = copy.getAttackDamage();
    std::cout << "Hi Frago" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frago fell from the tree" << std::endl;
}

FragTrap FragTrap::operator=(const FragTrap &copy)
{
    FragTrap    ret(copy);

    return (ret);
}

std::ostream& operator<<(std::ostream& os, const FragTrap& cp)
{
    os << cp.getName() << " (hitpoint: " << cp.getHitPoint()\
    << "; energy: " << cp.getEnergyPoints() << "; damage: " <<\
    cp.getAttackDamage() << ")";
    return (os);
}

void            FragTrap::highFiveGuys(void)
{
    std::cout << "High five! Pergo and Frago: one for all, all for one" << std::endl;
}
