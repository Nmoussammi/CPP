/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:49:23 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/29 20:16:28 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    // const Animal* meta = new Animal(); 
    int nb = 2;
    Animal *animals[nb];
    for (int i = 0; i < nb; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << std::endl;
    
    for (int i = 0; i < nb; i++)
        delete animals[i];
    // meta->makeSound();
    // delete meta;
    return (0);
}