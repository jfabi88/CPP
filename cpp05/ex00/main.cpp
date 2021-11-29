#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bur("Pollo", 10);

    try
    {
        Bureaucrat bur2("Pollo", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat bur2("Pollo", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    bur.inGrade(5);
    std::cout << bur << std::endl;
    try
    {
        bur.inGrade(9);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    try
    {
        bur.deGrade(145);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    try
    {
        bur.deGrade(90);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    return (0);
}
