/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:20:47 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:20:48 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern      *intern = new Intern();
    Bureaucrat  firstBur("Pollo", 149);
    Bureaucrat  secondBur("Mucca", 100);
    Bureaucrat  thirdBur("Cavallo", 18);
    Bureaucrat  fourthBur("Panda", 2);
    Form        *pForm = intern->makeForm("presidential pardon", "Pino");
    Form        *rForm = intern->makeForm("robotomy request", "Pino");
    Form        *sForm = intern->makeForm("shrubbery creation", "Pino");

    if (sForm)
    {
        std::cout << *sForm << std::endl;
        firstBur.signForm(*sForm);
        std::cout << *sForm << std::endl;
        secondBur.signForm(*sForm);
        std::cout << *sForm << std::endl;
        secondBur.executeForm(*sForm);
    }
    if (pForm)
    {
        std::cout << *pForm << std::endl;
        fourthBur.executeForm(*pForm);
        fourthBur.signForm(*pForm);
    }
    if (rForm)
    {
        std::cout << *rForm << std::endl;
        thirdBur.signForm(*rForm);
        thirdBur.executeForm(*rForm);
    }
    delete(intern);
    delete(pForm);
    delete(rForm);
    delete(sForm);
    return (0);
}
