#include "Dog.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Hi dog!" << std::endl;
}

Dog::~Dog()
{
    delete(this->brain);
    std::cout << "Bye Bye dog!" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Bau Bau" << std::endl;
}