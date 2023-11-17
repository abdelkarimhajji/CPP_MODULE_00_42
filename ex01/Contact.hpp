#ifndef CONTACT_H
#define CONTACT_H

// #include <iostream>
#include <string>

class Contact {
private:
    int     index;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string secret;
    std::string phone;

public:
    Contact()
    {

    };
    void setContact(int index, std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret)
    {
        this->index = index;
        this->firstName = firstName;
        this->lastName = lastName;
        this->nickname = nickname;
        this->phone = phone;
        this->secret = secret;
    }
    std::string    printExact(std::string string)
    {
        if(string.length() == 10)
            return(string);
        else if(string.length() > 10)
        {
            string = string.substr(0, 10);
            string.back() = '*';
            return(string);
        }
        else if(string.length() < 10)
        {
            return(std::string(10 - string.length(), ' ').append(string));
        }
        return ("");
    }
    void    display()
    {
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "|first name| Last Name| Nick Name |" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "|" << printExact(firstName);
        std::cout << "|" << printExact(lastName);
        std::cout << "|" << printExact(nickname);
        std::cout << "-----------------------------------" << std::endl;
    }
};

#endif