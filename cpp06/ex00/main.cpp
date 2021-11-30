/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:45:44 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/30 10:45:46 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 2)
        return (0);
    Convert *conv = new Convert(argv[1]);
    if (!conv->toChar())
        std::cout << static_cast<char>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
    if (!conv->toInt())
        std::cout << static_cast<int>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
    if (!conv->toDouble())
        std::cout << static_cast<double>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
    if (!conv->toFloat())
        std::cout << static_cast<float>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
    delete (conv);
}
