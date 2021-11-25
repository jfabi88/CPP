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
        MutantStack() {};
        virtual ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();};
        iterator end() { return this->c.end();};
};

#endif
