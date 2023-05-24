/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:24:09 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 17:24:33 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete _materias[i];
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = copy._materias[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = copy._materias[i];
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] == NULL)
        {
            _materias[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] != NULL && _materias[i]->getType() == type)
            return (_materias[i]->clone());
    }
    return (NULL);
}

