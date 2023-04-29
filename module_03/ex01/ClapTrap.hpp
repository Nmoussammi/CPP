/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:25 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 22:30:29 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string		name;
        unsigned int	hit_Points;
        unsigned int	energy_Points;
        unsigned int	attack_Damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const & src);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setName(const std::string name);
        std::string getName() const;
        void setHitPoints(const unsigned int hit_Points);
        unsigned int getHitPoints() const;
        void setEnergyPoints(const unsigned int energy_Points);
        unsigned int getEnergyPoints() const;
        void setAttackDamage(const unsigned int attack_Damage);
        unsigned int getAttackDamage() const;
        
};

#endif