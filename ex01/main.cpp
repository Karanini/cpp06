/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:53:30 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/06 17:07:13 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <string>
#include <iostream>

int main(void)
{
    Data *ptr = new Data;

    uintptr_t number = Serializer::serialize(ptr);
    Data *ptr32 = Serializer::deserialize(number);

    std::cout << "original ptr adress: " << ptr << std::endl;
    std::cout << "ptr32 adress after conversions: " << ptr32 << std::endl;
    
    delete ptr;
    return (0);
}