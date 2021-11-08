#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(Ice const &copy)
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