/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:15:05 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/18 12:27:03 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
private:
    Contact arrContact[8];
    int     count;
    int     currentSize;
    int     full;
    std::string     index;
public:
    PhoneBook();
    void    addContact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret);
    void    sepecificContact(std::string Searchindex);
    int     displayAllPhoneBook();
};

#endif
