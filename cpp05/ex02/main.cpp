#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat  firstBur("Pollo", 149);
    Bureaucrat  secondBur("Mucca", 100);
    Bureaucrat  thirdBur("Cavallo", 18);
    Bureaucrat  fourthBur("Panda", 2);
    Form        *pForm = new PresidentialPardonForm("PresidentialForm", "Pino");
    Form        *rForm = new RobotomyRequestForm("RobotForm", "Pino");
    Form        *sForm = new ShrubberyCreationForm("ShrubberyForm", "Pino");

    std::cout << *pForm << std::endl;
    std::cout << *rForm << std::endl;
    std::cout << *sForm << std::endl;
    firstBur.signForm(*sForm);
    std::cout << *sForm << std::endl;
    secondBur.signForm(*sForm);
    std::cout << *sForm << std::endl;
    secondBur.executeForm(*sForm);
    fourthBur.executeForm(*pForm);
    fourthBur.signForm(*pForm);
    thirdBur.signForm(*rForm);
    thirdBur.executeForm(*rForm);
    fourthBur.executeForm(*pForm);
    delete(pForm);
    delete(rForm);
    delete(sForm);
    return (0);
}
