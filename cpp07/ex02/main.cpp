/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:20:59 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 11:21:01 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int>   *obj = new Array<int>(5);

    for (unsigned int i = 0; i < obj->size(); i++)
    {
        (*(obj))[i] = i * 3;
    }
    for (unsigned int i = 0; i < obj->size(); i++)
    {
        std::cout << (*(obj))[i] << std::endl;
    }
    return (0);
}
