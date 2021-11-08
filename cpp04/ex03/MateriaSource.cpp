#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->size = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    this->size = copy.size;
    for (int i = 0; i < copy.size; i++)
        this->bag[i] = copy.bag[i];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->size; i++)
        delete(this->bag[i]);
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& op)
{
    MateriaSource *ret = new MateriaSource(op);

    return (ret);
}

void            MateriaSource::learnMateria(AMateria* m)
{
    if (this->size == 4)
        return ;
    for (int i = 0; i < this->size; i++)
    {
        if (this->bag[i]->getType() == m->getType())
            return ;
    }
    this->bag[this->size] = m;
}

AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->size; i++)
		if (this->bag[i]->getType() == type)
			return (this->bag[i]->clone());
	return (nullptr);
}
