/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:36:49 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/13 03:50:36 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) 
{
    this->type = type;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType()
{
    return (this->type);
}