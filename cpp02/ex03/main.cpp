/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:35:37 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/18 12:35:38 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(1, 1);
    Point b(1, 2);
    Point c(2, 1);
    Point test1(-1.01, 1.22f);
    Point test2(1.1f, -1.1);
    Point test3(1.25, 1.25);

    std::cout << "TRIANGLE: p1" << a << ", p2" << b << ", p3" << c << std::endl;
    std::cout << "p" << test1 << " is in triangle " << bsp(a, b, c, test1) << std::endl;
    std::cout << "p" << test2 << " is in triangle " << bsp(a, b, c, test2) << std::endl;
    std::cout << "p" << test3 << " is in triangle " << bsp(a, b, c, test3) << std::endl;
}
