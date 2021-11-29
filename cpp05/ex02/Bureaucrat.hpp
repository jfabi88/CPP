/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:15:12 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:15:13 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int num);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();

        int         getGrade() const;
        std::string getName() const;
        void        deGrade(int num);
        void        inGrade(int num);
        void        signForm(Form &form);
        void        executeForm(Form const & form);

        Bureaucrat&             operator=(const Bureaucrat &copy);
        bool                    operator==(const Bureaucrat &second) const;
    private:
        std::string name;
        int         grade;

        void        setGrade(int num);

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

std::ostream&    operator<<(std::ostream& os, const Bureaucrat& cp);

#endif
