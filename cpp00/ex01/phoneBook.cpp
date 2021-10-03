/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:57:45 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/02 12:59:57 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	lst = 0;
}

User	PhoneBook::getUser(int index)
{
	return (list[index]);
}

int		PhoneBook::getSize()
{
	return (size);
}

void	PhoneBook::addUser(User contact)
{
	int	i;

	if (size < 8)
	{
		i = 0;
		while (i < size)
			i++;
		list[i] = contact;
		size = size + 1;
	}
	else
	{
		list[lst] = contact;
		lst = lst + 1;
		if (lst == 8)
			lst = 0;
	}
}

void	PhoneBook::printInfo(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9).append(".");
	else
		std::cout << std::setw(10) << str;
}

void	PhoneBook::printHeader()
{
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;
}

void	PhoneBook::printBook()
{
	int	i;

	i = 0;
	printHeader();
	while (i < size)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		printInfo(list[i].getFstNameInfo());
		std::cout << "|";
		printInfo(list[i].getLstNameInfo());
		std::cout << "|";
		printInfo(list[i].getnicknameInfo());
		std::cout << std::endl;
		i++;
	}
}
