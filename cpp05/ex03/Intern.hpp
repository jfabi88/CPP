/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:20:30 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:20:33 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();

		Form *makeForm(std::string form, std::string target);
	private:
		Form *makePresidentialForm(std::string const target) const;
		Form *makeRobotomyForm(std::string const target) const;
		Form *makeShrubberyForm(std::string const target) const;
		Form *makeErrorForm(std::string const target) const;
		class UnknowForm : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif
