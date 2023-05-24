/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:52:10 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 20:19:44 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string	type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const& src);
        WrongAnimal&	operator=(WrongAnimal const& src);
        ~WrongAnimal();
        std::string	getType() const;
        void        setType(std::string type);
        void	makeSound() const;
};

#endif