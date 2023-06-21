/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:42:07 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/16 21:46:07 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    std::srand(std::time(nullptr));

    if (std::rand() % 3 == 0)
        return (new A);
    else if (std::rand() % 3 == 1)
        return (new B);
    else
        return (new C);
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        A &tmp = dynamic_cast<A &>(p);
        (void)tmp;
        std::cout << "A\n";
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B &tmp = dynamic_cast<B &>(p);
        (void)tmp;
        std::cout << "B\n";
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C &tmp = dynamic_cast<C &>(p);
        (void)tmp;
        std::cout << "A\n";
    }
    catch(const std::exception& e)
    {
    }
    
}

Base::~Base()
{
}