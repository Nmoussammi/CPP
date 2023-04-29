/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:18:45 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 22:16:39 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const& name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const & other)
{
    std::cout << "FragTrap copy constructor called for " << getName() << std::endl;
    *this = other;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &src)
    {
        setName(src.getName());
        setHitPoints(src.getHitPoints());
        setEnergyPoints(src.getEnergyPoints());
        setAttackDamage(src.getAttackDamage());
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " wants to high five" << std::endl;
}
