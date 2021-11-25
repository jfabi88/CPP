#include "RobotomyRequestForm.hpp"

#define RAND_MAX = 1;
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const std::string target) : Form(name, 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp) : Form(cp.getName(), cp.getGradeSign(), cp.getGradeExec())
{
    this->target = cp.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
    if (!this->getSigned())
        throw Form::FormNotSignedException();
    else if (executer.getGrade() > this->getGradeExec())
        throw Form::GradeTooLowException();
    std::cout << "DRIN! DRIN! DRIN!" << std::endl;
    srand(time(0));
    int v1 = rand() % 2;
    if (v1 == 1)
        std::cout << this->target << " has been robotomized" << std::endl;
    else
        std::cout << "It's a failure" << std::endl;
}
