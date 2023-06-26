/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:37:28 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 13:08:53 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    _size = 0;
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int size)
{
    _size = size;
    std::cout << "Span constructor called" << std::endl;
}

Span::Span(Span const& copy)
{
    *this = copy;
    std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(Span const& copy)
{
    std::cout << "Span assignment operator called" << std::endl;
    if (this != &copy)
    {
        _size = copy._size;
        _vector = copy._vector;
    }
    return (*this);
}

Span::~Span()
{
    std::cout << "Span destructor called" << std::endl;    
}

void Span::addNumber(int number)
{
    if (_vector.size() == _size)
        throw std::exception();
    _vector.push_back(number);
}

int Span::shortestSpan()
{
    if (_vector.size() < 2)
        throw std::exception();
    std::sort(_vector.begin(), _vector.end());
    int min = _vector[1] - _vector[0];
    for (unsigned int i = 2; i < _vector.size(); i++)
        if (_vector[i] - _vector[i - 1] < min)
            min = _vector[i] - _vector[i - 1];
    return (min);
}

int Span::longestSpan()
{
    if (_vector.size() < 2)
        throw std::exception();
    std::sort(_vector.begin(), _vector.end());
    return (_vector[_vector.size() - 1] - _vector[0]);
}

