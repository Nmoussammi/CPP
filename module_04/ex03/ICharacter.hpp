/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:33:22 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 18:19:36 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP

# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const&	getName() const = 0;
        virtual void				equip(AMateria* m) = 0;
        virtual void				unequip(int idx) = 0;
        virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
