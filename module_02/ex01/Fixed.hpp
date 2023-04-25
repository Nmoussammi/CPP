/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 03:43:01 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/18 03:07:17 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream> 
# include <cmath>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
    public:
        Fixed(); 
        Fixed(const Fixed &src); 
        Fixed(const int integer); 
        Fixed(const float floating); 
        ~Fixed();
        Fixed &operator=(const Fixed &rhs);
        int getRawBits(void) const; 
        void setRawBits(int const raw);
        float toFloat(void) const; 
        int toInt(void) const; 
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif