/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:16:07 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/29 13:16:08 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(const std::string name, const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cp);
        virtual ~RobotomyRequestForm();

        std::string getTarget() const;
        virtual void        execute(Bureaucrat const &executer) const;
    private:
        std::string target;
};

#endif
