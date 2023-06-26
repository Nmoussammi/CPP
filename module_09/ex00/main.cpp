/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:18:52 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/26 16:55:05 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string remove_space(std::string str)
{
    std::string::iterator it = str.begin();
    while (it != str.end())
    {
        if (*it == ' ' || *it == '\t' || *it == '\v')
            it = str.erase(it);
        else
            it++;
    }
    return (str);
}

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
int check_date(std::string date)
{
    std::string year, month, day;
    if (date.empty())
    {
        std::cout << "Error: bad input" << date << std::endl;
        return 0;
    }
    if (!is_digit(date) && date.find('-') == std::string::npos)
        return 0;
    else if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    {
        std::cout << "Error: Invalid date format" << std::endl;
        return 0;
    }
    year = date.substr(0, 4);
    month = date.substr(5, 2);
    day = date.substr(8, 2);
    if (!is_digit(year) || !is_digit(month) || !is_digit(day))
    {
        std::cout << "Error: Invalid date format" << std::endl;
        return 0;
    }
    if (stoi(year) < 2009 || stoi(year) > 2022 || stoi(month) < 1 || stoi(month) > 12 || stoi(day) < 1 || stoi(day) > 31)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
    if ((stoi(month) == 2 && stoi(day) > 29) || (stoi(day) > 30 && (stoi(month) == 4 || stoi(month) == 6 || stoi(month) == 9 || stoi(month) == 11)))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
    if ((stoi(day) > 28 && stoi(month) == 2 && stoi(year) % 4 != 0) || (stoi(day) > 29 && stoi(month) == 2 && stoi(year) % 4 == 0))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
    return 1;
}
int check_value(std::string val)
{
    if (val.empty())
    {
        std::cout << "Error: Invalid value format" << std::endl;
        return 0;
    }
    double value = atof(val.c_str());
    if (value > 1000)
    {
        std::cout << "Error: too large a number" << std::endl;
        return 0;
    }
    else if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 0;
    }
    else if (!is_digit(val) && val.find('.') == std::string::npos)
    {
        std::cout << "Error: Invalid value format" << std::endl;
        return 0;
    }
    return 1;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./btc [filename]" << std::endl;
        return (0);
    }
    //getdata
    std::string data = "data.csv";
    std::ifstream data_csv(data);
    
    if (!data_csv.is_open())
    {
        std::cout << "Error: could not open file " << data << std::endl;
        exit(1);
    }
    std::map<std::string, std::string> btc_map;
    std::string line, date, value;
    
    while(std::getline(data_csv, line))
    {
        if (line.empty())
            continue;
        size_t pos = line.find(',');
        if (pos != std::string::npos){
            date = line.substr(0, pos);
            value = line.substr(pos + 1);
            btc_map[date] = value;
        }
    }
    data_csv.close();
    //get input data 
    std::string filename = argv[1];
    std::ifstream input_data(filename);
    if (!input_data.is_open())
    {
        std::cout << "Error: could not open file " << filename << std::endl;
        exit(1);
    }
    std::string line2, date2, value2, line_removed_spaces;
    while (std::getline(input_data, line2))
    {
        if (line2.empty())
        {
            std::cout << "empty line" << std::endl;  
            continue;
        }
        if (!line2.compare("date | value"))
            continue;
        line_removed_spaces = remove_space(line2);
        if (line_removed_spaces.find('|') == std::string::npos)
        {
            std::cout<< "Error: bad input => " << line2 << std::endl;
            continue;
        }
        date2 = line_removed_spaces.substr(0, line_removed_spaces.find('|'));
        value2 = line_removed_spaces.substr(line_removed_spaces.find('|') + 1);
        if (!check_date(date2))
            continue;
        if (!check_value(value2))
            continue;
    //search the date of the input_data file in data.csv
    std::map<std::string, std::string>::iterator it1 = btc_map.find(date2);
    //  use the closest date contained in data.csv.
    std::map<std::string, std::string>::iterator it2 = btc_map.lower_bound(date2);
    std::string var;
    if (it1 != btc_map.end())
        var = it1->second;
    else if (it2 == btc_map.begin())
    {
        std::cout << "Error: is out of range" << std::endl;  
        // return (0);
    }
    else if(it1 == btc_map.end()) 
        var = (--it2)->second;
    std::cout << date2 << " ==> " << value2 << " = " << atof(var.c_str()) * atof(value2.c_str()) << std::endl;
    }
    input_data.close();
    return (1);
}