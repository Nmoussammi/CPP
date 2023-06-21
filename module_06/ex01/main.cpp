/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:42:20 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/18 10:01:24 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *ptr = new Data;
    uintptr_t tmp;
    Data *ptr2;

    ptr->s1 = "hello";
    ptr->s2 = "world";
    ptr->n = 2024;

    tmp = Serializer::serialize(ptr);

    ptr2 = Serializer::deserialize(tmp);

    std::cout << ptr2->s1 << std::endl;
    std::cout << ptr2->s2 << std::endl;
    std::cout << ptr2->n << std::endl;

    delete ptr;
}