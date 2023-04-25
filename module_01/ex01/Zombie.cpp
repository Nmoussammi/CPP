/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:50:57 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/08 15:58:01 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is dead" << std::endl;
}

void Zombie::announce(void)
{
    std::cout<< name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *zombies;
    Zombie *zombie_tmp;
    int i;
    
    
    zombies = new Zombie[N];
    zombie_tmp = zombies;
    i = 0;
    while (i < N)
    {
        zombie_tmp->setName(name);
        zombie_tmp++;
        i++;
    }
    return zombies;
}
