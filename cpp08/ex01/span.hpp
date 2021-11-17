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
        Span(unsigned int N);
        ~Span() {};

        void addNumber(int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();
    private:
        std::vector<int>    vect;
        unsigned int        size;
        unsigned int        all;

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

#endif
