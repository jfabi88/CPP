#include "Form.hpp"

/**PUBLIC**/

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
    this->valueGrade(gradeSign);
    this->valueGrade(gradeExec);
}

Form::Form(const Form &cp) : name(cp.name), gradeSign(cp.gradeSign), gradeExec(cp.gradeExec)
{
    this->valueGrade(gradeSign);
    this->valueGrade(gradeExec);
}

Form::~Form(){}

void    Form::beSigned(const Bureaucrat &bu)
{
    try
    {
        valueGrade(gradeSign, bu.getGrade());
        this->sign = true;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::ostream&    operator<<(std::ostream& os, const Form& cp)
{
    os << "name: " << cp.name << ", grade to sign it: " << cp.gradeSign\
    << ", grade to execute: " << cp.gradeExec << ", signed: " << cp.sign;

    return (os);
}

Form Form::operator=(const Form &copy)
{
    Form    ret(copy);

    return (ret);
}

/**PRIVATE**/

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

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

