/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:27:47 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 16:03:49 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        AForm	*makePresidentialPardonForm(std::string target);
        AForm	*makeRobotomyRequestForm(std::string target);
        AForm	*makeShrubberyCreationForm(std::string target);
    public:
        Intern();
        Intern(Intern const& intern);
        Intern&	operator=(Intern const& intern);
        ~Intern();

        AForm	*makeForm(std::string name, std::string target);
};

#endif