#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

Weapon HumanA::getWeapon()
{
    return (weapon);
}

std::string HumanA::getName()
{
    return (name);
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with his weapon " << weapon.getType();
    std::cout << std::endl;
}