#include "WrongAnimal.hpp"
#include <iostream>

/**PUBLIC**/

WrongAnimal::WrongAnimal()
{
    this->type = "Non defined";
    std::cout << "Mmh it's so good to eat" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType)
{
    this->type = newType;
    std::cout << "Mmh it's so good to eat" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    this->type = copy.getType();
    std::cout << "Mmh it's so good to eat" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "I'm full" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal  WrongAnimal::operator=(const WrongAnimal &copy)
{
    WrongAnimal  ret(copy.getType());

    return (ret);
}

std::ostream& operator<<(std::ostream& os, const WrongAnimal& cp)
{
    os << "type: " << cp.getType();
    return (os);
}

bool    WrongAnimal::operator==(const WrongAnimal &second) const
{
    return (this->getType() == second.getType());
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Undefined sound" << std::endl;
}