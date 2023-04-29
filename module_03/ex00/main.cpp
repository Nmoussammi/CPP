/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 21:13:37 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("clap");
    ClapTrap clap2("clap2");

    clap.attack("clap2");
    clap2.takeDamage(10);
    clap2.beRepaired(10);
}