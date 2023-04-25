/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:40:32 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/18 21:56:12 by nmoussam         ###   ########.fr       */
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
        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int); 
        Fixed operator--(int); 
        Fixed operator+(Fixed const &rhs) const;
        Fixed operator-(Fixed const &rhs) const;
        Fixed operator*(Fixed const &rhs) const;
        Fixed operator/(Fixed const &rhs) const;
        bool operator>(Fixed const &rhs) const; 
        bool operator<(Fixed const &rhs) const; 
        bool operator>=(Fixed const &rhs) const;
        bool operator<=(Fixed const &rhs) const; 
        bool operator==(Fixed const &rhs) const; 
        bool operator!=(Fixed const &rhs) const; 
        static Fixed &min(Fixed &a, Fixed &b); 
        static Fixed &max(Fixed &a, Fixed &b); 
        static Fixed const &min(Fixed const &a, Fixed const &b); 
        static Fixed const &max(Fixed const &a, Fixed const &b); 
        
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif