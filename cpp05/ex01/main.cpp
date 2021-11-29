/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:14:30 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:14:32 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat  firstBur("Pollo", 10);
    Bureaucrat  secondBur("Mucca", 8);
    Form        *form = new Form("bill",8, 12);

    try
    {
        Form *form1 = new Form("Pasta", 151, 12);
        std::cout << *form1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form *form2 = new Form("Pasta", 150, 0);
        std::cout << *form2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << *form << std::endl;
    firstBur.signForm(*form);
    std::cout << *form << std::endl;
    secondBur.signForm(*form);
    std::cout << *form << std::endl;
    delete(form);
    return (0);
}
