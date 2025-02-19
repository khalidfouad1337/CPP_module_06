/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 00:14:36 by kfouad            #+#    #+#             */
/*   Updated: 2025/02/19 21:04:32 by kfouad           ###   ########.fr       */
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

        static void DidplayValues(std::string _string);
};


#endif