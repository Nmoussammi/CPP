/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:05:28 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 14:41:47 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const& src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain&	Brain::operator=(Brain const& src)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = src.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
