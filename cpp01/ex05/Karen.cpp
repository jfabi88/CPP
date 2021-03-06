/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:13 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/08 18:13:15 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::complain(std::string level)
{
    int i;

    i = 0;
    void (Karen::*levels[4])(void) = {
        &Karen::debug,\
        &Karen::info,\
        &Karen::warning,\
        &Karen::error
    };
    std::string type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (level.compare(type[i]) && i < 4)
        i++;
    if (i != 4)
        (this->*levels[i])();
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon " \
    << "for my 7XL-double-cheese-triple-pickle-special-ketchup" \
    << "burger. I just love it!" << std::endl;

}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost " \
    << "more money. You don’t put enough! If you did I would " \
    << "not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon " \
    << "for free. I’ve been coming here for years and you just " \
    << "started working here last month." << std::endl;
}
void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak " \
    << "to the manager now." << std::endl;
}
