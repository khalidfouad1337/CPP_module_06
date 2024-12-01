/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 02:07:37 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/23 02:09:13 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "argument not valid!" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);
    return 0;
}