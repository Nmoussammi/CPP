/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:27:50 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 18:41:19 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const& intern)
{
    *this = intern;
}

Intern&	Intern::operator=(Intern const& intern)
{
    (void)intern;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

AForm	*Intern::makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
    std::string	forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm		*(Intern::*func[3])(std::string) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};

    for (int i = 0; i < 3; i++)
    {
        if (name == forms[i])
        {
            std::cout << "Intern creates " << name << " form" << std::endl;
            return ((this->*func[i])(target));
        }
    }
    std::cout << "Intern can't create " << name << " form" << std::endl;
    return (NULL);
}

