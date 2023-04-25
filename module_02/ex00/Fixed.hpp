/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:30:22 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/17 03:35:40 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
    public:
        Fixed(); //default constructor
        Fixed(const Fixed &src); //copy constructor
        ~Fixed(); //destructor
        Fixed &operator=(const Fixed &rhs); //copy assignment operator
        int getRawBits(void) const; //returns the raw value of the fixed point value
        void setRawBits(int const raw); //sets the raw value of the fixed point value
};

#endif