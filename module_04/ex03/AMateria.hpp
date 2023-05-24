/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:10:13 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 16:34:29 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string	_type;
    public:
        AMateria();
        AMateria(std::string const& type);
        AMateria(AMateria const& src);
        AMateria&	operator=(AMateria const& src);
        virtual ~AMateria();
        std::string const&	getType() const;
        virtual AMateria*	clone() const = 0;
        virtual void		use(ICharacter& target);
};

#endif