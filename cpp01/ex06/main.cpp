#include "Karen.hpp"

int main(int argc, char *argv[])
{
    Karen   cara;
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    if (argc != 2)
        return (0);
    i = 0;
    while (level[i].compare(argv[1]) && i < 4)
        i++;
    switch (i)
    {
        case 0:
            std::cout << "[" << level[0] << "]" << std::endl;
            cara.complain(level[0]);
        case 1:
            std::cout << "[" << level[1] << "]" << std::endl;
            cara.complain(level[1]);           
        case 2:
            std::cout << "[" << level[2] << "]" << std::endl;
            cara.complain(level[2]);  
        case 3:
            std::cout << "[" << level[3] << "]" << std::endl;
            cara.complain(level[3]); 
        default:
            break;
    }
}