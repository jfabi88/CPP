/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:20:16 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:20:17 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/**PUBLIC**/

Form::Form() : name("Default"), gradeSign(150), gradeExec(150)
{
    this->sign = false;
    std::cout << "Form created" << std::endl;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
    this->valueGrade(gradeSign);
    this->valueGrade(gradeExec);
    this->sign = false;
    std::cout << "Form created" << std::endl;
}

Form::Form(const Form &cp) : name(cp.name), gradeSign(cp.gradeSign), gradeExec(cp.gradeExec)
{
    this->valueGrade(gradeSign);
    this->valueGrade(gradeExec);
    this->sign = false;
    std::cout << "Form created" << std::endl;
}

Form::~Form()
{
    std::cout << "A form burned" << std::endl;
}

void    Form::beSigned(const Bureaucrat &bu)
{
    valueGrade(gradeSign, bu.getGrade());
    this->sign = true;
}

std::string Form::getName() const
{
    return (this->name);
}

int         Form::getGradeSign() const
{
    return (this->gradeSign);
}

int         Form::getGradeExec() const
{
    return (this->gradeExec);
}

bool        Form::getSigned() const
{
    return (this->sign);
}

std::ostream&    operator<<(std::ostream& os, const Form& cp)
{
    os << "name: " << cp.getName() << ", grade to sign it: " << cp.getGradeSign()\
    << ", grade to execute: " << cp.getGradeExec() << ", signed: " << std::boolalpha\
    << cp.getSigned();

    return (os);
}

/**PROTECTED**/

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

const char *Form::FormNotSignedException::what() const throw()
{
    return ("Form not signed");
}

/**PRIVATE**/

void        Form::valueGrade(int num)
{
    if (num > 150)
        throw Form::GradeTooLowException();
    else if (num <= 0)
        throw Form::GradeTooHighException();
}

void        Form::valueGrade(int gradeIn, int gradeB)
{
    if (gradeIn < gradeB)
        throw Form::GradeTooLowException();
}
