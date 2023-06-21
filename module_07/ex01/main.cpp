/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:41:23 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/19 20:48:47 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print(T const &x)
{
    std::cout << x << std::endl;
}

int main()
{
    int tab[] = {1, 2, 3, 4};
    
    iter(tab, 4, print);

    char tab2[] = {'A', 'B', 'C'};

    iter(tab2, 3, print);

    char tab3[] = "hello world";

    iter(tab3, 11, print);
}
