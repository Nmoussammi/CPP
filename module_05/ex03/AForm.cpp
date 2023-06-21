/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:06:55 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 12:20:40 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void)
:_name("default"), _gradeToSign(1), _gradeToExecute(1)
{
    _signed = false;
    std::cout << "AForm Default constructor called\n";
}

AForm::AForm(std::string const& name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
     std::cout << "AForm Constructor called" << std::endl;
}

AForm::AForm(AForm const& form) : _name(form._name), _signed(form._signed), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = form;
}

AForm&	AForm::operator=(AForm const& form)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &form)
    {
        const_cast<std::string&>(this->_name) = (form._name);
        this->_signed = form._signed;
        const_cast<int&>(this->_gradeToExecute) = form._gradeToExecute;
        const_cast<int&>(this->_gradeToSign) = (form._gradeToSign);   
    }
    return (*this);
}

AForm::~AForm()
{
    std::cout << "AForm Destructor called" << std::endl;
}

std::string const	AForm::getName() const
{
    return (_name);
}

bool	AForm::getSigned() const
{
    return (_signed);
}

int	AForm::getGradeToSign() const
{
    return (_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
    return (_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat const& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _signed = true;
}

std::ostream &operator<<(std::ostream &output, AForm const &form)
{
    output << "Form name: " << form.getName() << std::endl
           << "Sign: " << form.getSigned() << std::endl
           << "Grade to sign: " << form.getGradeToSign() << std::endl
           << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    return (output);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form not signed");
}

