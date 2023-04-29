/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 22:01:39 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap("clap");
    ScavTrap clap2("clap2");

    clap.attack("clap2");
    clap2.takeDamage(10);
    clap2.beRepaired(10);
    clap.guardGate();
}