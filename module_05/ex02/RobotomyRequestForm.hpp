/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:06:42 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 09:40:09 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string	_target;
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const& form);
        RobotomyRequestForm&	operator=(RobotomyRequestForm const& form);
        ~RobotomyRequestForm();

        virtual void	execute(Bureaucrat const& executor) const;
};

#endif