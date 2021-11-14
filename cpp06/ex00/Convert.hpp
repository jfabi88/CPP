#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <math.h>
#include <string.h>

class Convert
{
    public:
        Convert(std::string stringToConvert);

        void        setDouble(std::string);
        double      getDouble();
        std::string getString();

        int toChar();
        int toInt();
        int toFloat();
        int toDouble();
    private:
        std::string strToReturn;
        double      ret;
        int         flag;
};

#endif