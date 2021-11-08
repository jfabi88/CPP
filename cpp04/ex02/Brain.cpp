#include "Brain.hpp"

Brain::Brain()
{
    std::cout <<  "head start thinking" << std::endl;
}

Brain::~Brain()
{
    std::cout << "head stop thinking" << std::endl;
}

void    Brain::setIdea(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index)
{
    return (this->ideas[index]);
}

Brain  Brain::operator=(const Brain &copy)
{
    Brain   ret;

    for (int i = 0; i < 100; i++)
        ret.ideas[i] = copy.ideas[i];
    return (ret);
}

std::ostream& operator<<(std::ostream& os, const Brain& cp)
{
    for (int i = 0; i < 100; i++)
        os << cp.ideas[i] << "\n";
    return (os);
}