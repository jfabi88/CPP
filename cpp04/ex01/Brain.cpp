/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:19:49 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:19:51 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout <<  "head start thinking" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    for (int i = 0; i < copy.getSize(); i++)
        this->ideas[i] = copy.getIdea(i);
    std::cout <<  "head start thinking" << std::endl;    
}

Brain::~Brain()
{
    std::cout << "head stop thinking" << std::endl;
}

int     Brain::getSize() const
{
    int i = 0;

    while(ideas[i] != "" && i < 100)
        i++;
    return (i);
}

void    Brain::setIdea(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return (this->ideas[index]);
}

Brain&  Brain::operator=(const Brain &copy)
{
    if (this == &copy)
        return (*this);
    for (int i = 0; i < copy.getSize(); i++)
        this->ideas[i] = copy.getIdea(i);
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Brain& cp)
{
    for (int i = 0; i < cp.getSize(); i++)
        os << cp.getIdea(i) << "\n";
    return (os);
}
