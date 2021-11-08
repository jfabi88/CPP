#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    size = 0;
}

Character::Character(Character &copy)
{
    this->name = copy.getName();
    this->size = copy.size;
    for (int i = 0; i < copy.size; i++)
        this->bag[i] = copy.bag[i];
}

Character::~Character() 
{
    for (int i = 0; i < this->size; i++)
        delete(this->bag[i]);
}

std::string const& Character::getName() const
{
    return (this->name);
}

unsigned int Character::getSize() const
{
    return (this->size);
}

AMateria *Character::getAMateria(unsigned int indx)
{
    if (indx < this->size)
        return (this->bag[indx]);
}

void Character::equip(AMateria* m)
{
    if (this->size != 4)
    {
        bag[this->size] = m;
        this->size = this->size + 1;
    }
}

void Character::unequip(int idx)
{
    if (idx < this->size && idx > 0)
    {
        int i;

        for (i = idx; i < this->size - 1; i++)
            this->bag[i] = this->bag[i + 1];
        this->size = this->size - 1;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 0 && idx < this->size)
        this->bag[idx]->use(target);
}