#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    const Animal        *meta = new Animal();
    const Animal        *cat = new Cat();
    const Animal        *secondCat = new Cat();
    const Animal        *dog = new Dog();

    std::cout << cat->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << meta->getType() << std::endl;

    std::cout << "The sound: \nCat";
    cat.;
    std::cout << "Dog: ";
    dog->makeSound();

    std::cout << *cat << " and " << *secondCat << " are the same animal: "\
    << std::boolalpha << (*cat == *secondCat) << std::endl;

    std::cout << *cat << " and " << *dog << " are the same animal: "\
    << std::boolalpha << (*cat == *dog) << std::endl;

    delete(meta);
    delete(cat);
    delete(dog);
    delete(secondCat);
    return (0);
}