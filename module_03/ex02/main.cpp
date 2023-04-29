/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 22:37:15 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap clap("clap");
    FragTrap clap2("clap2");

    clap.attack("clap2");
    clap2.takeDamage(10);
    clap2.beRepaired(10);
    clap.highFivesGuys();
}