/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:19:15 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 20:36:03 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string	name;
        AMateria	*inventory[4];
    public:
        Character();
        Character(std::string const& name);
        Character(Character const& src);
        Character&	operator=(Character const& src);
        ~Character();
        std::string const&	getName() const;
        void				equip(AMateria* m);
        void				unequip(int idx);
        void				use(int idx, ICharacter& target);
};

#endif