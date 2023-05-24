/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:36:08 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 16:36:26 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const& src);
        Cure&	operator=(Cure const& src);
        ~Cure();
        AMateria*	clone() const;
        void		use(ICharacter& target);
};

#endif
