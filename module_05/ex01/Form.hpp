/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:59:31 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/11 18:56:14 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
    private:
        std::string const	name;
        bool				sign;
        int const			gradeToSign;
        int const			gradeToExecute;
    public:
        Form(void);
        Form(std::string const name, int gradeToSign, int gradeToExecute);
        Form(Form const& form);
        Form&	operator=(Form const& form);
        ~Form();

        std::string const	getName() const;
        bool				getSign() const;
        int					getGradeToSign() const;
        int					getGradeToExecute() const;
        void				beSigned(Bureaucrat const& bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& stream, Form const& form);
#endif