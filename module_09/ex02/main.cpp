/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:26:17 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/26 17:04:05 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int is_digit(std::string str)
{
    size_t i;
    for (i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }
    return (1);
}
int check_args(char **av)
{
    std::string line;
    int i;
    i = 0;
    line = "";
    while (av[++i])
        line = line + av[i];
    if (line.empty())
        return (1);
    i = 0;
    if (!is_digit(line))
        return(1);
    return (0);
}
std::vector<int> getvector(char **argv)
{
    std::vector<int> vec;
    int i = 1;

    while (argv[i])
    {
        vec.push_back(atoi(argv[i]));
        i++;
    }
    return (vec);
}
std::deque<int> getdeque(char **argv)
{
    std::deque<int> deq;
    int i = 1;

    while (argv[i])
    {
        deq.push_back(atoi(argv[i]));
        i++;
    }
    return (deq);
}

template <typename T> 
void    Print(T  numbers)
{
    size_t i;
    for (i = 0;  i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " " ;
    }
    std::cout << std::endl;
}

void    insert_vector(std::vector<int>&cont, std::vector<int>&sub1, std::vector<int>&sub2)
{
    int len = cont.size();
    int len_sub1 = len / 2;
    int len_sub2 = len - len_sub1;
    int i = 0;
    int j = 0;
    int l = 0;
    while(i < len_sub1 && j < len_sub2)
    {
        if(sub1[i] <= sub2[j])
        {
            cont[l] = sub1[i];
            i++;
        }
        else{
            cont[l] = sub2[j];
            j++;
        }
        l++;
    }
    while(i < len_sub1)
    {
        cont[l] = sub1[i];
        i++;
        l++;
    }
    while(j < len_sub2)
    {
        cont[l] = sub2[j];
        j++;
        l++;
    }  
}

void    merge_insert_sort_vector(std::vector<int>&cont, int argc)
{
    int len = cont.size();
    if (len <= 1)
        return ;
    std::vector<int>sub1(len / 2);
    std::vector<int>sub2(len - (len / 2));
    
    int i, j;
    i = 0;
    j = 0;

    for(i = 0; i < len; i++){
        if(i < (len / 2))
            sub1[i] = cont[i];
        else
        {
            sub2[j] = cont[i];
            j++;
        }
    }
    merge_insert_sort_vector(sub1, argc);
    merge_insert_sort_vector(sub2, argc);
    insert_vector(cont, sub1, sub2);
    
}
void    insert_deque(std::deque<int>&cont, std::deque<int>&sub1, std::deque<int>&sub2)
{
    int len = cont.size();
    int len_sub1 = len / 2;
    int len_sub2 = len - len_sub1;
    int i = 0;
    int j = 0;
    int l = 0;
    while(i < len_sub1 && j < len_sub2)
    {
        if(sub1[i] <= sub2[j])
        {
            cont[l] = sub1[i];
            i++;
        }
        else{
            cont[l] = sub2[j];
            j++;
        }
        l++;
    }
    while(i < len_sub1)
    {
        cont[l] = sub1[i];
        i++;
        l++;
    }
    while(j < len_sub2)
    {
        cont[l] = sub2[j];
        j++;
        l++;
    }  
}

void    merge_insert_sort_deque(std::deque<int>&cont, int argc)
{
    int len = cont.size();
    if (len <= 1)
        return ;
    std::deque<int>sub1(len / 2);
    std::deque<int>sub2(len - (len / 2));
    
    int i, j;
    i = 0;
    j = 0;

    for(i = 0; i < len; i++){
        if(i < (len / 2))
            sub1[i] = cont[i];
        else
        {
            sub2[j] = cont[i];
            j++;
        }
    }
    merge_insert_sort_deque(sub1, argc);
    merge_insert_sort_deque(sub2, argc);
    insert_deque(cont, sub1, sub2);
    
}
int main(int argc, char **argv)
{
    if (argc == 1 || check_args(argv))
    {
        std::cout << "Invalid arguments" << std::endl;
        return (0);
    }
    std::vector<int> v;
    clock_t start;
    clock_t end;
    v = getvector(argv);
    std::cout << "Before: ";
    Print(v);
    start = clock();
    merge_insert_sort_vector(v, argc);
    end = clock();
    std::cout << "After: ";
    Print(v);
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << (double)(end - start) / 10000 << " us\n";
    std::deque<int> d;
    d = getdeque(argv);
    start = clock();
    merge_insert_sort_deque(d, argc);
    end = clock();
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << (double)(end - start) / 10000 << " us\n";
}