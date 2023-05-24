/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:36:33 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 19:14:39 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const& src) : AMateria(src)
{}

Cure&	Cure::operator=(Cure const& src)
{
    if (this != &src)
        this->_type = src.getType();;
    return (*this);
}

Cure::~Cure()
{}

AMateria*	Cure::clone() const
{
    return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

