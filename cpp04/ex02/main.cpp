#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    const Animal        *cat = new Cat();
    const Animal        *secondCat = new Cat();
    const Animal        *dog = new Dog();

    std::cout << cat->getType() << std::endl;
    std::cout << dog->getType() << std::endl;

    std::cout << "The sound: \nCat";
    std::cout << "Dog: ";
    dog->makeSound();

    std::cout << *cat << " and " << *secondCat << " are the same animal: "\
    << std::boolalpha << (*cat == *secondCat) << std::endl;

    std::cout << *cat << " and " << *dog << " are the same animal: "\
    << std::boolalpha << (*cat == *dog) << std::endl;

    delete(cat);
    delete(dog);
    delete(secondCat);
    return (0);
}