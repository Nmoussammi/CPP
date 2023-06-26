/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:10:09 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/26 13:29:22 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(RPN const &copy)
{
    *this = copy;
}

RPN &RPN::operator=(RPN const &copy)
{
    if (this != &copy)
    {
    }
    return (*this);
}

std::string remove_spaces(std::string str)
{
	while(1){
		if (std::isspace(str.front()))
			str.erase(0, 1);
		if (std::isspace(str.back()))
			str.erase(str.length() - 1, str.length());
		else if(!std::isspace(str.front()) && !std::isspace(str.back()))
			break;
	}
	return (str);
}
int only_digit_and_operators(std::string str)
{
    size_t i ;
    for (i = 0; i < str.length(); i++)
    {
        if ((str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != '\t' && str[i] != ' ') && !isdigit(str[i]))
            return (0);
    }
    return (1);
}