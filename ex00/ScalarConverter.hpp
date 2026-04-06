/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:27:50 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/06 12:01:39 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

enum e_type {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID
};

class ScalarConverter {
public:
    // ----------Destructor ----------

    ~ScalarConverter(void);

    // ---------- Overloading Operators Methods -------

    ScalarConverter& operator=(const ScalarConverter& copy);

    // ---------- Getter and Setter Methods ------------

    // ---------- Member Methods -----------------------

    static void convert(const std::string &input);

protected:
    // ---------- Protected Data Members ---------------------

private:
    // ---------- Constructors ----------
    // private because subject requirement: class not instantiable by users
    
    ScalarConverter(void);
    ScalarConverter(const ScalarConverter& copy);
    // ---------- Private Data members -------------------------
};

#endif // SCALARCONVERTER_HPP