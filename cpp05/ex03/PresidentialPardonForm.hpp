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