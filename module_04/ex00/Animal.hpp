/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:19:56 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 13:21:17 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string	type;
    public:
        Animal();
        Animal(Animal const& src);
        Animal&	operator=(Animal const& src);
        virtual ~Animal();
        std::string	getType() const;
        void        setType(std::string type);
        virtual void	makeSound() const;
};

#endif