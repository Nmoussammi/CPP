/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:54:03 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 13:54:33 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& src)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &src)
    {
        type = src.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
    return (type);
}

void	WrongAnimal::setType(std::string type)
{
    this->type = type;
}

