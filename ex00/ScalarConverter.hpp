/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 00:14:36 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/23 00:43:09 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCOMVERTER_CPP
#define SCALARCOMVERTER_CPP

#include<iostream>
#include<string.h>
#include<cstdlib>
#include<cctype>
#include<limits.h>
#include<cfloat>

class ScalarConverter
{
    public  :
        static void  convert(const std::string& str);
        ~ScalarConverter();
    private :
        static bool isInt(const std::string& str);
        static bool isChar(const std::string& str);
        static bool isFloat(const std::string& str);
        static bool isDouble(const std::string& str);
        static bool isSpecialFloat(const std::string& str);
        static bool isSpecialDouble(const std::string& str);

        static void convertFromChar(char c);
        static void convertFromInt(int i);
        static void convertFromFloat(float f);
        static void convertFromDouble(double d);
        ScalarConverter();
};


#endif