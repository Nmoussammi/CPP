/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:10:11 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/26 13:35:29 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <stack>

class RPN{
    public: 
        RPN();
        ~RPN();
        RPN(RPN const &copy);
        RPN &operator=(RPN const &copy);
};
std::string remove_spaces(std::string str);
int only_digit_and_operators(std::string str);

 #endif