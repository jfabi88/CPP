#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    Animal  *array[100];
    Cat     *firstCat = new Cat();
    std::string idea = "idea";

    for (int i = 0; i < 50; i++)
        array[i] = new Cat();
    for (int i = 50; i < 100; i++)
        array[i] = new Dog();
    for (int i = 0; i < 100; i++)
        delete (array[i]);
    
    for (int i = 0; i < 5; i++)
        firstCat->setIdea(i, idea + std::to_string(i));

    Cat *tmp = new Cat();
    *tmp = *firstCat;
    std::cout << "Primo gatto: " << firstCat << "\nSecondo gatto: " << tmp << std::endl;
    std::cout << "Brain primo gatto:\n" << firstCat->getBrain() << std::endl;
    std::cout << "Brain secondo gatto:\n" << tmp->getBrain() << std::endl;

    return (0);
}