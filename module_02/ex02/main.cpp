/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:37:27 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/18 21:04:59 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{ 
    Fixed       a; 
    Fixed const b(Fixed(5.05f) * Fixed(2)); 
    
    std::cout << a << std::endl; 
    std::cout << ++a << std::endl;
    std::cout << a << std::endl; 
    std::cout << a++ << std::endl; 
    std::cout << a << std::endl; 
    std::cout << b << std::endl; 
    std::cout << Fixed::max(a,b) << std::endl; 
    return 0; 
}