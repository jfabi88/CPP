#include "Cat.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Hi cat!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Bye Bye cat!" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miao Miao" << std::endl;
}