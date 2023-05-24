/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:20:14 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 18:06:00 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string const& name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

Character::Character(Character const &copy)
{
    name = copy.name;
    for (int i = 0; i < 4; i++)
        inventory[i] = copy.inventory[i];
}

Character &Character::operator=(Character const &copy)
{
    name = copy.name;
    for (int i = 0; i < 4; i++)
        inventory[i] = copy.inventory[i];
    return (*this);
}

std::string const&	Character::getName() const
{
    return (name);
}

void	Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            break;
        }
    }
}

void	Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
    if (this->inventory[idx] && idx >= 0 && idx < 4)
    {
        this->inventory[idx]->use(target);
        return ;
    }
}

