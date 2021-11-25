/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:52:18 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/18 11:52:20 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(const float x_num, const float y_num) : x(x_num), y(y_num)
{}

Point::Point(const Point &copy) : x(copy.getFixedX()), y(copy.getFixedY()) {}

Point::~Point()
{}

Fixed   Point::getFixedX() const
{
    return (this->x);
}

Fixed   Point::getFixedY() const
{
    return (this->y);
}

Point Point::operator-(const Point second) const
{
    Fixed x = this->getFixedX() - second.getFixedX();
    Fixed y = this->getFixedY() - second.getFixedY();
    Point ret(x.toFloat(), y.toFloat());
    return (ret);
}

std::ostream& operator<<(std::ostream& os, const Point& dt)
{
    os << "(" << dt.getFixedX() << "," << dt.getFixedY() << ")";
    return (os);
}

Point& Point::operator=(const Point &fix)
{
    if (this == &fix)
        return (*this);
    this->x = fix.getFixedX();
    this->y = fix.getFixedY();
    return (*this);
}
