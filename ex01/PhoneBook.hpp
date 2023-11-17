#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact arrContact[2];
    int     count;
    int     cuerentSize;
public:
    PhoneBook()
    {
        count = 0;
        cuerentSize = 0;
    };
    void    addContact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret)
    {
        if (count == 2)
            count = 0;
        if (count < 2)
            arrContact[count].setContact(count, firstName, lastName, nickname, phone, secret);
        count++;
        cuerentSize++;
        if (cuerentSize > 2)
            cuerentSize = 2;
    }
    void displayAllPhoneBook()
    {
        int i = 0;
        while (i < cuerentSize)
        {
            arrContact[i].display();
            i++;
        }
    };
};

#endif
