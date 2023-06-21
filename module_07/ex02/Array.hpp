/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:51:13 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 11:37:27 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T   *_array;
        unsigned int _size;
    public:
        Array()
        {
            _array = NULL;
            _size = 0;
            std::cout << "Default constructor called" << std::endl;
        }

        Array(unsigned int n)
        {
            _array = new T[n];
            _size = n;
            std::cout << "constructor called" << std::endl;
        }

        Array(Array const &instance)
        {
            *this = instance;
            std::cout << "copy constructor called" << std::endl;
        }
        ~Array()
        {
            delete [] _array;
            std::cout << "Destructor called" << std::endl;
        }


        Array   &operator=(Array const &instance)
        {
            _array = new T[instance._size];
            _size = instance._size;
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = instance._array[i];
            std::cout << "assignment operator called" << std::endl; 
            return (*this);
        }
        T& operator[](unsigned int index)
        {
            if (index < 0 || index >= _size)
                throw std::exception();
            return (_array[index]);
        }

        unsigned int  size(void) const
        {
            return (_size);
        }
};

#endif