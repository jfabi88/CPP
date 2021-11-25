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
