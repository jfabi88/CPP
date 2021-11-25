/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:38:34 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/18 11:41:57 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &copy);
        ~Point();

        Fixed   getFixedX() const;
        Fixed   getFixedY() const;

        Point operator-(const Point second) const;
        Point &operator=(const Point &fix);
    private:
        Fixed x;
        Fixed y;
};

std::ostream& operator<<(std::ostream& os, const Point& dt);

#endif
