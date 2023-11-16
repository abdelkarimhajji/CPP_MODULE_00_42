#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phone;
    
    std::string firstName;
    std::string lastName;
    std::string nackName;
    std::string secret;
    int number;

    std::cout << "enter firstName : ";
    std::cin >> firstName;
    std::cout << "enter lastName : ";
    std::cin >> lastName;
    std::cout << "enter nickname : ";
    std::cin >> nackName;
    std::cout << "enter screte : ";
    std::cin >> secret;
    std::cout << "enter phone number : ";
    std::cin >> number;
    phone.addContact(firstName, lastName, nackName, number, secret);
    phone.myFunction();
    return 0;
}