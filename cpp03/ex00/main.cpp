/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:29:41 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:29:43 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap    ClapTest("ClapTest");

    std::cout << ClapTest << std::endl;
    ClapTest.attack("Peach");
    ClapTest.takeDamage(8);
    std::cout << ClapTest << std::endl;
    ClapTest.beRepaired(10);
    std::cout << ClapTest << std::endl;
    ClapTest.takeDamage(21);
    std::cout << ClapTest << std::endl;
}
