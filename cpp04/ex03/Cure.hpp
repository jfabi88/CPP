#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &copy);
        virtual ~Cure();
    
        virtual AMateria    *clone() const;
    private:
        std::string type;
};

#endif