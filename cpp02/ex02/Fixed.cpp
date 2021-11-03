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

/*Constructor*/

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
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
    this->setRawBits(set);
}

Fixed::Fixed(float num)
{
    unsigned int tmp;
    int set;
    int esp;
    int limit;

    tmp = *(unsigned int*)&num;
    tmp = tmp << 1;
    limit = 23 + 1;
    for (int i = 0; i < limit; i++)
        tmp = tmp >> 1;
    esp = tmp - 127;
    set = 1;
    limit = esp + 8;
    if (limit > 23)
        limit = 23;
    for (int i = 0; i < limit; i++)
        set = set << 1;
    tmp = *(unsigned int*)&num;
    for (int i = 0; i < 9; i++)
        tmp = tmp << 1;
    limit = 9 + (23 - esp - 8);
    if (limit < 9)
        limit = 9;
    for (int i = 0; i < limit; i++)
        tmp = tmp >> 1;
    set = set + tmp;
    if (num < 0)
        set = set * -1;
    this->setRawBits(set);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "setRawBits member function called" << std::endl;
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
    int esp;
    int ret;
    int last_value;

    esp = 0;
    ret = 0;
    tmp = this->toInt();
    if (tmp < 0)
    {
        tmp *= -1;
        ret = 1;
    }
    for (int i = 0; i < 8; i++)
        ret = ret << 1;
    while (tmp != 1 && tmp != 0)
    {
        tmp = tmp >> 1;
        esp++;
    }
    ret += esp + 127;
    for (int i = 0; i < 22; i++)
        ret = ret << 1;
    tmp = this->getRawBits();
    if (tmp < 0)
        tmp *= -1;
    while (tmp > 0)
        tmp = tmp << 1;
    tmp = tmp << 1;
    for (int i = 0; i < 9; i++)
        tmp = (unsigned int)tmp >> 1;
    last_value = tmp & 1;
    tmp = tmp >> 1;
    ret = ret + tmp;
    ret = ret << 1;
    if (ret < 0)
        ret -= last_value;
    else
        ret += last_value;
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
    return (this->getRawBits() > sec.getRawBits());
}

bool Fixed::operator<(const Fixed sec) const
{
    return (this->getRawBits() < sec.getRawBits());
}

bool Fixed::operator>=(const Fixed sec) const
{
    return (this->getRawBits() >= sec.getRawBits());
}

bool Fixed::operator<=(const Fixed sec) const
{
    return (this->getRawBits() <= sec.getRawBits());
}

bool Fixed::operator==(const Fixed sec) const
{
    return (this->getRawBits() - sec.getRawBits() <= 3 && this->getRawBits() - sec.getRawBits() >= -3);
}

bool Fixed::operator!=(const Fixed sec) const
{
    return (this->getRawBits() - sec.getRawBits() > 3 || this->getRawBits() - sec.getRawBits() < -3);
}

Fixed Fixed::operator+(const Fixed second) const
{
    return (Fixed(this->getRawBits() + second.getRawBits()));
}

Fixed Fixed::operator-(const Fixed second) const
{
    return (Fixed(this->getRawBits() - second.getRawBits()));
}

Fixed Fixed::operator*(const Fixed second) const
{
    Fixed   ret;

    ret.setRawBits((this->getRawBits() * second.getRawBits()) >> this->getDecimal());
    return (ret);
}

Fixed Fixed::operator/(const Fixed second) const
{
    return (Fixed((this->getRawBits() / second.getRawBits()) >> this->getDecimal()));
}


/*Overload operators int*/

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
    return (Fixed(this->getRawBits() + (second << this->getDecimal())));
}

Fixed Fixed::operator-(const int second) const
{
    return (Fixed(this->getRawBits() - (second << this->getDecimal())));
}

Fixed Fixed::operator*(const int second) const
{
    return (Fixed((this->getRawBits() * (second << this->getDecimal()) >> this->getDecimal())));
}

Fixed Fixed::operator/(const int second) const
{
    return (Fixed((this->getRawBits() / (second << this->getDecimal()) >> this->getDecimal())));
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
    return (myFloat + second);
}

Fixed Fixed::operator-(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat - second);
}

Fixed Fixed::operator*(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat * second);
}

Fixed Fixed::operator/(const float second) const
{
    float myFloat;

    myFloat = this->toFloat();
    return (myFloat / second);
}

/*General overload operators*/

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->setRawBits(this->getRawBits() + 1);
    return (tmp);
}

Fixed Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->setRawBits(this->getRawBits() - 1);
    return (tmp);
}

Fixed Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    int num;
    int div;
    int modulo;
    int num_decimal;
    int value;

    value = f.getRawBits();
    if (value < 0)
    {
        os << "-";
        value *= -1;
    }
    num = value >> f.getDecimal();
    div = (1 << f.getDecimal());
    modulo = value % div;
    num_decimal = modulo;
    while (modulo != 0)
    {
        num_decimal = (num_decimal * 10);
        modulo = (num_decimal) % div;
    }
    num_decimal = (num_decimal) / div;
    os << num << "." << num_decimal;
    return (os);
}

Fixed& Fixed::operator=(const Fixed &fix)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = fix.getRawBits();
    return (*this);
}
