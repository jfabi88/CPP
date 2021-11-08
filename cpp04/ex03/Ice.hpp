#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &copy);
        virtual ~Ice();
    
        virtual AMateria    *clone() const;
    private:
        std::string type;
};

#endif