/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:28 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 22:34:26 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName() const
{
    return (this->name);
}

unsigned int ClapTrap::getHitPoints() const
{
    return (this->hit_Points);
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return (this->energy_Points);
}

unsigned int ClapTrap::getAttackDamage() const
{
    return (this->attack_Damage);
}

void ClapTrap::setName(const std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(const unsigned int hit_Points)
{
    this->hit_Points = hit_Points;
}

void ClapTrap::setEnergyPoints(const unsigned int energy_Points)
{
    this->energy_Points = energy_Points;
}

void ClapTrap::setAttackDamage(const unsigned int attack_Damage)
{
    this->attack_Damage = attack_Damage;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    setName(name);
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
}

ClapTrap::ClapTrap(ClapTrap const & other)
{
    std::cout << "ClapTrap copy constructor called for " << name << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &src)
    {
        setName(src.getName());
        setHitPoints(src.getHitPoints());
        setEnergyPoints(src.getEnergyPoints());
        setAttackDamage(src.getAttackDamage());
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_Points <= 0 && energy_Points <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because it has no hit points or energy points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_Damage << " points of damage!" << std::endl;
    energy_Points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_Points <= 0) {
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    hit_Points -= amount;
    if (hit_Points <= 0) {
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_Points <= 0) {
        std::cout << "ClapTrap " << name << " can't be repaired because it has no energy points" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
    hit_Points += amount;
    energy_Points--;
}
