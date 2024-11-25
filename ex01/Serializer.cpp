/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:36:31 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/24 19:37:07 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Private constructor (khawi)
Serializer::Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) {
    // Simple casting mn pointer l uintptr_t
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    // Simple casting mn uintptr_t l pointer
    return reinterpret_cast<Data*>(raw);
}