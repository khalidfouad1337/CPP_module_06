/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 00:14:36 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/20 00:24:20 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCOMVERTE_CPP
#define SCALARCOMVERTE_CPP

#include<iostream>

class ScalarConverter
{
    public  :
        static void  convert(std::string str);
        ~ScalarConverter();
    private :
        ScalarConverter();
};


#endif