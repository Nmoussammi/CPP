/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:54:44 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 19:38:46 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const& src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat&	WrongCat::operator=(WrongCat const& src)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &src)
    {
        type = src.getType();
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}
