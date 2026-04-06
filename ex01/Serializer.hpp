/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:34:19 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/06 17:05:05 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <stdint.h>

struct Data
{
    void* data;
};

class Serializer {
public:
    // ---------- Destructor ----------

    ~Serializer(void);

    // ---------- Overloading Operators Methods -------

    Serializer& operator=(const Serializer& copy);

    // ---------- Getter and Setter Methods ------------

    // ---------- Member Methods -----------------------

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);

protected:
    // ---------- Protected Data Members ---------------------

private:
    // ---------- Private Data members -------------------------

    // ---------- Constructors ----------

    Serializer(void);
    Serializer(const Serializer& copy);
};

#endif // SERIALIZER_HPP