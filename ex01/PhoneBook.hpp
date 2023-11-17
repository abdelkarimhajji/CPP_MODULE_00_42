#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact arrContact[2];
    int     count;
    int     currentSize;
public:
    PhoneBook()
    {
        count = 0;
        currentSize = 0;
    };
    void    addContact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret)
    {
        if (count == 2)
            count = 0;
        if (count < 2)
            arrContact[count].setContact(std::to_string(count), firstName, lastName, nickname, phone, secret);
        count++;
        currentSize++;
        if (currentSize > 2)
            currentSize = 2;
    }
    void displayAllPhoneBook()
    {
        int i = 0;
        arrContact[i].headTable();
        while (i < currentSize)
        {
            arrContact[i].display();
            i++;
        }
    };
    void    sepecificContact(std::string Searchindex)
    {
        // int i = 0;
        // while (i < currentSize)
        // {
            std::cout << arrContact[0].index.back();
            // i++;
        // }
        
    }
};

#endif
