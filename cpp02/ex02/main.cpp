/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:49:35 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/09 10:49:37 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <stdio.h>

#include <iostream>

int main( void )
{
    Fixed a(1);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(-0.98f);
    Fixed d(-120);

    std::cout << b << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << "-0.98 * 26.004: " << c * 26.004f << std::endl;
    std::cout << "-0.98 * -26.004: " << c * -26.004f << std::endl;
    std::cout << "-0.98 * 0: " << c * 0.0f << std::endl;
    std::cout << "-0.98 * 3: " << c * 3 << std::endl;
    std::cout << "-0.98 * 3 / 3: " << c * 3 / 3 << std::endl;
    std::cout << "-0.98 + 76.5 : " << c + 76.5f << std::endl;
    std::cout << "-120 - 26.004: " << d - 26.004f << std::endl;
    std::cout << "-120 / 12: " << d / 12 << std::endl;
    std::cout << "-120 + 7320: " << d + 7320 << std::endl;
    std::cout << "-120 * 3: " << d * 3 << std::endl;
    std::cout << "-120 * -5.1: " << d * 5.1f << std::endl;
    std::cout << "-120 / 76.5 : " << d / 76.5f << std::endl;
    std::cout << "-120 * -0.98: " << d * c << std::endl;
    std::cout << "-120 + 10.098: " << d + b << std::endl;
    std::cout << "-120 / 1.00781 : " << d / a << std::endl;
    std::cout << "-120 == 120 : " << (d == 120) << std::endl;
    std::cout << "-120 == -120 : " << (d == -120) << std::endl;
    std::cout << "-120 == 120 : " << (d == 120.0000000001f) << std::endl;
    std::cout << "-120 == -120 : " << (d == -120.00000001001f) << std::endl;
    std::cout << "-120 > -119.75: " << (d > -119.75f) << std::endl;
    std::cout << "-120 > -119.9999 : " << (d > 119.9999f) << std::endl;
    std::cout << "-120 == -119.98 : " << (d == -119.98f) << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

