#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &copy);
        virtual ~AMateria();

        std::string const   &getType() const;

        virtual AMateria    *clone() const = 0;
        virtual void        use(ICharacter& target);

        AMateria            &operator=(const AMateria &copy);
        friend std::ostream &operator<<(std::ostream& os, const AMateria& am);
    protected:
        std::string type;
};

#endif