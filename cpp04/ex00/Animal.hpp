#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string newType);
        Animal(Animal &copy);
        virtual ~Animal();

        std::string getType() const;

        Animal  operator=(const Animal &copy);
        friend std::ostream& operator<<(std::ostream& os, const Animal& cp);
        bool    operator==(const Animal &second) const;
        virtual void    makeSound() const;
    protected:
        std::string type;
};

#endif