/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:19:58 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:20:00 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();

        void    setIdea(int index, std::string idea);
        int     getSize() const;
        std::string getIdea(int index) const;
        Brain&   operator=(const Brain &copy);
    private:
        std::string ideas[100];
};

std::ostream& operator<<(std::ostream& os, const Brain& cp);

#endif
