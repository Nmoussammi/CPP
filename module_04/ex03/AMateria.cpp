/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:31:49 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 18:08:31 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{}

AMateria::AMateria(std::string const& type) : _type(type)
{}

AMateria::AMateria(AMateria const& src)
{
    *this = src;
}

AMateria&	AMateria::operator=(AMateria const& src)
{
    if (this != &src)
    {
        _type = src._type;
    }
    return (*this);
}

AMateria::~AMateria()
{}

std::string const&	AMateria::getType() const
{
    return (_type);
}


void	AMateria::use(ICharacter& target)
{
    (void)target;
}

