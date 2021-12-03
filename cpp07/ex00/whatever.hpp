/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:12:11 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 10:12:13 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <class T>
void swap  (T &first, T &second)
{
    T tmp;

    tmp = first;
    first = second;
    second = tmp;
}

template <class T>
T min (T first, T second)
{
    return (first < second) ? first : second;
}

template <class T>
T max (T first, T second)
{
    return (first > second) ? first : second;
}

#endif
