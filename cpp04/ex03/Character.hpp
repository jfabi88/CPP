#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string name);
        Character(Character &copy);
        virtual ~Character() {}

        virtual std::string const & getName() const;
        unsigned int    getSize() const;
        AMateria        *getAMateria(unsigned int indx);

        virtual void    equip(AMateria* m);
        virtual void    unequip(int idx);
        virtual void    use(int idx, ICharacter& target);
    private:
        std::string     name;
        unsigned int    size;
        AMateria        *bag[4];
};

#endif
