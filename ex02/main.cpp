/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 03:30:22 by kfouad            #+#    #+#             */
/*   Updated: 2024/11/28 17:39:43 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
    srand(time(NULL));
    int random = rand() % 3;
    
    switch(random) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
        default: return NULL;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    if (dynamic_cast<A*>(&p)) {
        std::cout << "A" << std::endl;
        return;
    }
    if (dynamic_cast<B*>(&p)) {
        std::cout << "B" << std::endl;
        return;
    }
    if (dynamic_cast<C*>(&p)) {
        std::cout << "C" << std::endl;
        return;
    }
    std::cout << "Unknown type" << std::endl;
}

int main() {
    Base* base = generate();
    
    std::cout << "By Pointer: ";
    identify(base);
    
    std::cout << "By Reference: ";
    identify(*base);
    
    delete base;
    return 0;
}