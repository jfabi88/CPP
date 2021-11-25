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

int createMask(int decimal)
{
    int ret;
    int i;

    ret = 1;
    i = 0;
    while (i < (32 - decimal))
    {
        i++;
        ret = ret << 1;
    }
    while (i < 32)
    {
        i++;
        ret = ret << 1;
        ret = ret + 1;
    }
    return (ret);
}

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

/*Constructor*/

Fixed::Fixed()
{
        value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    this->value = f.value;
}

Fixed::Fixed(int integer)
{
    int set;

    set = integer;
    set = set << getDecimal();
    this->value = set;
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
}

Fixed::~Fixed()
{
}

/*Functions*/

int Fixed::getRawBits(void) const
{
    return (this->value);
}

int Fixed::getDecimal(void) const
{
    return (this->decimal);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

int Fixed::toInt(void) const
{
    int ret;

    ret = this->getRawBits();
    if (this->getRawBits() < 0)
        ret = ret * -1;
    for (int i = 0; i < 8; i++)
        ret = ret >> 1;
    if (this->getRawBits() < 0)
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

Fixed & Fixed::min(Fixed &first, Fixed &second)
{
    if (first < second)
        return (first);
    else
        return (second);
}

Fixed & Fixed::max(Fixed &first, Fixed &second)
{
    if (first > second)
        return (first);
    else
        return (second);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
    if (first < second)
        return (first);
    else
        return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
    if (first > second)
        return (first);
    else
        return (second);
}

/*Overload operators FIXED*/

bool Fixed::operator>(const Fixed sec) const
{
    return (this->value > sec.getRawBits());
}

bool Fixed::operator<(const Fixed sec) const
{
    return (this->value < sec.getRawBits());
}

bool Fixed::operator>=(const Fixed sec) const
{
    return (this->value >= sec.getRawBits());
}

bool Fixed::operator<=(const Fixed sec) const
{
    return (this->value <= sec.getRawBits());
}

bool Fixed::operator==(const Fixed sec) const
{
    return (this->value - sec.getRawBits() <= 3 && this->value - sec.getRawBits() >= -3);
}

bool Fixed::operator!=(const Fixed sec) const
{
    return (this->value - sec.getRawBits() > 3 || this->value - sec.getRawBits() < -3);
}

Fixed Fixed::operator+(const Fixed second) const
{
    Fixed ret;

    ret.setRawBits(this->value + second.getRawBits());
    return ret;
}

Fixed Fixed::operator-(const Fixed second) const
{
    Fixed ret;

    ret.setRawBits(this->value - second.getRawBits());
    return ret;
}

Fixed Fixed::operator*(const Fixed second) const
{
    Fixed ret;

    ret.setRawBits(((__int64_t)this->value * (__int64_t)second.getRawBits()) / (1 << this->getDecimal()));
    return ret;
}

Fixed Fixed::operator/(const Fixed second) const
{
    Fixed ret;

    ret.setRawBits(((__int64_t)this->value * (1 << this->getDecimal())) / second.getRawBits());
    return (ret);
}


/*Overload operators INTEGER*/

bool Fixed::operator>(const int second) const
{
    return (this->getRawBits() > (second << this->getDecimal()));
}

bool Fixed::operator<(const int second) const
{
    return (this->getRawBits() < (second << this->getDecimal()));
}

bool Fixed::operator>=(const int second) const
{
    return (this->getRawBits() >= (second << this->getDecimal()));
}

bool Fixed::operator<=(const int second) const
{
    return (this->getRawBits() <= (second << this->getDecimal()));
}

bool Fixed::operator==(const int second) const
{
    int val;

    val = second << this->getDecimal();
    return (this->getRawBits() - val <= 3 && this->getRawBits() - val >= -3);
}

bool Fixed::operator!=(const int second) const
{
    int val;

    val = second << this->getDecimal();
    return (this->getRawBits() - val > 3 || this->getRawBits() - val < - 3);
}

Fixed Fixed::operator+(const int second) const
{
    Fixed ret;

    ret.setRawBits(this->value + (second << this->getDecimal()));
    return (ret);
}

Fixed Fixed::operator-(const int second) const
{
    Fixed ret;

    ret.setRawBits(this->value - (second << this->getDecimal()));
    return (ret);
}

Fixed Fixed::operator*(const int second) const
{
    Fixed ret;

    ret.setRawBits(this->value * second);
    return (ret);
}

Fixed Fixed::operator/(const int second) const
{
    Fixed ret;

    ret.setRawBits(this->value / second);
    return (ret);
}

/*Overload operators FLOAT */

bool Fixed::operator>(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat > second);
}

bool Fixed::operator<(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat < second);
}

bool Fixed::operator>=(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat >= second);
}

bool Fixed::operator<=(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat <= second);
}

bool Fixed::operator==(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat - second <= 0.12 && myFloat - second >= -0.12);
}

bool Fixed::operator!=(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat - second > 0.12 || myFloat - second < -0.12);
}

Fixed Fixed::operator+(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (Fixed(myFloat + second));
}

Fixed Fixed::operator-(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (Fixed(myFloat - second));
}

Fixed Fixed::operator*(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (Fixed(myFloat * second));
}

Fixed Fixed::operator/(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (Fixed(myFloat / second));
}

/*General overload operators*/

Fixed Fixed::operator++(int)
{
    Fixed ret = *this;
    this->value = this->value + 1;
    return (ret);
}

Fixed &Fixed::operator++()
{
    this->value = this->value + 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed ret = *this;
    this->value = this->value - 1;
    return (ret);
}

Fixed &Fixed::operator--()
{
    this->value = this->value - 1;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << std::fixed << std::setprecision(8) << f.toFloat();
    return (os);
}

Fixed& Fixed::operator=(const Fixed &fix)
{
    this->value = fix.getRawBits();
    return (*this);
}
