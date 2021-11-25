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

void    Cat::setIdea(int indx, std::string idea)
{
    this->brain->setIdea(indx, idea);
}

Brain&  Cat::getBrain() const
{
    return (*this->brain);
}

Cat&  Cat::operator=(Cat &copy)
{
    if (this == &copy)
        return *this;
    delete(this->brain);
    this->brain = new Brain(copy.getBrain());
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miao Miao" << std::endl;
}