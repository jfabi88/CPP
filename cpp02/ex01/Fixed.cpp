/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:49:47 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/09 10:49:49 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <stdio.h>

/**UTILS**/

int findReverseEsp(int num)
{
    int ret;

    ret = 0;
    while (num != 1)
    {
        ret++;
        num = num >> 1;
    }
    return (ret - 8 + 127);
}

int findReverseMantissa(int num)
{
    int ret;

    ret = num;
    while (ret > 0)
        ret = ret << 1;
    ret = ret << 1;
    ret = (unsigned int)ret >> 9;
    return (ret);
}

int findSign(unsigned int num)
{
    if ((num >> 31) & 1)
        return (1);
    return (0);
}

int findEsp(unsigned int num)
{
    unsigned int ret;

    ret = num << 1;
    ret = (unsigned int)ret >> 24;
    return (ret - 127);
}

int findMantissa(unsigned int num)
{
    unsigned int ret;

    ret = num << 9;
    ret = (unsigned int)ret >> 9;
    ret = ret + (1 << 23);
    return (ret);
}

int findInteger(int esp, int mantissa)
{
    if (esp > 23 || esp < 0)
        return (0);
    return ((unsigned int)mantissa >> (24 - (esp + 1)));
}

int findDecimal(int esp, int mantissa)
{
    int ret;

    if (esp < -8 || esp > 23)
        return (0);
    ret = mantissa << (8 + (esp + 1));
    ret = (unsigned int)ret >> 24;
    return (ret);
}

/**PUBLIC**/

Fixed::Fixed(int integer)
{
    int i;

    this->value = integer;
    i = 0;
    while (i < this->decimal)
    {
        value = value << 1;
        i++;
    }
    std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(float num)
{
    int sign;
    int espn;
    int mantissa;
    int integer;
    int decimal;

    sign = findSign(*(unsigned int*)&num);
    espn = findEsp(*(unsigned int*)&num);
    mantissa = findMantissa(*(unsigned int*)&num);
    integer = findInteger(espn, mantissa);
    decimal = findDecimal(espn, mantissa);
    this->value = ((integer << 8) + decimal);
    if (sign)
        this->value = this->value * -1;
    std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    int ret;

    ret = this->value;
    if (this->value < 0)
        ret = ret * -1;
    for (int i = 0; i < 8; i++)
        ret = ret >> 1;
    if (this->value < 0)
        ret = ret * -1;
    return (ret);
}

float Fixed::toFloat(void) const
{
    int tmp;
    int sign;
    int mantissa;
    int esp;
    unsigned int    ret;

    sign = 0;
    tmp = this->value;
    if (this->value < 0)
    {
        sign = 1;
        tmp = tmp * -1;
    }
    if (tmp == 0)
        return (sign << 31);
    esp = findReverseEsp(tmp);
    mantissa = findReverseMantissa(tmp);
    ret = sign << 31;
    ret = ret + (esp << 23);
    ret = ret + mantissa;
    return (*(float *)&ret);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return (os);
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}
    
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Referece constructor called" << std::endl;
    this->value = f.value;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

int Fixed::getDecimal(void) const
{
    return (this->decimal);
}

Fixed& Fixed::operator=(const Fixed &fix)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = fix.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}
