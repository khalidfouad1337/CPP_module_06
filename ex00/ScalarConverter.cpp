/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 02:01:22 by kfouad            #+#    #+#             */
/*   Updated: 2025/02/21 18:11:29 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &object)
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

    if (str.length() <= 1 && (str == "f" || str == "") && value >= 0 && value <= 127)
    {
        if (isprint(value) && !str.length())
            std::cout << "char : " << "'" << static_cast<char>(value) << "'" << std::endl;
        else if (value && str.length() && str != "f")
            std::cout << "char : impossible" << std::endl;
        else if (value && str.length() && str == "f" && isprint(value))
            std::cout << "char : " << "'" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char : not printable" << std::endl;
    }
    else if (!value && str.length() == 1)
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

    if (str == "" || str == "f")
        std::cout << "float :" << static_cast<int>(value) << std::endl;
    else if (value == 0 && str.length() == 1)
        std::cout << "int : " << static_cast<int>(ptr[0]) << std::endl;
    else if (value >= INT_MAX || value <= INT_MIN)
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : impossible" << std::endl;
}
void print_impossible()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convertFromFloat(std::string _string)
{
    char *ptr;
    double value;
    std::string str;

    value = strtod(_string.c_str(), &ptr);
    str = ptr;

    if ((str == "" || str == "f"))
        std::cout << "float :" << static_cast<float>(value) << "f" << std::endl;
    else if (*ptr && str.length() == 1 && value == 0)
        std::cout << "float : " << static_cast<float>(ptr[0]) << "f" << std::endl;
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

    if ((str == "" || str == "f"))
        std::cout << "double : " << static_cast<double>(value) << std::endl;
    else if (*ptr && str.length() == 1 && value == 0)
        std::cout << "double : " << static_cast<double>(ptr[0]) << std::endl;
    else
        std::cout << "double : impossible" << std::endl;
}

void ScalarConverter::DidplayValues(char *parm)
{
    size_t pos;
    double dl;
    char *end;
    std::string _string;

    _string = _string.assign(parm);
    pos = _string.find('f');
    if (!_string.compare("nan") || !_string.compare("inf") || !_string.compare("nanf") || !_string.compare("inff"))
    {
        dl = std::strtod(parm, &end);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << dl << "f" << std::endl;
        std::cout << "double: " << dl << std::endl;
        return;
    }
    else if (pos != std::string::npos)
    {
        if (pos != (_string.length() - 1))
        {
            print_impossible();
            return;
        }
    }
    else if (_string.find_first_of('.') != std::string::npos && _string.find_last_of('.') != std::string::npos)
    {
        if (_string.find_first_of('.') != _string.find_last_of('.'))
        {
            print_impossible();
            return;
        }
    }
    else if (_string.length() > 1)
    {
        size_t i;

        for (i = 0; i < _string.length() - 1; i++)
            if (!std::isdigit(_string[i]))
                break;
        if (i < _string.length() - 1)
        {
            print_impossible();
            return;
        }
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(_string.find(".") != SIZE_T_MAX ? _string.length() - _string.find('.') - 1 : 1);
    ScalarConverter::convertFromChar(_string);
    ScalarConverter::convertFromInt(_string);
    ScalarConverter::convertFromFloat(_string);
    ScalarConverter::convertFromDouble(_string);
}