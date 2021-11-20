#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ScavTrap    Trapo("Trapo");

    std::cout << Trapo << std::endl;
    Trapo.attack("Peach");
    Trapo.takeDamage(8);
    std::cout << Trapo << std::endl;
    Trapo.beRepaired(10);
    std::cout << Trapo << std::endl;
    Trapo.takeDamage(21);
    std::cout << Trapo << std::endl;
    Trapo.guardGate();
}