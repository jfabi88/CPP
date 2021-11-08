#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    this->type = "cure";
}

Cure::Cure(Cure const &copy) : AMateria("cure")
{
    this->type = copy.getType();
}

Cure::~Cure()
{
}
    
AMateria*    Cure::clone() const
{
    AMateria *ret = new Cure();

    return (ret);
}
