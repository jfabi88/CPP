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

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed &operator=(const Fixed &fix);
        Fixed(int num);
        Fixed(float num);
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int value;
        static const int decimal = 8;
};
