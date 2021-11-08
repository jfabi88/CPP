#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string newType);
        WrongAnimal(WrongAnimal &copy);
        virtual ~WrongAnimal();

        std::string getType() const;

        WrongAnimal  operator=(const WrongAnimal &copy);
        friend std::ostream& operator<<(std::ostream& os, const WrongAnimal& cp);
        bool    operator==(const WrongAnimal &second) const;
        void    makeSound() const;
    protected:
        std::string type;
};

#endif