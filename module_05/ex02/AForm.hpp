/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:03:47 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 13:02:02 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const	_name;
        bool				_signed;
        int const			_gradeToSign;
        int const			_gradeToExecute;
    public:
        AForm();
        AForm(std::string const& name, int gradeToSign, int gradeToExecute);
        AForm(AForm const& copy);
        AForm&	operator=(AForm const& copy);
         ~AForm();

        std::string const   getName() const;
        bool				getSigned() const;
        int					getGradeToSign() const;
        int					getGradeToExecute() const;

        void				beSigned(Bureaucrat const& bureaucrat);
        virtual void		execute(Bureaucrat const& executor) const = 0;

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
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& stream, AForm const& form);

#endif
