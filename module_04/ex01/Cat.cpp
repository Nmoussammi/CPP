/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:47:44 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 19:46:36 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
    setType("Cat");
}

Cat::Cat(Cat const& src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat&	Cat::operator=(Cat const& src)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &src)
    {
        this->brain = new Brain();
        *(this->brain) = *(src.brain);
        type = src.getType();
    }
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
