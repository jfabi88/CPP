/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:21:19 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:21:20 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const std::string target) : Form(name, 145, 137)
{
    this->target = target;
    std::cout << "ShrubberyForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp) : Form(cp.getName(), cp.getGradeSign(), cp.getGradeExec())
{
    this->target = cp.getTarget();
    std::cout << "ShrubberyForm created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyForm deleted" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
    if (!this->getSigned())
        throw Form::FormNotSignedException();
    else if (executer.getGrade() > this->getGradeExec())
        throw Form::GradeTooLowException();
    std::string filename;
    filename = this->getTarget() + "_shrubbery";
    std::ofstream fd(filename.c_str(), std::fstream::out | std::fstream::trunc);
    if (fd.is_open())
    {
        fd << "       /\\       " << std::endl;
        fd << "      /\\*\\      " << std::endl;
        fd << "     /\\O\\*\\     " << std::endl;
        fd << "    /*/\\/\\/\\    " << std::endl;
        fd << "   /\\O\\/\\*\\/\\   " << std::endl;
        fd << "  /\\*\\/\\*\\/\\/\\  " << std::endl;
        fd << " /\\O\\/\\/*/\\/O/\\ " << std::endl;
        fd << "       ||       " << std::endl;
        fd << "       ||       " << std::endl;
        fd << "       ||       " << std::endl;
        fd.close();
    }
}
