#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name, const std::string target) : Form(name, 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp) : Form(cp.getName(), cp.getGradeSign(), cp.getGradeExec())
{
    this->target = cp.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executer) const
{
    if (!this->getSigned())
        throw Form::FormNotSignedException();
    else if (executer.getGrade() > this->getGradeExec())
        throw Form::GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
