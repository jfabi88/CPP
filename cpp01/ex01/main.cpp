/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:52:18 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/03 17:52:20 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	int			N = 20;
	int			i;
	std::string	name = "mucca";

	Zombie *arr = zombieHorde(N, name);
	i = 0;
	while (i < N)
	{
		arr[i].announce();
		i++;
	}
	delete [] arr;
}
