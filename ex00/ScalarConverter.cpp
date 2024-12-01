/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 02:01:22 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/23 02:05:43 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

void ScalarConverter::convert(const std::string& str) {
    if (isSpecialFloat(str) || isSpecialDouble(str)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        
        if (str == "nanf" || str == "nan") {
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
        } else if (str == "+inff" || str == "+inf") {
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        } else if (str == "-inff" || str == "-inf") {
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }
        return;
    }
    
    if (isChar(str)) {
        convertFromChar(str[0]);
    } else if (isInt(str)) {
        convertFromInt(std::atoi(str.c_str()));
    } else if (isFloat(str)) {
        convertFromFloat(std::strtof(str.c_str(), NULL));
    } else if (isDouble(str)) {
        convertFromDouble(std::strtod(str.c_str(), NULL));
    } else {
        std::cout << "Invalid str" << std::endl;
    }
}

bool ScalarConverter::isChar(const std::string& str) {
    return (str.length() == 1 && !std::isdigit(str[0]));
}

bool ScalarConverter::isInt(const std::string& str) {
    char* end;
    std::strtol(str.c_str(), &end, 10);
    return (*end == '\0');
}

bool ScalarConverter::isFloat(const std::string& str) {
    return (str.find('f') != std::string::npos && 
            str.find('.') != std::string::npos);
}

bool ScalarConverter::isDouble(const std::string& str) {
    return (str.find('.') != std::string::npos);
}

bool ScalarConverter::isSpecialFloat(const std::string& str) {
    return (str == "nanf" || str == "+inff" || str == "-inff");
}

bool ScalarConverter::isSpecialDouble(const std::string& str) {
    return (str == "nan" || str == "+inf" || str == "-inf");
}

void ScalarConverter::convertFromChar(char c) {
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::convertFromInt(int i) {
    if (i < 0 || i > 127) {
        std::cout << "char: impossible" << std::endl;
    } else if (i < 32 || i > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    }
    
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverter::convertFromFloat(float f) {
    if (f < 0 || f > 127) {
        std::cout << "char: impossible" << std::endl;
    } else if (f < 32 || f > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    }
    
    if (f < INT_MIN || f > INT_MAX) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    }
    
    std::cout << "float: " << f;
    if (f == static_cast<int>(f)) {
        std::cout << ".0";
    }
    std::cout << "f" << std::endl;
    
    std::cout << "double: " << static_cast<double>(f);
    if (f == static_cast<int>(f)) {
        std::cout << ".0";
    }
    std::cout << std::endl;
}

void ScalarConverter::convertFromDouble(double d) {
    if (d < 0 || d > 127) {
        std::cout << "char: impossible" << std::endl;
    } else if (d < 32 || d > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    }
    
    if (d < INT_MIN || d > INT_MAX) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    }
    
    std::cout << "float: " << static_cast<float>(d);
    if (d == static_cast<int>(d)) {
        std::cout << ".0";
    }
    std::cout << "f" << std::endl;
    
    std::cout << "double: " << d;
    if (d == static_cast<int>(d)) {
        std::cout << ".0";
    }
    std::cout << std::endl;
}