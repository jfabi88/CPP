#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

/**PUBLIC**/

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Hi WrongCat!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Bye Bye WrongCat!" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Moia Moia" << std::endl;
}