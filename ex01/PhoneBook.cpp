/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:12:15 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/19 10:25:43 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    PhoneBook::PhoneBook()
    {
        count = 0;
        currentSize = 0;
        full = 0;
    };
    void    PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret)
    {
        if (count == 8)
            count = 0;
        if (count < 8)
            arrContact[count].setContact(std::to_string(count), firstName, lastName, nickname, phone, secret);
        count++;
        full = 1;
        currentSize++;
        if (currentSize > 8)
            currentSize = 8;
    }
    void    PhoneBook::sepecificContact(std::string Searchindex)
    {
        int index = std::stoi(Searchindex);
        arrContact[index].displayIndexSearch();
    }
    int PhoneBook::displayAllPhoneBook()
    {
        if (full)
        {
            int i = 0;
            arrContact[i].headTable();
            while (i < currentSize)
            {
                arrContact[i].display();
                i++;
            }
            while (1)
            {
                std::cout << "enter index you want : ";
                if(std::getline(std::cin, index) && !index.empty())
                {
                    char ch = index.back();
                    if(index.length() == 1 && isdigit(ch) && std::stoi(index) < currentSize)
                        sepecificContact(index);
                    break;
                }
                else
                    return 1;
            }
            
        }
        return 0;
    }