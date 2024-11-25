/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:08:33 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/24 20:47:39 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h> // for uintptr_t
#include "data.hpp"

class Serializer {
private:
    // Private constructor bach ma ymkench l'instanciation
    Serializer();
    
public:
    // Methods statiques li ghadi n7tajo
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif