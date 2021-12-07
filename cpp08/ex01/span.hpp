/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:01:40 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/17 10:01:42 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>

class Span
{
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &copy);
        ~Span() {};

        void addNumber(int num);
        template <typename InputIterator>
        void addNumber(InputIterator first, InputIterator last)
        {
            if (this->vect.size() + std::distance(first, last) - 1 < this->vect.capacity())
                this->vect.insert(begin(this->vect) + this->vect.size(), first, last);
            else
                throw FullStorageException();
        };
        unsigned int shortestSpan();
        unsigned int longestSpan();
        Span &operator=(Span const &copy);
        std::vector<int> getVect() const;
    private:
        std::vector<int>    vect;
        unsigned int        size;

        class FullStorageException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class FewElementsException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream&    operator<<(std::ostream& os, const Span& cp);

#endif
