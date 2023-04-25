/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:54:21 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/09 16:20:17 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string my_String = "HI THIS IS BRAIN";
    std::string *stringPTR = &my_String;
    std::string &stringREF = my_String;

    std::cout << "The memory address of my_String var : " << &my_String << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl << "****************************************************" << std::endl << std::endl;
    std::cout << "The value of my_String variable  : " << my_String << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " <<  stringREF << std::endl;
    return 0;
}