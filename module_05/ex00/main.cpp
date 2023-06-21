/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:46:29 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 13:14:19 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat nouha("nouha", 69);
        std::cout << nouha;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat merry("merry", -54);
        std::cout << merry;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat kitty("kitty", 263);
        std::cout << kitty;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat camilia("camilia", 2);
        std::cout << camilia;
        camilia.incrementGrade();
        std::cout << camilia;
        camilia.incrementGrade();
        std::cout << camilia;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat harry("harry", 149);
        std::cout << harry;
        harry.decrementGrade();
        std::cout << harry;
        harry.decrementGrade();
        std::cout << harry;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    return 0;
}

