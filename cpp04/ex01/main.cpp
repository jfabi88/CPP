#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    Animal  *array[100];
    Cat     *firstCat = new Cat();

    for (int i = 0; i < 50; i++)
        array[i] = new Cat();
    for (int i = 50; i < 100; i++)
        array[i] = new Dog();
    for (int i = 0; i < 100; i++)
        delete (array[i]);
    
    Cat tmp = *firstCat;

    std::cout << "Primo gatto: " << firstCat << "\nSecondo gatto: " <<\
    &tmp << std::endl;

    return (0);
}