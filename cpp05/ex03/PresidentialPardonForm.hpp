/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:21:02 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:21:03 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(const std::string name, const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &cp);
        ~PresidentialPardonForm();

        std::string     getTarget() const;
        virtual void    execute(Bureaucrat const &executer) const;
    private:
        std::string target;
};

#endif
