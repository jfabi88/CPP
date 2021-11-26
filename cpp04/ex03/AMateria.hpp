/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:23:36 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:23:40 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &copy);
        virtual ~AMateria();

        std::string const   &getType() const;

        virtual AMateria    *clone() const = 0;
        virtual void        use(ICharacter& target);

        AMateria            &operator=(const AMateria &copy);
    protected:
        std::string type;
};

std::ostream &operator<<(std::ostream& os, const AMateria& am);

#endif
