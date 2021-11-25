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

class Fixed
{
    public:
        Fixed();
        Fixed(int num);
        Fixed(float num);
        Fixed(const Fixed &f);
        ~Fixed();

        int getRawBits(void) const;
        int getDecimal(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        Fixed &operator=(const Fixed &fix);
    private:
        int value;
        static const int decimal = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);

#endif