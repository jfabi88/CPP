#include "Cat.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Hi cat!" << std::endl;
}

Cat::~Cat()
{
    delete (this->brain);
    std::cout << "Bye Bye cat!" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miao Miao" << std::endl;
}