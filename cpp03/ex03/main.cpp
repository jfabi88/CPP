#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap    Diamo("Dalmo");

    std::cout << Diamo << std::endl;
    Diamo.attack("Peach");
    Diamo.takeDamage(8);
    std::cout << Diamo << std::endl;
    Diamo.beRepaired(10);
    std::cout << Diamo << std::endl;
    Diamo.takeDamage(21);
    std::cout << Diamo << std::endl;
    Diamo.whoAmI();
}