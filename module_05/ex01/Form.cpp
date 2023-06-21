/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:59:41 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 14:03:43 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Default constructor Form class called\n";
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : name(name), sign(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "constructor Form class called\n";
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &form) : name(form.name), sign(form.sign), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute)
{
    std::cout << "Copy constructor Called" << std::endl;
    *this = form;
}

Form &Form::operator=(Form const &form)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &form)
    {
        const_cast<std::string&>(this->name) = (form.name);
        this->sign = form.sign;
        const_cast<int&>(this->gradeToExecute) = form.gradeToExecute;
        const_cast<int&>(this->gradeToSign) = (form.gradeToSign);   
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

std::string const Form::getName() const
{
    return (this->name);
}

bool Form::getSign() const
{
    return (this->sign);
}

int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->sign = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
    output << "Form name: " << form.getName() << std::endl
           << "Sign: " << form.getSign() << std::endl
           << "Grade to sign: " << form.getGradeToSign() << std::endl
           << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    return (output);
}