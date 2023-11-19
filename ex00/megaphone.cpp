/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:15:21 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/19 10:09:52 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
    int i = 1;
    int j = 0;

    std::string str;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if(av[i][j] >='a' && av[i][j] <= 'z')
                str += std::toupper(av[i][j]);
            else
                str += av[i][j];
            j++;
        }
        i++;
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        std::cout << str << std::endl;
    return 0;
}
