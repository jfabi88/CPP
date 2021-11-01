#include "Karen.hpp"

int main(int argc, char *argv[])
{
    Karen   cara;

    if (argc != 2)
        return (0);
    cara.complain(std::string(argv[1]));    
}