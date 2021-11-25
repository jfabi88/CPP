/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:49:23 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/09 10:49:27 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(int num);
        Fixed(float num);
        ~Fixed();

        int getRawBits(void) const;
        int getDecimal(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed &min(Fixed &first, Fixed &second);
        static Fixed &max(Fixed &first, Fixed &second);
        const static Fixed &min(const Fixed &first, const Fixed &second);
        const static Fixed &max(const Fixed &first, const Fixed &second);

        bool operator>(const Fixed second) const;
        bool operator<(const Fixed second) const;
        bool operator>=(const Fixed second) const;
        bool operator<=(const Fixed second) const;
        bool operator==(const Fixed second) const;
        bool operator!=(const Fixed second) const;
        Fixed operator+(const Fixed second) const;
        Fixed operator-(const Fixed second) const;
        Fixed operator*(const Fixed second) const;
        Fixed operator/(const Fixed second) const;

        bool operator>(const int second) const;
        bool operator<(const int second) const;
        bool operator>=(const int second) const;
        bool operator<=(const int second) const;
        bool operator==(const int second) const;
        bool operator!=(const int second) const;
        Fixed operator+(const int second) const;
        Fixed operator-(const int second) const;
        Fixed operator*(const int second) const;
        Fixed operator/(const int second) const;

        bool operator>(const float second) const;
        bool operator<(const float second) const;
        bool operator>=(const float second) const;
        bool operator<=(const float second) const;
        bool operator==(const float second) const;
        bool operator!=(const float second) const;
        Fixed operator+(const float second) const;
        Fixed operator-(const float second) const;
        Fixed operator*(const float second) const;
        Fixed operator/(const float second) const;

        Fixed operator++(int);
        Fixed &operator++();
        Fixed operator--(int);
        Fixed &operator--();

        Fixed &operator=(const Fixed &fix);
    private:
        int value;
        static const int decimal = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);

#endif