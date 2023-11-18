/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:15:13 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/18 12:17:39 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
    std::string index;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string secret;
    std::string phone;

public:
    Contact();
    void setContact(std::string index, std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret);
    std::string printExact(std::string string);
    void headTable();
    void display();
    void    displayIndexSearch();
};

#endif