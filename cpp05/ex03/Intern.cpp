#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern created" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern deleted" << std::endl;
}

Form *Intern::makeForm(std::string form, std::string target)
{
    int i = 0;
    Form *newForm = 0;
    Form *(Intern::*forms[4])(std::string const ) const = {
        &Intern::makePresidentialForm,\
        &Intern::makeRobotomyForm,\
        &Intern::makeShrubberyForm,\
        &Intern::makeErrorForm
    };
    std::string function[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    while (function[i].compare(form) && i < 3)
        i++;
    try
    {
        newForm = (this->*forms[i])(target);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (newForm);
}

Form *Intern::makePresidentialForm(std::string const target) const
{
    Form *ret = new PresidentialPardonForm("default", target);

    return (ret);
}

Form *Intern::makeRobotomyForm(std::string const target) const
{
    Form *ret = new RobotomyRequestForm("default", target);

    return (ret);
}

Form *Intern::makeShrubberyForm(std::string const target) const
{
    Form *ret = new ShrubberyCreationForm("default", target);

    return (ret);
}

Form *Intern::makeErrorForm(std::string const target) const
{
    throw UnknowForm();
    std::string str = target;
    return (NULL);
}

const char *Intern::UnknowForm::what() const throw()
{
    return ("Unknow Form");
}
