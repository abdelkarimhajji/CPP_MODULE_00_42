#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact arrContact[8];
public:
    PhoneBook()
    {

    };
    void    addContact(std::string firstName, std::string lastName, std::string nickname, int phone, std::string secret)
    {
        arrContact[0].setContact(firstName, lastName, nickname, phone, secret);
    }
    void myFunction()
    {
        arrContact[0].display();
    };
};

#endif
