/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:44:58 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/30 14:32:36 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/**UTILS**/
int ftIsZero(const char * str)
{
    int i = 0;
    int j = 0;

    if (!str)
        return (0);
    while (str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] == '0')
    {
        i++;
        j++;
    }
    if (str[i] == '.')
        i++;
    while (str[i] == '0')
    {
        i++;
        j++;
    }
    if (j != 0)
        return (1);
    return (0);
}

Convert::Convert(const char* strToConvert)
{
    this->setDouble(strToConvert);
    strToReturn = "";
    std::cout << "Convert created" << std::endl;
}

Convert::~Convert()
{
    std::cout << "Convert deleted" << std::endl;
}

void    Convert::setDouble(const char* strToConvert)
{
    if (strToConvert && strToConvert[0] && strToConvert[1] == 0)
    {
        this->ret = static_cast<double>(strToConvert[0]);
        if (this->ret >= 0 && this->ret <= 9)
            flag = 0;
        else
            flag = 2;
    }
    else
    {
        this->ret = atof(strToConvert);
        if (!this->ret && !ftIsZero(strToConvert))
            flag = 1;
        else if (isnan(this->ret) || isinf(this->ret))
            flag = 3;
        else
            flag = 0;
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
    if (this->ret > 127 || this->flag == 1 || this->flag == 3 || this->ret < 0)
        this->strToReturn = "Impossible";
    else if (this->ret == 127 || this->ret < 32)
        this->strToReturn = "Non Displayable";
    else if (this->flag == 2)
        return (0);
    else
        return (0);
    return (1);
}

int Convert::toInt()
{
    if (this->ret < -2147483648 || this->ret > 2147483647)
        this->strToReturn = "Impossible";
    else if (this->flag == 0)
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
