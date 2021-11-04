#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap    ClapTest("ClapTest");

    std::cout << ClapTest << std::endl;
    ClapTest.attack("Peach");
    ClapTest.takeDamage(8);
    std::cout << ClapTest << std::endl;
    ClapTest.beRepaired(10);
    std::cout << ClapTest << std::endl;
    ClapTest.takeDamage(21);
    std::cout << ClapTest << std::endl;
}