/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:46:06 by jfabi             #+#    #+#             */
/*   Updated: 2021/11/30 10:46:08 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string name;
    int         level;
    std::string coalition;
};

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

int main()
{
    Data        *student = new Data();
    uintptr_t   tmp;

    student->name = "jfabi";
    student->coalition = "Void";
    student->level = 4;
    std::cout << "Name: " << student->name << std::endl;
    std::cout << "Coalition: " << student->coalition << std::endl;
    std::cout << "Level: " << student->level << std::endl;
    std::cout << "Pointer: " << student <<std::endl;
    tmp = serialize(student);
    std::cout << "Uintptr: " << tmp << std::endl;
    Data *copyStudent = deserialize(tmp);
    std::cout << "Name: " << copyStudent->name << std::endl;
    std::cout << "Coalition: " << copyStudent->coalition << std::endl;
    std::cout << "Level: " << copyStudent->level << std::endl;
    std::cout << "Pointer: " << copyStudent <<std::endl;
    delete student;
}
