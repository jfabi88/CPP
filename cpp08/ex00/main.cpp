/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:44:45 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 17:44:47 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <iostream>

int main()
{
    std::list<int>::iterator tmp;
    std::list<int> my_list = { 7, 5, 16, 9, 0};
    try
    {
        tmp = easyfind(my_list, 2);
        std::cout << *tmp << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        tmp = easyfind(my_list, 7);
        std::cout << *tmp << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
