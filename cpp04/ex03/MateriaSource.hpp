/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:28:29 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/26 14:28:30 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
        ~MateriaSource();

		MateriaSource&  operator=(const MateriaSource& op);
		void            learnMateria(AMateria* m);
		AMateria*       createMateria(std::string const & type);
    private:
        int         size;
	    AMateria    *bag[4];
};

#endif
