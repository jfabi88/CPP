/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:15:58 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:15:59 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(const std::string name, const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cp);
        virtual ~ShrubberyCreationForm();

        std::string getTarget() const;

        virtual void    execute(Bureaucrat const &executer) const;
    private:
        std::string target;
};

#endif
