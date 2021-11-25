/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:35:39 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:35:41 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap    Diamo("Dalmo");

    std::cout << Diamo << std::endl;
    Diamo.attack("Peach");
    Diamo.takeDamage(8);
    std::cout << Diamo << std::endl;
    Diamo.beRepaired(10);
    std::cout << Diamo << std::endl;
    Diamo.takeDamage(21);
    std::cout << Diamo << std::endl;
    Diamo.whoAmI();
}
