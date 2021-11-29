/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:14:46 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:14:47 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(const std::string name, const int gradeSign, const int gradeExec);
        Form(const Form &cp);
        ~Form();

        void        beSigned(const Bureaucrat& bu);
        std::string getName() const;
        int         getGradeExec() const;
        int         getGradeSign() const;
        bool        getSign() const;

        bool        operator==(const Form &second) const;
        Form&       operator=(const Form &copy);
    private:
        bool                sign;
        const std::string   name;
        const int           gradeSign;
        const int           gradeExec;
        void                valueGrade(int num);
        void                valueGrade(int gradeIn, int gradeB);
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream&    operator<<(std::ostream& os, const Form& cp);

#endif
