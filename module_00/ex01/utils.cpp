/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:56:17 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/04 17:21:56 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int Contact::i = 0;

Contact::Contact(){}

Contact::~Contact(){}

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

void Contact::setFirstName(std::string first_name)
{
    this->First_name = first_name;
}

std::string Contact::getFirstName()
{
    return (First_name);
}

void Contact::setLastName(std::string last_name)
{
    this->Last_name = last_name;
}

std::string Contact::getLastName()
{
    return (Last_name);
}
void Contact::setNickname(std::string nickname)
{
    this->Nickname = nickname;
}
std::string Contact::getNickname()
{
    return (Nickname);
}
void Contact::setPhoneNumber(std::string phone_number)
{
    this->Phone_number = phone_number; 
}

std::string Contact::getPhoneNumber()
{
    return (Phone_number);
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
    this->Darkest_secret = darkest_secret;
}

std::string Contact::getDarkestSecret()
{
    return (Darkest_secret);
}
void Contact::setIndex(int index){
    Contact::i = index;
}

int Contact::getIndex()
{
    return (i);
}

void Contact::IncrenmentIndex()
{
    Contact::i++;
}

std::string PhoneBook::print(std::string str, std::string name)
{
    std::cout << "Enter the " << name << ": ";
    if (!std::getline(std::cin, str))
        return (NULL);
    str = check_empty(str, name);
    return (str);
}

bool PhoneBook::is_digits(std::string str)
{
    unsigned int i = 0;
    while (i < str.length())
    {
        if (!std::isdigit(str[i])) 
            return false;
        i++;
    }
    return true;
}

std::string PhoneBook::check_empty(std::string str, std::string name)
{
    while ((name.compare("phone number") == 0 || name.compare("index") == 0) && (!is_digits(str) || str.empty()))
    {
        std::cout << "\033[31m" << name << " cannot be empty or not digit\033[0m" << std::endl;
        std::cout << "Enter the " << name << ": ";
        getline(std::cin, str);
    }
    while(str.empty())
    {
        std::cout << name << " is empty !!" << std::endl;
        std::cout << "Enter the " << name << ": ";
        std::getline(std::cin, str);
    }
    return (str);
}