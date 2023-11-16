#ifndef CONTACT_H
#define CONTACT_H

// #include <iostream>
#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string secret;
    int phone;

public:
    Contact()
    {

    };
    void setContact(std::string firstName, std::string lastName, std::string nickname, int phone, std::string secret)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->nickname = nickname;
        this->phone = phone;
        this->secret = secret;
    }
    void    display()
    {
        std::cout << "first name :" << firstName << std::endl;
        std::cout << "last name :" << lastName << std::endl;
        std::cout << "nickname :" << nickname << std::endl;
        std::cout << "phone :" << phone << std::endl;
        std::cout << "scret :" << secret << std::endl;
    }
};

#endif