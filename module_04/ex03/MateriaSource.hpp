/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:22:00 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 18:20:59 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria	*_materias[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const& src);
        MateriaSource&	operator=(MateriaSource const& src);
        ~MateriaSource();
        void		learnMateria(AMateria*);
        AMateria*	createMateria(std::string const& type);
};

#endif