/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:58:43 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/17 09:58:45 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/**PUBLIC**/

Span::Span()
{
}

Span::Span(unsigned int N)
{
    this->vect.reserve(N);
}

Span::Span(Span const &copy)
{
	this->vect = copy.vect;
}

void Span::addNumber(int num)
{
    if (this->vect.size() < this->vect.capacity())
        this->vect.push_back(num);
    else
        throw FullStorageException();
}

Span& Span::operator=(Span const &copy)
{
    if (this == &copy)
        return (*this);
    this->vect.clear();
	this->vect = copy.vect;
    return(*this);
}

std::vector<int> Span::getVect() const
{
    return (this->vect);
}

unsigned int Span::shortestSpan()
{
    int                         tmp;
    unsigned int                ret = UINT_MAX;
    std::vector<int>::iterator  it;
    std::vector<int>::iterator  jt;

    if (this->vect.size() < 2)
        throw FewElementsException();
    for (it = this->vect.begin(); it < this->vect.end(); it++)
    {
        for (jt = this->vect.begin(); jt < this->vect.end(); jt++)
        {
            if (*it >= *jt)
                tmp = *it - *jt;
            else
                tmp = *jt - *it;
            if (std::distance(it, jt) && tmp < ret)
                ret = tmp;
        }
    }
    return ret;
}

unsigned int Span::longestSpan()
{
    int max = INT_MIN;
    int min = INT_MAX;
    std::vector<int>::iterator  it;

    if (this->vect.size() < 2)
        throw FewElementsException();
    for (it = this->vect.begin(); it < this->vect.end(); it++)
    {
        if (*it > max)
            max = *it;
        if (*it < min)
            min = *it;
    }
    return (max - min);
}

std::ostream&    operator<<(std::ostream& os, const Span& cp)
{
    const std::vector<int> sp = cp.getVect();
    for (int i = 0; (begin(sp) + i) != sp.end(); i++)
        os << sp[i] << "\n";
    return os;
}

/**PRIVATE**/

const char *Span::FullStorageException::what() const throw()
{
    return ("Full Storage");
}

const char *Span::FewElementsException::what() const throw()
{
    return ("Few Elements");
}
