/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:42:59 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/17 11:43:02 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        virtual ~MutantStack() {};
        MutantStack(MutantStack<T> const & copy): std::stack<T>(copy){}
        MutantStack &operator=(MutantStack<T> const & copy) 
		{	
			if (this == &copy)
				return (*this);
			this->c = copy.c;
			return (*this);
		}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();};
        iterator end() { return this->c.end();};
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const {return this->c.begin();};
        const_iterator end() const { return this->c.end();};
};

#endif
