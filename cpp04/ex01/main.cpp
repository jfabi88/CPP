/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:21:14 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:21:15 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include <vector>
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
    std::cout << "First cat: " << firstCat << "\nSecond cat: " << tmp << std::endl;
    std::cout << "Brain first cat:\n" << &(firstCat->getBrain()) << firstCat->getBrain() << std::endl;
    std::cout << "Brain second cat:\n" << &(tmp->getBrain()) << tmp->getBrain() << std::endl;

    delete tmp;
    delete firstCat;
    return (0);
}
