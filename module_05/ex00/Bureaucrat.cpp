/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:46:21 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/11 18:11:42 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Default Constructor !" << std::endl;
}
Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
    std::cout << "Constructor finished" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& bureaucrat)
{
    *this = bureaucrat;
    std::cout << "Copy constructor finished" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& bureaucrat)
{
    std::cout << "Bureaucrat Copy assignment operator called\n";
    if (this != &bureaucrat)
    {
        this->grade = bureaucrat.grade;
        (std::string)this->name = bureaucrat.name;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat() 
{
    std::cout << "Destructor Called !" << std::endl;
}

std::string const	Bureaucrat::getName() const
{
    return (this->name);
}

int	Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat::GradeTooHigh");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat::GradeTooLow");
}

std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& bureaucrat)
{
    stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (stream);
}

