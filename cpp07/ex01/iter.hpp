/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:18:11 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 10:18:13 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template <class T, class M>
void    iter (T array[], int n, M (*f)(T))
{
    for (int i = 0; i < n; i++)
        f(array[i]);
}

template <class T>
void    firstFunction (T parameter)
{
    std::cout << parameter << std::endl;
}

#endif
