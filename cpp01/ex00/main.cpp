/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:44:43 by jfabi             #+#    #+#             */
/*   Updated: 2021/10/03 16:45:29 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int	main(void)
{
	Zombie	*heap;

	randomChump("stack_zombie");
	heap = newZombie("heap_zombie");
	heap->announce();
	delete(heap);
	return (0);
}