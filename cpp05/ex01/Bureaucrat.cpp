/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:14:08 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:14:10 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*PUBLIC*/

Bureaucrat::Bureaucrat()
{
    this->name = "";
    this->grade = 150;
    std::cout << "A bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int num)
{
    this->name = name;
    this->setGrade(num);
    std::cout << "A bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    this->name = copy.getName();
    this->grade = copy.getGrade();
    std::cout << "A bureaucrat created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "A Bureaucrat deleted" << std::endl;
}

int         Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void        Bureaucrat::deGrade(int num)
{
    this->setGrade(num + this->grade);
}

void        Bureaucrat::inGrade(int num)
{
    this->setGrade(this->grade - num);
}

void        Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cp)
{
    os << "name: " << cp.getName() << ", grade:" << cp.getGrade();

    return (os);
}

Bureaucrat&  Bureaucrat::operator=(const Bureaucrat &copy)
{
    if (this == &copy)
        return (*this);
    this->grade = copy.getGrade();
    this->name = copy.getName();
    return (*this);
}

bool        Bureaucrat::operator==(const Bureaucrat &second) const
{
    if (this->getGrade() == second.getGrade() && this->getName() == second.getName())
        return (true);
    return (false); 
}

/*PRIVATE*/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

void        Bureaucrat::setGrade(int num)
{
    if (num > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (num <= 0)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = num;
}
