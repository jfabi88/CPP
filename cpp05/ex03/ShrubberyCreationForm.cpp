#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const std::string target) : Form(name, 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp) : Form(cp.getName(), cp.getGradeSign(), cp.getGradeExec())
{
    this->target = cp.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
    if (!this->getSigned())
        throw Form::FormNotSignedException();
    else if (executer.getGrade() > this->getGradeExec())
        throw Form::GradeTooLowException();
    std::string filename;
    filename = this->getTarget() + "_shrubbery";
    std::ofstream fd(filename.c_str(), std::fstream::out | std::fstream::trunc);
    if (fd.is_open())
    {
        fd << "       /\\       " << std::endl;
        fd << "      /\\*\\      " << std::endl;
        fd << "     /\\O\\*\\     " << std::endl;
        fd << "    /*/\\/\\/\\    " << std::endl;
        fd << "   /\\O\\/\\*\\/\\   " << std::endl;
        fd << "  /\\*\\/\\*\\/\\/\\  " << std::endl;
        fd << " /\\O\\/\\/*/\\/O/\\ " << std::endl;
        fd << "       ||       " << std::endl;
        fd << "       ||       " << std::endl;
        fd << "       ||       " << std::endl;
        fd.close();
    }
}
