#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact arrContact[2];
    int     count;
    int     currentSize;
    int     full;
    std::string     index;
public:
    PhoneBook()
    {
        count = 0;
        currentSize = 0;
        full = 0;
    };
    void    addContact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret)
    {
        if (count == 2)
            count = 0;
        if (count < 2)
            arrContact[count].setContact(std::to_string(count), firstName, lastName, nickname, phone, secret);
        count++;
        full = 1;
        currentSize++;
        if (currentSize > 2)
            currentSize = 2;
    }
    void    sepecificContact(std::string Searchindex)
    {
        int index = std::stoi(Searchindex);
        arrContact[index].displayIndexSearch();
    }
    void displayAllPhoneBook()
    {
        if (full)
        {
            int i = 0;
            arrContact[i].headTable();
            while (i < currentSize)
            {
                arrContact[i].display();
                i++;
            }
            std::cout << "enter index you want : ";
            std::getline(std::cin, index);
            if(std::stoi(index) < count)
                sepecificContact(index);
        }
    };
};

#endif
