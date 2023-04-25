/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:29:14 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/04 17:16:18 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else 
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)std::toupper(argv[i][j]);  
                j++;
            }
            if (i != argc - 1) 
            {
                std::cout << " ";
            }
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}