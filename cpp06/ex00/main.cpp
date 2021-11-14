#include <iostream>
#include "Convert.hpp"
#include <stdlib.h>

int main(int argc, char *argv[])
{   
    std::string str;

    if (argc != 2)
        return (0);
    str = ((std::string)(argv[1]));
    Convert *conv = new Convert(str);
    if (!conv->toChar())
        std::cout << static_cast<char>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
    if (!conv->toInt())
        std::cout << static_cast<int>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
    if (!conv->toDouble())
        std::cout << static_cast<double>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
    if (!conv->toFloat())
        std::cout << static_cast<float>(conv->getDouble()) << std::endl;
    else
        std::cout << conv->getString() << std::endl;
}