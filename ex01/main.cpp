/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:56:28 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/18 12:33:33 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main()
{
    PhoneBook phone;
    
    std::string firstName;
    std::string lastName;
    std::string nackName;
    std::string secret;
    std::string choice;
    std::string number;
    std::string index;
    int valid = 1;
    
    std::cout << "<< Welcome to my aour PhoneBook >>\n>\n>\n>" << std::endl;
    while(1)
    {
        std::cout << "choose ADD, SEARCH, EXIT : ";
        if (!std::getline(std::cin, choice))
            break;
        if(choice == "ADD")
        {
            while (valid)
            {
                std::cout << "enter firstName : ";
                if(!std::getline(std::cin, firstName))
                {
                    valid = 0;
                    break;
                }
                if(!firstName.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl;
            }
            while (valid)
            {
                std::cout << "enter lastName : ";
                if(!std::getline(std::cin, lastName))
                {
                    valid = 0;
                    break;
                }
                if(!lastName.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl;
            }
            while (valid)
            {
                std::cout << "enter nickname : ";
                if(!std::getline(std::cin, nackName))
                {
                    valid = 0;
                    break;
                }
                if(!nackName.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl; 
            }
            while (valid)
            {
                std::cout << "enter screte : ";
                if(!std::getline(std::cin, secret))
                {
                    valid = 0;
                    break;
                }
                if(!secret.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl; 
            }
            while (valid)
            {
                std::cout << "enter phone number : ";
                if(!std::getline(std::cin, number))
                {
                    valid = 0;
                    break;
                }
                if(!number.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl;
            }
            phone.addContact(firstName, lastName, nackName, number, secret);
        }
        else if(choice == "SEARCH")
        {
            if(phone.displayAllPhoneBook())
                break;
        }
        else if(choice == "EXIT")
            exit(0);
    }
    
    return 0;
}