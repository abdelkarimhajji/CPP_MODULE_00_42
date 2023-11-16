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
    Contact(); // constructor
    void myFunction(); // member function
};

#endif