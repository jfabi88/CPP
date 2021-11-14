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