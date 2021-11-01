#include <iostream>
#include <fstream>

int ft_replace(std::ifstream& input, std::ofstream& output, char *str1, char *str2)
{
    std::string tmp;
    int i = 1;
    int len;
    char c;

    len = std::string(str1).length();
    tmp.append(1, str1[0]);
    while (input.get(c) && i < len)
    {
        tmp.append(1, c);
        if (c != str1[i])
        {
            output << tmp;
            return (0);
        }
        i++;
    }
    if (i == len)
    {
        output << std::string(str2);
        output << c;
    }
    else
        output << tmp;
    return (0);
}

int main(int argc, char *argv[])
{
    std::string fileNameOutput;
    char c;

    if (argc != 4)
        return (0);
    fileNameOutput = std::string(argv[1]) + ".replace";
    std::ifstream input(argv[1], std::fstream::in);
    if (input.is_open())
    {
        std::ofstream output(argv[2], std::fstream::out | std::fstream::trunc);
        if (!output.is_open())
        {
            input.close();
            return (1);
        }
        while (input.get(c))
        {
            if (c == argv[2][0])
                ft_replace(input, output, argv[2], argv[3]);
            else
                output << c;
        }
        input.close();
        output.close();
    }
}