#include "Dog.hpp"
#include "Animal.hpp"

/**PUBLIC**/

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Hi dog!" << std::endl;
}

void    Dog::setIdea(int indx, std::string idea)
{
    this->brain->setIdea(indx, idea);
}

Brain&  Dog::getBrain() const
{
    return(*this->brain);
}

Dog&  Dog::operator=(const Dog &copy)
{
    if (this == &copy)
        return *this;
    delete(this->brain);
    this->brain = new Brain(copy.getBrain());
    return (*this);
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