/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:43:40 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/19 20:44:09 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}


template <typename T>
T   max(T &x, T &y)
{
    if (x > y)
        return x;
    else
        return y;
}

template <typename T>
T   min(T &x, T &y)
{
    if (x < y)
        return x;
    else
        return y;
}

#endif
