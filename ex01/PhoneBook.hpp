#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact arrContact[8];
public:
    PhoneBook(); // constructor
    void myFunction(); // member function
};

#endif