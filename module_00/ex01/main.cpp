/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:06:28 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/04 17:16:45 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;
    
    while(1)
    {
        std::cout << "\033[32mEnter a phonebook command: \033[0m";
        std::getline(std::cin, command);
        if (!std::cin.good())
            break;
        if (command.compare("EXIT") == 0 || command.compare("exit") == 0)
        {
            std::cout << "\033[31mGood Bye\033[0m" << std::endl;
            break;
        }
        else if (command.compare("ADD") == 0 || command.compare("add") == 0)
            phonebook.ADD();
        else if (command.compare("SEARCH") == 0 || command.compare("search") == 0)
            phonebook.SEARCH();
        else
            std::cout << "\033[31mInvalid command\033[0m" << std::endl;
    }
}
