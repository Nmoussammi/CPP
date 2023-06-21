/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:06:45 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/13 12:18:06 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& form)
{
    std::cout << "Copy constructor called\n";
    *this = form;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& form)
{
    std::cout << "Copy ShrubberyCreationForm assignment operator called\n";
    if (this != &form)
    {
        _target = form._target;
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor called\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExecute())
    {
        std::ofstream file;
        file.open(this->_target + "_shrubbery");
        file << "      /\\\n";
        file << "     /\\*\\\n";
        file << "    /\\O\\*\\\n";
        file << "   /*/\\/\\/\\\n";
        file << "  /\\O\\/\\*\\/\\\n";
        file << " /\\*\\/\\*\\/\\/\\\n";
        file << "/\\O\\/\\/*/\\/O/\\\n";
        file << "      ||\n";
        file << "      ||\n";
        file << "      ||\n";
        file << "    \\====/\n";
        file << "     \\__/\n";
        file.close();
    }
    if (!this->getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
}
