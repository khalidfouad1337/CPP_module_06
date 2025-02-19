/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 02:01:22 by kfouad            #+#    #+#             */
/*   Updated: 2025/02/19 21:37:49 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &object)
{
    (void)object;
    return *this;
}

void ScalarConverter::convertFromChar(std::string _string)
{
    char *ptr;
    double value;
    std::string str;

    value = std::strtod(_string.c_str(), &ptr);
    str = ptr;
    
    if(_string[0] == '.' || _string[_string.length() - 1] == '.')
        std::cout << "char : " << "impossible" << std::endl;
    else if (str.length() <= 1 && (str == "f" || str == "") && value >= 0 && value <= 127)
    {
        if(isprint(value) && !str.length())
            std::cout << "char : " << "'" << static_cast<char>(value) << "'" << std::endl;
        else if(value == 0 && str.length())
            std::cout << "char : " << "'" << str << "'" << std::endl;
        else if(value && str.length() && str != "f")
            std::cout << "char : impossible" << std::endl;
        else if(value && str.length() && str == "f" && isprint(value))
            std::cout << "char : " << "'" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char : not printable" << std::endl;  
    }
    else if(!value && str.length() == 1)
        std::cout << "char : " << "'" << str << "'" << std::endl;
    else
        std::cout << "char : impossible" << std::endl;
    
}

void ScalarConverter::convertFromInt(std::string _string)
{
    char *ptr;
    double value;
    std::string str;

    value = std::strtod(_string.c_str(), &ptr);
    str = ptr;

    if(_string[0] == '.' || _string[_string.length() - 1] == '.')
        std::cout << "int : impossible" << std::endl;
    else if(str.length() <= 1)
    {
        if((str == "" || str == "f") && value)
            std::cout << "int :" << static_cast<int>(value) << std::endl;
        else if(value == 0 && str.length() == 1)
            std::cout << "int :" << static_cast<int>(*ptr) << std::endl;
        else if(value >= INT_MAX || value <= INT_MIN)
            std::cout << "int : impossible" << std::endl;
        else
            std::cout << "int : " << static_cast<int>(value) << std::endl;
    }
    else
        std::cout << "int : impossible" << std::endl;
}

void ScalarConverter::convertFromFloat(std::string _string)
{
    char *ptr;
    double value;
    std::string str;
    
    value = strtod(_string.c_str(), &ptr);
    str = ptr;
    
    if(_string[0] == '.' || _string[_string.length() - 1] == '.')
        std::cout << "float : impossible" << std::endl;
    else if(str.length() >= 1)
    {
        if((str == "" || str == "f") && value)
            std::cout << "float :" << static_cast<float>(value) << "f" << std::endl;
        else if(*ptr && str.length() == 1 && value == 0)
            std::cout << "float : " << static_cast<float>(*ptr) << "f" << std::endl;
        else if(*ptr && str.length() && value)
            std::cout << "float : impossible" << std::endl;
        else
            std::cout << "float : 0.0f" << std::endl;
    }
    else
        std::cout << "float : impossible" << std::endl;
}

void ScalarConverter::convertFromDouble(std::string _string)
{
    char *ptr;
    double value;
    std::string str;

    value = strtod(_string.c_str(), &ptr);
    str = ptr;
    
    if(_string[0] == '.' || _string[_string.length() - 1] == '.')
        std::cout << "double : impossible" << std::endl;
    else if(str.length() >= 1)
    {
        if((str == "" || str == "f") && value)
            std::cout << "double : " << static_cast<double>(value) << std::endl;
        else if(*ptr && str.length() == 1 && value == 0)
            std::cout << "double : " << static_cast<double>(*ptr) << std::endl;
        else if(*ptr && str.length() && value)
            std::cout << "double : impossible" << std::endl;
        else
            std::cout << "double : 0.0" << std::endl;
    }
    else
        std::cout << "double : impossible" << std::endl;
}


void ScalarConverter::DidplayValues(std::string _string)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(_string.find(".") != SIZE_T_MAX ? _string.length() - _string.find('.') - 1 : 1);
    ScalarConverter::convertFromChar(_string);
    ScalarConverter::convertFromInt(_string);
    ScalarConverter::convertFromFloat(_string);
    ScalarConverter::convertFromDouble(_string);
}