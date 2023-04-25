/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:57:46 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/08 15:58:44 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i;
    Zombie *zombies;

    i = 0;
    zombies = zombieHorde(5, "Foo");
    while (i < 5)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return 0;
}