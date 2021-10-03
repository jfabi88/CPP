/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:03:40 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/02 12:22:09 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_HPP
# define USER_HPP

#include "phone.hpp"

class User
{
	public:
		User();
		void		printUser(void);
		std::string getFstNameInfo(void);
		std::string getLstNameInfo(void);
		std::string getnicknameInfo(void);
		void setFstName(std::string content);
		void setLstName(std::string content);
		void setnickname(std::string content);
		void setphnNmbr(std::string content);
		void setDarkScr(std::string content);

	private:
		std::string fstName;
		std::string lstName;
		std::string nickname;
		std::string phnNmbr;
		std::string darkScr;
};

#endif
