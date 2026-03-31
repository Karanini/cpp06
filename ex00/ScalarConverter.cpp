/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:26:37 by michel_32         #+#    #+#             */
/*   Updated: 2026/03/31 15:12:51 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter(void)
{
    std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    std::cout << "ScalarConverter copy constructor called" << std::endl;
    *this = copy;
}

ScalarConverter::~ScalarConverter(void)
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
    std::cout << "ScalarConverter assignment operator called" << std::endl;
    if (this != &copy) {
        // copy data members here
    }
    return (*this);
}

void ScalarConverter::convert(char *input)
{
    
}