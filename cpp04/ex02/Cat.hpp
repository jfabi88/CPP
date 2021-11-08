#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        virtual void    makeSound() const;
    private:
        Brain   *brain;
};

#endif