    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:18:01 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/15 10:18:03 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int n = 9;
    int array[n];
    std::string arrayStr[n];
    std::string mucca = "Mucca numero: ";

    for (int i = 0; i < n; i++)
        array[i] = i * 2;
    std::cout << "----INT----"<< std::endl;
    iter(array, n, firstFunction<int>);
    for (int i = 0; i < n; i++)
        arrayStr[i] = mucca + (char)(i + 48);
    std::cout << "----STRINGS----"<< std::endl;
    iter(arrayStr, n, firstFunction<std::string>);
    return 0;
}
