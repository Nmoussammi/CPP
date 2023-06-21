/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:55:10 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/16 20:50:24 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
    public:
        virtual ~Base();
};

class A : public Base{};

class B : public Base {};

class C : public Base {};

Base    *generate(void);
void    identify(Base *p);
void    identify(Base &p);

#endif

