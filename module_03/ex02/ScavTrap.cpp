/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:16:12 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 22:27:19 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) 
{
    std::cout << "ScavTrap constructor called" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);    
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        setName(other.getName());
        setHitPoints(other.getHitPoints());
        setEnergyPoints(other.getEnergyPoints());
        setAttackDamage(other.getAttackDamage());
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
}

