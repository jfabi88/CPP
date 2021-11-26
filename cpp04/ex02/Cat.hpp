#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &cat);
        virtual ~Cat();
        virtual void    makeSound() const;

        void    setIdea(int indx, std::string idea);
        Brain&  getBrain() const;
        Cat&    operator=(Cat &copy);
    private:
        Brain   *brain;
};

#endif