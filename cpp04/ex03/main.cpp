/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:28:01 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:28:02 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("Cloud");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//me->unequip(6);
	//me->unequip(1);
	//me->unequip(0);
	//me->unequip(0);
	//me->unequip(0);
	ICharacter* bob = new Character("Tifa");
	std::cout << me->getName() << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	std::cout << bob->getName() << std::endl;
	bob->use(0, *me);
	delete bob;
	delete me;
	delete src;
	return 0;
}
