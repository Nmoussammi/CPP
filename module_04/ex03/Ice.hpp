/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:30:12 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 16:30:27 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const& src);
        Ice&	operator=(Ice const& src);
        ~Ice();
        AMateria*	clone() const;
        void		use(ICharacter& target);
};

#endif
