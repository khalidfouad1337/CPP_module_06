/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:37:44 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/24 19:37:59 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main() {
    // 1. Create new Data object
    Data* originalData = new Data(42, "Test Data");
    
    // Print original data
    std::cout << "Original Data:" << std::endl;
    std::cout << "Address: " << originalData << std::endl;
    std::cout << "ID: " << originalData->id << std::endl;
    std::cout << "Name: " << originalData->name << std::endl;
    
    // 2. Serialize data (7wel pointer l uintptr_t)
    uintptr_t serialized = Serializer::serialize(originalData);
    std::cout << "\nSerialized value: " << serialized << std::endl;
    
    // 3. Deserialize data (rj3o l pointer)
    Data* deserializedData = Serializer::deserialize(serialized);
    
    // 4. Print deserialized data
    std::cout << "\nDeserialized Data:" << std::endl;
    std::cout << "Address: " << deserializedData << std::endl;
    std::cout << "ID: " << deserializedData->id << std::endl;
    std::cout << "Name: " << deserializedData->name << std::endl;
    
    // 5. Check if pointers are equal
    std::cout << "\nPointers are " 
              << (originalData == deserializedData ? "equal" : "different")
              << std::endl;
    
    // 6. Clean up
    delete originalData;
    
    return 0;
}