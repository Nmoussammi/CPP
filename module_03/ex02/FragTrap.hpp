/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 22:06:07 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/27 22:07:14 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


# include <iostream>
# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string const& name);
        FragTrap(FragTrap const& other);
        ~FragTrap();
        FragTrap& operator=(FragTrap const& other);
        void highFivesGuys(void);
};

#endif