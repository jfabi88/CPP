#include "Dog.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Hi dog!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Bye Bye dog!" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Bau Bau" << std::endl;
}