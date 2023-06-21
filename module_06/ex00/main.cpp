/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:21:40 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/16 18:25:36 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{  
    if(argc < 3 && argv[1])
        ScalarConverter::convert(argv[1]);
    else 
        std::cout << "Error: No parameter!" << std::endl;
    return 0;
}
