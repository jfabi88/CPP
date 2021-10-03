/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:22:40 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/02 12:24:23 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

User::User()
{
	fstName[0] = 0;
	lstName[0] = 0;
	nickname[0] = 0;
	phnNmbr[0] = 0;
	darkScr[0] = 0;
}

void		User::printUser(void)
{
	std::cout << "first name: " << fstName << std::endl;
	std::cout << "last name: " << lstName << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone number: " << phnNmbr << std::endl;
	std::cout << "dark secret: " << darkScr << std::endl;
}

std::string User::getFstNameInfo(void)
{
	return (fstName);
}

std::string User::getLstNameInfo(void)
{
	return (lstName);
}

std::string User::getnicknameInfo(void)
{
	return (nickname);
}

void User::setFstName(std::string content)
{
	fstName = content;
}

void User::setLstName(std::string content)
{
	lstName = content;
}

void User::setnickname(std::string content)
{
	nickname = content;
}

void User::setphnNmbr(std::string content)
{
	phnNmbr = content;
}

void User::setDarkScr(std::string content)
{
	darkScr = content;
}
