/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:01:29 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/23 03:44:12 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include<string>

struct Data {
    int id;
    std::string name;

    Data(int _id, std::string _name) : id(_id), name(_name){}
};

#endif