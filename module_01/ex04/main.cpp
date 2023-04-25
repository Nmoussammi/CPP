/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:35:48 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/12 22:17:20 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty())
    {
        std::cout << "Error: Empty string" << std::endl;
        return (1);
    }
    std::ifstream input_file(argv[1]);
    if (!input_file.is_open())
    {
        std::cout << "Error: Can't open file" << std::endl;
        return (1);
    }

    std::string output = std::string(argv[1]) + ".replace";
    std::ofstream output_file(output);
    if (!output_file.is_open())
    {
        std::cout << "Error: Can't open file" << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(input_file, line)) 
    {
        std::string::size_type start = 0;
        std::string::size_type end = line.find(s1);
        while (end != std::string::npos)
        {
            output_file << line.substr(start, end - start) << s2;
            start = end + s1.length();
            end = line.find(s1, start);
        }
        output_file << line.substr(start) << std::endl;
    }
    std::cout << "Done!" << std::endl;
    return (0);
}