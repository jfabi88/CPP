/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:19:41 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 09:19:43 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main()
{
    int a = 2;
    int b = 3;
    std::string str1 = "mucca";
    std::string str2 = "pollo";
    std::string strTmp;

    std::cout << "-----NUMBERS-----" << std::endl;
    std::cout << "First number: " << a << std::endl;
    std::cout << "Second number: " << b << std::endl;
    std::cout << "Max: " << max(a, b) << std::endl;
    std::cout << "Min: " << min(a, b) << std::endl;
    swap(a, b);
    std::cout << "After swap" << std::endl;
    std::cout << "First number: " << a << std::endl;
    std::cout << "Second number: " << b << std::endl;   
    std::cout << std::endl;
    std::cout << "-----STRINGS-----" << std::endl;
    std::cout << "First string: " << str1 << ", " << &str1 << std::endl;
    std::cout << "Second string: " << str2 << ", " << &str2 << std::endl;
    strTmp = (max)(str1, str2);
    std::cout << "Max: " << strTmp << ", " << &strTmp << std::endl;
    strTmp = (min)(str1, str2);
    std::cout << "Min: " << strTmp << ", " << &strTmp << std::endl;
    swap(str1,str2);
    std::cout << "After swap" << std::endl;
    std::cout << "First string: " << str1 << ", " << &str1 << std::endl;
    std::cout << "Second string: " << str2 << ", " << &str2 << std::endl;
    return (0);
}
