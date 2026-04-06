/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:34:06 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/06 16:34:12 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

Serializer::Serializer(void)
{
    std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer& copy)
{
    std::cout << "Serializer copy constructor called" << std::endl;
    *this = copy;
}

Serializer::~Serializer(void)
{
    std::cout << "Serializer destructor called" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& copy)
{
    std::cout << "Serializer assignment operator called" << std::endl;
    if (this != &copy) {
        // copy data members here
    }
    return (*this);
}