/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:39:23 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 13:46:57 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    setType("Animal");
}

Animal::Animal(Animal const& src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal&	Animal::operator=(Animal const& src)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &src)
    {
        type = src.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
    return (type);
}

void	Animal::setType(std::string type)
{
    this->type = type;
}

void	Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

