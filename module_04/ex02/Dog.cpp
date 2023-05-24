/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:48:16 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 13:48:37 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    setType("Dog");
}

Dog::Dog(Dog const& src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog&	Dog::operator=(Dog const& src)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &src)
    {
        type = src.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

