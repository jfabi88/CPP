/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:51:59 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/02 11:52:01 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

User	setUser(void)
{
	User		ret;
	std::string	str;

	std::cout << "Enter first name: ";
	getline(std::cin, str);
	ret.setFstName(str);
	std::cout << "Enter last name: ";
	getline(std::cin, str);
	ret.setLstName(str);
	std::cout << "Enter nickname: ";
	getline(std::cin, str);
	ret.setnickname(str);
	std::cout << "Enter phone number: ";
	getline(std::cin, str);
	ret.setphnNmbr(str);
	std::cout << "Enter dark secret: ";
	getline(std::cin, str);
	ret.setDarkScr(str);
	return (ret);
}

int		is_number(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	search_user(PhoneBook book)
{
	int			index;
	std::string	str;

	std::cout << "Enter an index: ";
	getline(std::cin, str);
	if (!is_number(str))
		std::cout << "You have entered a wrong input" << std::endl;
	else
	{
		index = std::stoi(str);
		if (index < 1 || index >= book.getSize() + 1)
			std::cout << "Index out of range" << std::endl;
		else
			book.getUser(index - 1).printUser();
	}
}

int	main()
{
	std::string	str;
	PhoneBook	book;
	int			index;

	while (1)
	{
		std::cout << "Enter a command: ";
		getline(std::cin, str);
		if (str == "EXIT")
			return (0);
		else if (str == "ADD")
			book.addUser(setUser());
		else if (str == "SEARCH")
		{
			book.printBook();
			if (book.getSize() != 0)
				search_user(book);
		}
	}
}
