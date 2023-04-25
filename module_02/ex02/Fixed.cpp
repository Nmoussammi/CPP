/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:37:13 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/18 21:43:54 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_fixedPointValue / (256);
}

int Fixed::toInt(void) const
{
    return this->_fixedPointValue >> this->_fractionalBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

Fixed::Fixed(const int n)
{
    this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(const float n)
{
    this->_fixedPointValue = roundf(n * 256);
}

Fixed &Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed Fixed::operator+(Fixed const  &rhs) const
{
    return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const  &rhs) const
{
    return (Fixed(toFloat() / rhs.toFloat()));
}

bool Fixed::operator>(Fixed const &rhs) const
{
    return this->_fixedPointValue > rhs._fixedPointValue;
}

bool Fixed::operator<(Fixed const &rhs) const
{
    return this->_fixedPointValue < rhs._fixedPointValue;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
    return this->_fixedPointValue >= rhs._fixedPointValue;
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    return this->_fixedPointValue <= rhs._fixedPointValue;
}

bool Fixed::operator==(Fixed const &rhs) const
{
    return this->_fixedPointValue == rhs._fixedPointValue;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    return this->_fixedPointValue != rhs._fixedPointValue;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}
