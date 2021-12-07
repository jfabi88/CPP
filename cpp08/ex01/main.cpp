/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:08:44 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/17 11:08:47 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp(10);
    srand(time(NULL));

    try
    {
        sp.shortestSpan();
    }
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    try
	{
		sp.addNumber(10);
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    try
    {
        std::vector<int> newVector;
        for (int i = 0; i < 9; i++)
            newVector.push_back(rand());
        sp.addNumber(newVector.begin(), newVector.end());
        std::cout << sp;
        std::cout << "Shortest " << sp.shortestSpan() << std::endl;
        std::cout << "Longhest " << sp.longestSpan() << std::endl;
    }
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}