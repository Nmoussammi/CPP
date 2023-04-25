/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:05:46 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/04 17:21:14 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_atoi(std::string str)
{
	int			i;
	long int	resultat;
	int			sign;

	i = 0;
	sign = 1;
	resultat = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (int)(str[i] - '0');
		i++;
	}
	return (sign * resultat);
}

void PhoneBook::SEARCH()
{
    int j;
    std::string index;

    j = 1;
    std::cout << "     index|first name| last name|  nickname" << std::endl;  
    std::cout << "------------------------------------------" << std::endl;
    while (j <= 8)
    {
        std::cout << std::setw(10)<< j << "|";
        if (this->contacts[j - 1].getFirstName().length() > 10)
            std::cout << this->contacts[j - 1].getFirstName().substr(0, 9) << "." << "|";
        else
            std::cout << std::setw(10) << this->contacts[j - 1].getFirstName() << "|";
        if (this->contacts[j - 1].getLastName().length() > 10)
            std::cout << this->contacts[j - 1].getLastName().substr(0, 9) << "." << "|";
        else
            std::cout << std::setw(10) << this->contacts[j - 1].getLastName() << "|";
        if (this->contacts[j - 1].getNickname().length() > 10)
            std::cout << this->contacts[j - 1].getNickname().substr(0, 9) << "." << std::endl;
        else
            std::cout << std::setw(10) << this->contacts[j - 1].getNickname() << std::endl;
        j++;
    }
    std::cout << "Enter the index of the contact you want to see: ";
    if (!(getline(std::cin, index)))
        return ;
    index = check_empty(index, "index");
    while ((ft_atoi(index) < 1) || (ft_atoi(index) > 8))
    {
        std::cout << "\033[31mInvalid index Choose between 1 and 8\033[0m" << std::endl;
        std::cout << "Enter the index of the contact you want to see: ";
        std::getline(std::cin, index);
        
    }
    if ((ft_atoi(index) >= 1) && (ft_atoi(index) <= 8))
    {
        std::cout << "First name: " << this->contacts[ft_atoi(index) - 1].getFirstName() << std::endl;
        std::cout << "Last name: " << this->contacts[ft_atoi(index) - 1].getLastName() << std::endl;
        std::cout << "Nickname: " << this->contacts[ft_atoi(index) - 1].getNickname() << std::endl;
        std::cout << "Phone number: " << this->contacts[ft_atoi(index) - 1].getPhoneNumber() << std::endl;
        std::cout << "Darkest secret: " << this->contacts[ft_atoi(index) - 1].getDarkestSecret() << std::endl;
    }    
}


void PhoneBook::ADD()
{
    int         i = Contact::getIndex();
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
    if (i == 0)
        std::cout << "\033[35m******************************** My Awesome PhoneBook ********************************\033[0m" << std::endl;
    if (i > 7)
    {
        Contact::setIndex(0);
        i = Contact::getIndex();
    }
    first_name = print(first_name, "first name");
    last_name = print(last_name, "last name");
    nickname = print(nickname, "nickname");
    phone_number = print(phone_number, "phone number");
    darkest_secret = print(darkest_secret, "darkest secret");
    
    this->contacts[i].setFirstName(first_name);
    this->contacts[i].setLastName(last_name);
    this->contacts[i].setNickname(nickname);
    this->contacts[i].setPhoneNumber(phone_number);
    this->contacts[i].setDarkestSecret(darkest_secret);
    std::cout << "\033[35m*************** Contact Number " << i + 1 << " Added Successfully to the PhoneBook ***************\033[0m" << std::endl;
    Contact::IncrenmentIndex();
}

