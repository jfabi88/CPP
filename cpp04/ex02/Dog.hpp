#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();

        void    setIdea(int indx, std::string idea);
        Dog&    operator=(const Dog &copy);
        Brain&  getBrain() const;
        virtual void    makeSound() const;
    private:
        Brain   *brain;
};

#endif