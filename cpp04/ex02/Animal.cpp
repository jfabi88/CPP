#include "Animal.hpp"
#include <iostream>

/**PUBLIC**/

Animal::Animal()
{
    this->type = "Non defined";
}

Animal::Animal(std::string newType)
{
    this->type = newType;
}

Animal::Animal(Animal &copy)
{
    this->type = copy.getType();
}

Animal::~Animal()
{
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal  Animal::operator=(const Animal &copy)
{
    Animal  ret(copy.getType());

    return (ret);
}

std::ostream& operator<<(std::ostream& os, const Animal& cp)
{
    os << "type: " << cp.getType();
    return (os);
}

bool    Animal::operator==(const Animal &second) const
{
    return (this->getType() == second.getType());
}

void    Animal::makeSound() const
{
    std::cout << "Undefined sound" << std::endl;
}
