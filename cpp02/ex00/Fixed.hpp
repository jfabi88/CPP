/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:23:49 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/09 09:23:51 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed &operator=(const Fixed &fix);
    private:
        int value;
        static const int decimal = 8;
};

#endif