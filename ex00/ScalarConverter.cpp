/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:26:37 by michel_32         #+#    #+#             */
/*   Updated: 2026/03/31 15:52:57 by michel_32        ###   ########.fr       */
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

static e_type determine_type(const std::string &input)
{
    if (!input.compare("-inff") || !input.compare("inff") || !input.compare("-inf")
        || !input.compare("+inf") || !input.compare("nanf") || !input.compare("nan"))
        return (SPECIAL);
    if (input.size() == 1 && !std::isdigit(input[0]))
        return (CHAR);
}

void  ScalarConverter::convert(const std::string &input)
{
    e_type type;

    type = determine_type(input);
}