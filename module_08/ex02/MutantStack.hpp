/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:59:16 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 14:38:04 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <string.h>
#include <stack>
#include <deque>
template    <typename T>
class MutantStack : public std::stack<T>
{
public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack(){};
        MutantStack(const MutantStack &copy) { (void)copy;};
        MutantStack& operator=(const MutantStack &copy)
        {
            if (this != &copy) 
                this->c = copy.c;
            return (*this);
        };
        iterator begin(){return this->c.begin();};
        iterator end(){return this->c.end();};
        ~MutantStack() {};
};

#endif
