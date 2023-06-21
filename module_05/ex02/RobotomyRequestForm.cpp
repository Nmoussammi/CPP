/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:06:40 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 12:13:10 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{    
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& form)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = form;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& form)
{
    std::cout << "Copy RobotomyRequestForm assignment operator called" << std::endl;
    if (this != &form)
    {
        _target = form._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExecute())
    {
        std::cout << "* drilling noises *" << std::endl;
        srand((unsigned) time(NULL));
        
        if (rand() % 2)
            std::cout << this->getName() << " has been robotomized successfully\n";
        else
            std::cout << "Robotomy failed\n";
    }
    if (!this->getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
}

