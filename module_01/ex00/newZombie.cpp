/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:27:49 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/08 13:59:31 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return zombie;
}
void Zombie::announce(void)
{
    std::cout<< name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
