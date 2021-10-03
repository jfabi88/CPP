/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:52:13 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/02 12:52:57 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "phone.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void 	addUser(User contact);
		void 	printBook();
		User	getUser(int index);
		int		getSize();
	private:
		void	printInfo(std::string str);
		void	printHeader();
		User	list[8];
		int		size;
		int		lst;
};

#endif
