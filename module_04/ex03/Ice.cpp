/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:30:38 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 19:14:15 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const& src)
{
    *this = src;
}

Ice&	Ice::operator=(Ice const& src)
{
    if (this != &src)
        this->_type = src.getType();
    return (*this);
}

Ice::~Ice()
{}

AMateria*	Ice::clone() const
{
    return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

