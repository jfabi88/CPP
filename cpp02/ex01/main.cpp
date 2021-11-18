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

int main( void ) {

    //Fixed a;
    float h = 2.4f;
    float c = h;
    std::cout << c << std::endl;
    Fixed const b( 0.085f );
    //Fixed const c( 1 );
    //Fixed const d( b );

    //a = Fixed( -1234.4321f );

    //std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    //std::cout << "c is " << c << std::endl;
    //std::cout << "d is " << d << std::endl;

    //std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    //std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    //std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}

