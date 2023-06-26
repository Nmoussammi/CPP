/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:10:13 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/26 16:39:00 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    std::stack<int> numbers; // last in first out
    int res; 
    std::string nb = remove_spaces((std::string)argv[1]);
    if (nb.length() == 0)
    {
        std::cout << "Empty string" << std::endl;
        return (1);
    }
    else if (!only_digit_and_operators(nb))
    {
        std::cout << "Error" << std::endl;
        return (1);
    }
    int i = 0;
    while (nb[i])
    {
        if (isdigit(nb[i]))
        {
            int a = nb[i] - '0';
            numbers.push(a);
            i++;
            continue;
        }
        if (nb[i] == '+' || nb[i] == '-' || nb[i] == '*' || nb[i] == '/')
        {
            if (numbers.size() == 1 || numbers.size() == 0)
                return (std::cout << "error: invalid arguments.\n", 1);
            int a = numbers.top();
            numbers.pop();
            int b = numbers.top();
            numbers.pop();
            if (nb[i] == '+')
                res = b + a;
            else if (nb[i] == '-')
                res = b - a;
            else if (nb[i] == '*')
                res = b * a;
            else if (nb[i] == '/')
            {
                if (a == 0)
                    return (std::cout << "Error: Division by zero\n", 1);
                res = b / a;
            }
            numbers.push(res);
        }
        i++;
    }
    if (numbers.size() != 1)
    {
        std::cout << "Error" << std::endl;
        return (1);
    }
    std::cout << numbers.top() << std::endl;
    return (0);
}