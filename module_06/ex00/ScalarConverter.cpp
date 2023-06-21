/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:40:28 by nmoussam          #+#    #+#             */
/*   Updated: 2023/06/18 11:27:52 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}


int countCharacter(const std::string str, char character) {
    int count = 0;
    for (std::string::size_type i = 0; i < str.length(); i++) {
        if (str[i] == character) {
            count++;
        }
    }
    return count;
}
void ScalarConverter::convert(std::string str)
{
    //in case empty
    if (str.empty())
    {
        std::cout << "Error: Empty parameter!" << std::endl;
        return;
    }
    //in case -inff +inff nanf
    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        std::cout << "char: Impossible\n";
        std::cout << "int: Impossible\n";
        if (str == "-inff")
        {
            float number = std::numeric_limits<float>::infinity() * -1;
            std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(number) << std::endl;
        }
        else if(str == "+inff")
        {
            float number = std::numeric_limits<float>::infinity();
            std::cout << "float: +" << static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: +" << static_cast<double>(number) << std::endl;
        }
        else if(str == "nanf")
        {
            float number = std::numeric_limits<float>::quiet_NaN();
            std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(number) << std::endl;
        }
        return;
    }
    // in case -inf +inf nan
    if (str == "-inf" || str == "+inf" || str == "nan")
    {
        std::cout << "char: Impossible\n";
        std::cout << "int: Impossible\n";
        if (str == "-inf")
        {
            double number = std::numeric_limits<double>::infinity() * -1;
            std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(number) << std::endl;
        }
        else if(str == "+inf")
        {
            double number = std::numeric_limits<double>::infinity();
            std::cout << "float: +" << static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: +" << static_cast<double>(number) << std::endl;
        }
        else if(str == "nan")
        {
            double number = std::numeric_limits<double>::quiet_NaN();
            std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(number) << std::endl;
        }
        return;
}
    // in case char
    if (str.length() == 3 && str[0] == 39 && str[2] == 39)
    {
        if (str[1] >= 33 && str[1] <= 126)
            std::cout << "char: '" << str[1] << "'" << std::endl;
        else 
            std::cout << "char: Not Displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(str[1]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[1]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(str[1]) << ".0" << std::endl;
        return ;
    }
    // in case float
    std::string::size_type idx = 0;
    size_t pos = str.find('.');
    int count1 = countCharacter(str, 'f');
    int count2 = countCharacter(str, '.');
    if (count1 > 1 || count2 > 1)
    {
        std::cout << "error input" << std::endl;
        return ;
    }
    if (str.back() == 'f' && pos != std::string::npos)
    {
        if (str[0] == '-')
            idx = 1;
        while (idx < str.length() - 1) 
        {
            if (!isdigit(str[idx]) && str[idx] != '.')
            {
                std::cout << "char: Impossible" << std::endl;
                std::cout << "int: Impossible" << std::endl;
                std::cout << "float: Impossible" << std::endl;
                std::cout << "double: Impossible" << std::endl;
                return;
            }
            idx++;
        }
        float number = std::stof(str);
        if (number < 0 || number > 127) 
            std::cout << "char: Impossible" << std::endl;
        else if (number <= 32 || number > 126)
            std::cout << "char: Not Displayable" << std::endl;
        else 
            std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
        if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min())
            std::cout << "int: Impossible\n";
        else
            std::cout << "int: " << static_cast<int>(number) << std::endl;
        
        str.erase(str.length() - 1); 
        if (str.back() == '0' && str[str.length() - 2] == '.')
        {
            std::cout << "floaat: "<< static_cast<float>(number) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(number) << ".0" << std::endl;
        }
        else
        {
            std::cout << "float: "<< static_cast<float>(number) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(number) << std::endl;
        }
        return ;
    }
    //in case double
    pos = str.find('.');
    if (pos != std::string::npos)
    {
        // std::string sub = str.substr(0, pos);
        idx = 0;
        if (str[0] == '-')
            idx = 1;
        while (idx < str.length()) 
        {
            if (!isdigit(str[idx]) && str[idx] != '.')
            {
                std::cout << "char: Impossible" << std::endl;
                std::cout << "int: Impossible" << std::endl;
                std::cout << "float: Impossible" << std::endl;
                std::cout << "double: Impossible" << std::endl;
                return;
            }
            idx++;
        }
        double number = std::stod(str);
        if (number < 0 || number > 127) 
            std::cout << "char: Impossible" << std::endl;
        else if (number <= 32 || number > 126)
            std::cout << "char: Not Displayable" << std::endl;
        else 
            std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
        if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min())
            std::cout << "int: Impossible\n";
        else
            std::cout << "int: " << static_cast<int>(number) << std::endl;
        std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return ;
    }
    // in case int 
    if (str[0] == '-')
        idx = 1;
    while (idx < str.length()) 
    {
        if (!isdigit(str[idx]))
        {
            std::cout << "char: Impossible" << std::endl;
            std::cout << "int: Impossible" << std::endl;
            std::cout << "float: Impossible" << std::endl;
            std::cout << "double: Impossible" << std::endl;
            return;
        }
        idx++;
    }
    int number = std::atoi(str.c_str());
    if (number < 0 || number > 127) 
        std::cout << "char: Impossible" << std::endl;
    else if (number <= 32 || number > 126)
        std::cout << "char: Not Displayable" << std::endl;
    else 
        std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
    if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min())
        std::cout << "int: Impossible\n";
    else
        std::cout << "int: " << static_cast<int>(number) << std::endl;
    std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(number) << ".0" << std::endl;

}

