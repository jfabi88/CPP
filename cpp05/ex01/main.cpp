#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat  firstBur("Pollo", 10);
    Bureaucrat  secondBur("Mucca", 8);
    Form        *form = new Form("bill",8, 12);

    std::cout << *form << std::endl;
    firstBur.signForm(*form);
    std::cout << *form << std::endl;
    secondBur.signForm(*form);
    std::cout << *form << std::endl;
    return (0);
}
