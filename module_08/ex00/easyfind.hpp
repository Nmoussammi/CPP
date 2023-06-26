/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:52:48 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 10:30:00 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>

template<typename T>
int easyfind(T& container, int value) {
    if (std::find(container.begin(), container.end(), value) == container.end()) {
        throw std::runtime_error("Value not found in container");
    }
        return (*(std::find(container.begin(), container.end(), value)));
}

#endif