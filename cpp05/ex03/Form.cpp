#include "Form.hpp"

/**PUBLIC**/

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
    this->valueGrade(gradeSign);
    this->valueGrade(gradeExec);
    this->sign = false;
}

Form::Form(const Form &cp) : name(cp.name), gradeSign(cp.gradeSign), gradeExec(cp.gradeExec)
{
    this->valueGrade(gradeSign);
    this->valueGrade(gradeExec);
    this->sign = false;
}

Form::~Form()
{
    std::cout << "A form burned" << std::endl;
}

void    Form::beSigned(const Bureaucrat bu)
{
    valueGrade(gradeSign, bu.getGrade());
    this->sign = true;
}

std::string Form::getName() const
{
    return (this->name);
}

int         Form::getGradeSign() const
{
    return (this->gradeSign);
}

int         Form::getGradeExec() const
{
    return (this->gradeExec);
}

bool        Form::getSigned() const
{
    return (this->sign);
}

std::ostream&    operator<<(std::ostream& os, const Form& cp)
{
    os << "name: " << cp.name << ", grade to sign it: " << cp.gradeSign\
    << ", grade to execute: " << cp.gradeExec << ", signed: " << std::boolalpha\
    << cp.sign;

    return (os);
}

/**PROTECTED**/

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

const char *Form::FormNotSignedException::what() const throw()
{
    return ("Form not signed");
}

/**PRIVATE**/

void        Form::valueGrade(int num)
{
    if (num > 150)
        throw Form::GradeTooLowException();
    else if (num < 0)
        throw Form::GradeTooHighException();
}

void        Form::valueGrade(int gradeIn, int gradeB)
{
    if (gradeIn < gradeB)
        throw Form::GradeTooLowException();
}

