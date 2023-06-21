/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:38:16 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 12:46:56 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *tab, int length, void (*f)(T const &elem))
{
    int i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

#endif