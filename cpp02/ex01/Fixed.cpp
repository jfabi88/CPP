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
}

Fixed::Fixed(float num)
{
    unsigned int tmp;
    int esp;
    int limit;

    tmp = *(unsigned int*)&num;
    std::cout << "Float bit: " << tmp << std::endl;
    tmp = tmp << 1;
    limit = 23 + 1;
    for (int i = 0; i < limit; i++)
        tmp = tmp >> 1;
    esp = tmp - 127;
    if (esp >= 0)
        this->value = 1;
    else
        this->value = 0;
    limit = esp + 8;
    if (limit > 23)
        limit = 23;
    for (int i = 0; i < limit; i++)
        this->value = this->value << 1;
    tmp = *(unsigned int*)&num;
    for (int i = 0; i < 9; i++)
        tmp = tmp << 1;
    limit = 9 + (23 - esp - 8);
    if (limit < 9)
        limit = 9;
    for (int i = 0; i < limit; i++)
        tmp = tmp >> 1;
    this->value = this->value + tmp;
    if (num < 0)
        this->value = this->value * -1;
    std::cout << "Value: " << this->value << std::endl;
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
    ret += esp + 126 + tmp;
    for (int i = 0; i < 22; i++)
        ret = ret << 1;
    tmp = this->value;
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
    std::cout << "Alla fine: " << ret << std::endl;
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
