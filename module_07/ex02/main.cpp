/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:50:57 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 11:39:31 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{

    Array<int> tab1;
    std::cout << "tab 1 size: " << tab1.size() << std::endl;

    Array<int> tab2(5);
    std::cout << "tab2 size: " << tab2.size() << std::endl;

    Array<int> tab3 = tab2;

    tab3[0] = 1;
    tab3[1] = 2;


    std::cout << "tab 2 elements: ";
    for (unsigned int i = 0; i < tab2.size(); i++)
        std::cout << tab2[i] << " ";
    std::cout << std::endl;

    std::cout << "tab 3 elements: ";
    for (unsigned int i = 0; i < tab3.size(); i++)
        std::cout << tab3[i] << " ";
    std::cout << std::endl;

    try {
        int a = tab2[21];
        std::cout << "a =  " << a << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
      try {
        int b = tab3[1];
        std::cout << "b = " << b << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}