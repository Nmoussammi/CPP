/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:29:37 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/08 15:46:03 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void setName(std::string name);
    
};
Zombie *zombieHorde( int N, std::string name );

#endif