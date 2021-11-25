/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:31:38 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:31:39 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ScavTrap    Trapo("Trapo");

    std::cout << Trapo << std::endl;
    Trapo.attack("Peach");
    Trapo.takeDamage(8);
    std::cout << Trapo << std::endl;
    Trapo.beRepaired(10);
    std::cout << Trapo << std::endl;
    Trapo.takeDamage(21);
    std::cout << Trapo << std::endl;
    Trapo.guardGate();
}
