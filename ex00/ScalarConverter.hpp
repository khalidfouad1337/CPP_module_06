/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 00:14:36 by kfouad            #+#    #+#             */
/*   Updated: 2025/02/21 17:59:40 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCOMVERTER_CPP
#define SCALARCOMVERTER_CPP

#include <iomanip>
#include<iostream>
#include<string.h>
#include<cstdlib>
#include<cctype>
#include<limits.h>
#include<cfloat>

class ScalarConverter
{
    public  :
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter & operator = (const ScalarConverter &object);

        static void convertFromChar(std::string  _string);
        static void convertFromInt(std::string  _string);
        static void convertFromFloat(std::string  _string);
        static void convertFromDouble(std::string  _string);

        static void DidplayValues(char* parm);
};


#endif