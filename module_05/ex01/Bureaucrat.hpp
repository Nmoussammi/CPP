/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:46:25 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 10:13:54 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const	name;
        int					grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const& bureaucrat);
        Bureaucrat&	operator=(Bureaucrat const& bureaucrat);
        ~Bureaucrat();

        std::string const	getName() const;
        int					getGrade() const;
        void				incrementGrade();
        void				decrementGrade();
        void                signForm(Form &form);
        
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
std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& bureaucrat);

#endif