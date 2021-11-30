/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:45:26 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/30 10:45:29 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <math.h>
#include <string.h>

class Convert
{
    public:
        Convert(const char* stringToConvert);
        ~Convert();
        void        setDouble(const char *str);
        double      getDouble();
        std::string getString();

        int toChar();
        int toInt();
        int toFloat();
        int toDouble();
    private:
        std::string strToReturn;
        double      ret;
        int         flag;
};

#endif
