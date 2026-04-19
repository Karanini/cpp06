/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 17:12:11 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/19 16:36:56 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib> // For std::rand() and std::srand()
#include <ctime>   // For std::time()
#include <iostream>

class Base {
public:

   virtual ~Base(void);
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif // BASE_HPP