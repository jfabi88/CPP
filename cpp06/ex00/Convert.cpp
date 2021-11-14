#include "Convert.hpp"

Convert::Convert(std::string strToConvert)
{
    this->setDouble(strToConvert);
    strToReturn = "";
}

void    Convert::setDouble(std::string strToConvert)
{
    size_t indx;

    if (strToConvert.length() == 1)
    {
        this->ret = static_cast<double>(strToConvert[0]);
        flag = 2;
    }
    else
    {
        try
        {
            this->ret = std::stod(strToConvert, &indx);
            if (std::isnan(this->ret) || std::isinf(this->ret))
                flag = 3;
            else if (strToConvert[indx] == 0)
                flag = 0;
            else
                flag = 1;
        }
        catch(const std::exception& e)
        {
            this->ret = 0;
            flag = 1;
        }
    }
}

double  Convert::getDouble()
{
    return this->ret;
}

std::string Convert::getString()
{
    return this->strToReturn;
}

int Convert::toChar()
{
    if (this->flag == 1 || this->flag == 3)
        this->strToReturn = "Impossible";
    else if (this->ret == 127 || ( this->ret < 32 && this->ret >= 0))
        this->strToReturn = "Non Displayable";
    else if (this->flag == 2)
        return (0);
    else
        return (0);
    return (1);
}

int Convert::toInt()
{
    if (this->flag == 0)
        return (0);
    else
        this->strToReturn = "Impossible";
    return (1);
}

int Convert::toFloat()
{
    if (this->flag == 0 || this->flag == 3)
        return (0);
    else
        this->strToReturn = "Impossible";
    return (1);
}

int Convert::toDouble()
{
    if (this->flag == 0 || this->flag == 3)
        return (0);
    else
        this->strToReturn = "Impossible";
    return (1);
}