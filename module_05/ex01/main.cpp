/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:46:29 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 15:23:48 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form form("form0", 40, 15);
        std::cout << form;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Form form1("form1", -57, 10);
        std::cout << form1;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;
    
    try
    {
        Form form1("form2", 20, 954);
        std::cout << form1;
    }
    catch (std::exception & e)
    {
        std:: cout << e.what();
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  icaiss("icaiss3", 6);
        Form form("form3", 50, 20);
        form.beSigned(icaiss);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  icaiss("icaiss4", 65);
        Form form("form4", 20, 10);
        form.beSigned(icaiss);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  icaiss("icaiss5", 7);
        Form form("form5", 72, 20);
        form.beSigned(icaiss);
        std::cout << form;
        icaiss.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  icaiss("icaiss6", 8);
        Form form("form6", 40, 30);
        std::cout << form;
        icaiss.signForm(form);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat  icaiss("icaiss7", 61);
        Form form("form7", 14, 5);
        std::cout << form;
        icaiss.signForm(form);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    return 0;
}