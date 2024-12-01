/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:37:44 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/28 17:39:00 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main() {
    Data* originalData = new Data(42, "Test Data");
    
    std::cout << "Original Data:" << std::endl;
    std::cout << "Address: " << originalData << std::endl;
    std::cout << "ID: " << originalData->id << std::endl;
    std::cout << "Name: " << originalData->name << std::endl;
    
    uintptr_t serialized = Serializer::serialize(originalData);
    std::cout << "\nSerialized value: " << serialized << std::endl;
    
    Data* deserializedData = Serializer::deserialize(serialized);
    
    std::cout << "\nDeserialized Data:" << std::endl;
    std::cout << "Address: " << deserializedData << std::endl;
    std::cout << "ID: " << deserializedData->id << std::endl;
    std::cout << "Name: " << deserializedData->name << std::endl;
    
    std::cout << "\nPointers are " 
              << (originalData == deserializedData ? "equal" : "different")
              << std::endl;
    
    delete originalData;
    
    return 0;
}