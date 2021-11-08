/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:59:01 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/08 17:59:03 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << &string << " is the address of string" << std::endl;
    std::cout << stringPTR << " is the address of stringPTR" << std::endl;
    std::cout << &stringREF << " is the address of stringREF" << std::endl;
    std::cout << string << " is the value of string" << std::endl;
    std::cout << *stringPTR << " is the value of stringPTR" << std::endl;
    std::cout << stringREF << " is the value of stringREF" << std::endl;

}
