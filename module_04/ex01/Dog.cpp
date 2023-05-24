/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:48:16 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 19:33:55 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    brain = new Brain();
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
        this->brain = new Brain();
        *(this->brain) = *(src.brain);
        type = src.getType();
    }
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

