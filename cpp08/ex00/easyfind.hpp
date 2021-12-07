/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:45:00 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 17:45:02 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class OutOfRangeException : public std::exception
{
    const char *what() const throw()
    {
        return ("Value not found");
    }
};

template <class T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw OutOfRangeException();
    return (it);
}
