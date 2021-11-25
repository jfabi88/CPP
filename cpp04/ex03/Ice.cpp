#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    this->type = "ice";
}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
    this->type = copy.getType();
}

Ice::~Ice()
{
}
    
AMateria*   Ice::clone() const
{
    AMateria    *ret = new Ice();

    return (ret);
}