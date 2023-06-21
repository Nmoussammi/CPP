/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:03:23 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 16:51:10 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{    
    Bureaucrat Form("Form", 6);
    Intern form2;
    AForm   *rrf;
    
    rrf = form2.makeForm("shrubbery creation", "home");
    if (rrf == NULL)
        return 1;
    Form.signForm(*rrf);
    Form.executeForm(*rrf);
    delete rrf;
    return 0;
}