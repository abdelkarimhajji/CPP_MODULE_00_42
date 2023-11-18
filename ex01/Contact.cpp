/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:15:00 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/18 12:18:04 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
    {

    };
    void Contact::setContact(std::string index, std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret)
    {
        this->index = index;
        this->firstName = firstName;
        this->lastName = lastName;
        this->nickname = nickname;
        this->phone = phone;
        this->secret = secret;
    }
    std::string Contact::printExact(std::string string) {
        if (string.length() == 10)
        {
            std::cout << "|" << string;
            return ("1");
        }
        else if (string.length() > 10)
        {
            std::cout << "|" << string.substr(0, 9) << ".";
            return("|" + string.substr(0, 9) + ".");
        }
        return "";
    }

    void Contact::headTable() {
        std::cout << " -------------------------------------------" << std::endl;
        std::cout << "|   Index  |first name| Last Name| Nick Name|" << std::endl;
        std::cout << " -------------------------------------------" << std::endl;
    }

    void Contact::display() {
         std::cout << "|" << std::setw(10) << index;
        if(printExact(firstName).length() == 0)
            std::cout << "|" << std::setw(10) << firstName;
        if(printExact(lastName).length() == 0)
            std::cout << "|" << std::setw(10) << lastName;
        if(printExact(nickname).length() == 0)
            std::cout << "|" << std::setw(10) << nickname;
        std::cout << "|" << std::endl;
        std::cout << " -------------------------------------------" << std::endl;
    }
    void    Contact::displayIndexSearch()
    {
        std::cout << "index : " << index << std::endl;
        std::cout << "first name : " << firstName << std::endl;
        std::cout << "last name : " << lastName << std::endl;
        std::cout << "nick name : " << nickname << std::endl;
        std::cout << "secret : " << secret << std::endl;
        std::cout << "phone : " << phone << std::endl;
    }