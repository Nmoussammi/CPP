/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:06:34 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 15:49:17 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& form) : AForm(form)
{
    std::cout << "Copy constructor called\n";
    *this = form;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& form)
{
    std::cout << "Copy PresidentialPardonForm assignment operator called\n";
    if (this != &form)
    {
        _target = form._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{    
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExecute())
    {
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox\n";
    }
    if (!this->getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
}


