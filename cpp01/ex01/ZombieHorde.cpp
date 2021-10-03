/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:54:07 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/03 17:54:09 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie		*arrZombie = new Zombie[N];
	int			i;

	i = 0;
	while (i < N)
	{
		arrZombie[i].setName(name + std::to_string(i + 1));
		i++;
	}
	return (arrZombie);
}
