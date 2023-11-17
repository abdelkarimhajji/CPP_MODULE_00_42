/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:56:28 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/17 19:29:39 by ahajji           ###   ########.fr       */
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
    while(1)
    {
        std::cout << "choose ADD, SEARCH, EXIT : ";
        std::getline(std::cin, choice); 
        if(choice == "ADD")
        {
            std::cout << "enter firstName : ";
            std::getline(std::cin, firstName); 
            std::cout << "enter lastName : ";
            std::getline(std::cin, lastName); 
            std::cout << "enter nickname : ";
            std::getline(std::cin, nackName); 
            std::cout << "enter screte : ";
            std::getline(std::cin, secret); 
            std::cout << "enter phone number : ";
            std::getline(std::cin, number);
            phone.addContact(firstName, lastName, nackName, number, secret);
        }
        else if(choice == "SEARCH")
        {
            phone.displayAllPhoneBook();
            std::cout << "enter index you want : ";
            std::getline(std::cin, index);
        }
        else if(choice == "EXIT")
            exit(0);
    }
    
    return 0;
}