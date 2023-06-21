/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:46:25 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/06 16:24:26 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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