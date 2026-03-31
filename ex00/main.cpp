/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:21:05 by michel_32         #+#    #+#             */
/*   Updated: 2026/03/31 15:23:48 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert [C++ literal to convert]" << std::endl;
        return (1);
    }
    // argv[1] (a char*) is implicitly converted to std::string because std::string 
    // has a constructor that accepts char*
    ScalarConverter::convert(argv[1]); 
    
    return (0);
}