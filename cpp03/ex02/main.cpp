/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:33:23 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/25 18:33:24 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    FragTrap    Frago("Pergo");

    std::cout << Frago << std::endl;
    Frago.attack("Peach");
    Frago.takeDamage(8);
    std::cout << Frago << std::endl;
    Frago.beRepaired(10);
    std::cout << Frago << std::endl;
    Frago.takeDamage(21);
    std::cout << Frago << std::endl;
    Frago.highFiveGuys();
}
