#include "Weapon.hpp"

Weapon::Weapon(void)
{
    type =  "";
}

Weapon::Weapon(std::string stringa)
{
    type = stringa;
}

std::string Weapon::getType(void)
{
    return (type);
}

void Weapon::setType(std::string string)
{
    type = string;
}