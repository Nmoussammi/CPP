/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:05:42 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/04 17:20:58 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"
# include <iomanip>
class PhoneBook
{
    public :
        PhoneBook();
        ~PhoneBook();
        void ADD();
        void SEARCH();
        std::string check_empty(std::string str, std::string name);
        bool is_digits(std::string str);
        std::string print(std::string str, std::string name);
    private:
        Contact contacts[8]; 
          
};

#endif