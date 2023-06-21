/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:03:23 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 15:26:45 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat form0("form0", 4);
        ShrubberyCreationForm form("garden");

        form0.signForm(form);
        form.execute(form0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat form1("form1", 4);
        RobotomyRequestForm form("garden");

        form1.signForm(form);
        form.execute(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat form2("form2", 4);
        PresidentialPardonForm form("garden");

        form2.signForm(form);
        form.execute(form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat form3("form3", 24);
        PresidentialPardonForm form("garden");

        form3.signForm(form);
        form.execute(form3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat form4("form4", 4);
        PresidentialPardonForm form("garden");

        form4.signForm(form);
        form4.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat form5("form5", 24);
        PresidentialPardonForm form("garden");

        form5.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    return 0;
}