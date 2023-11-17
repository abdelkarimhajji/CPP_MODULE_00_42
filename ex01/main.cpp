/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:56:28 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/17 22:59:10 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
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
    
    std::cout << "<< Welcome to my aour PhoneBook >>\n>\n>\n>\n" ;
    while(1)
    {
        std::cout << "choose ADD, SEARCH, EXIT : ";
        std::getline(std::cin, choice); 
        if(choice == "ADD")
        {
            while (1)
            {
                std::cout << "enter firstName : ";
                std::getline(std::cin, firstName);
                if(!firstName.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl;
            }
            while (1)
            {
                std::cout << "enter lastName : ";
                std::getline(std::cin, lastName);
                if(!lastName.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl;
            }
            while (1)
            {
                std::cout << "enter nickname : ";
                std::getline(std::cin, nackName);
                if(!nackName.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl; 
            }
            while (1)
            {
                std::cout << "enter screte : ";
                std::getline(std::cin, secret);
                if(!secret.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl; 
            }
            while (1)
            {
                std::cout << "enter phone number : ";
                std::getline(std::cin, number);
                if(!number.empty())
                    break;
                else
                    std::cout << "input is empty, try again" << std::endl;
            }
            phone.addContact(firstName, lastName, nackName, number, secret);
        }
        else if(choice == "SEARCH")
        {
            phone.displayAllPhoneBook();
            
        }
        else if(choice == "EXIT")
            exit(0);
    }
    
    return 0;
}