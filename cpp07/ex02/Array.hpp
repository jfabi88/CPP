/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:21:39 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 11:21:41 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    public:
        Array(){content = {}; len = 0;};
        Array(unsigned int n){content = new T[n]; len = n;};
        ~Array() { delete (content); };
        Array<T>(const Array<T> &copy)
        {
            content = new T[copy.size()];
            for (unsigned int i = 0; i < copy.size(); i++)
                content[i] = copy[i];
            len = copy.size();
        };

        Array<T> &operator=(const Array<T> &copy)
        {
            content = new T[copy.size()];
            for (unsigned int i = 0; i < copy.size(); i++)
                content[i] = copy[i];
            len = copy.size();
            return (content);
        };
        T &operator[](unsigned int indx)
        {
            if (indx < 0 || indx >= len)
                throw OutOfIndexException();
            return (content[indx]);
        };
        unsigned int size(){ return len;};
    private:
        T *content;
        unsigned int len;
        class OutOfIndexException : public :: std::exception
        { const char* what() const throw() {return "Out of index exception";}; };
};

#endif
