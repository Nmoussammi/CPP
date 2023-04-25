/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:06:32 by nmoussam          #+#    #+#             */
/*   Updated: 2023/04/04 17:16:55 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
    public: 
        Contact();
        ~Contact();
        void setFirstName(std::string first_name);
        std::string getFirstName();
        void setLastName(std::string last_name);
        std::string getLastName();
        void setNickname(std::string nickname);
        std::string getNickname();
        void setPhoneNumber(std::string phone_number);
        std::string getPhoneNumber();
        void setDarkestSecret(std::string darkest_secret);
        std::string getDarkestSecret();
        static void setIndex(int index);
        static int getIndex();
        
        static void IncrenmentIndex();
        
        
    private:
        std::string First_name;
        std::string Last_name;
        std::string Nickname;
        std::string Phone_number;
        std::string Darkest_secret;
        static int     i;    
};

#endif
