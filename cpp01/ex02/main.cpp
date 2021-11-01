#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << &string << " is the address of string" << std::endl;
    std::cout << stringPTR << " is the address of stringPTR" << std::endl;
    std::cout << &stringREF << " is the address of stringREF" << std::endl;
    std::cout << string << " is the value of string" << std::endl;
    std::cout << *stringPTR << " is the value of stringPTR" << std::endl;
    std::cout << stringREF << " is the value of stringREF" << std::endl;

}