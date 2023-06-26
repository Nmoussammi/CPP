/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:52:36 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 13:07:05 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    try
    {
        std::list<int> _list;
        
        _list.push_back(10);
        _list.push_back(20);
        _list.push_back(30);
        _list.push_back(40);
        
        std::cout << easyfind(_list, 30) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::vector<int> _vector;
        
        _vector.push_back(10);
        _vector.push_back(20);
        _vector.push_back(30);
        _vector.push_back(40);
        
        std::cout << easyfind(_vector, 20) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }   
    try
    {
        std::vector<int> _vector;
        
        _vector.push_back(10);
        _vector.push_back(20);
        _vector.push_back(30);
        _vector.push_back(40);
        
        std::cout << easyfind(_vector, 80) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }   
}