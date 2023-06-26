/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:36:33 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 10:39:52 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> _vector;
    public:
        Span();
        Span(unsigned int size);
        Span(Span const& copy);
        Span& operator=(Span const& copy);
        ~Span();

        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};

#endif