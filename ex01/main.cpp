/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:58:46 by yojablao          #+#    #+#             */
/*   Updated: 2025/03/13 03:25:19 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
    Phonebook phone;
    std::string buffer;

    while(1)
    {
        std::getline(std::cin,buffer);
        // if (buffer.empty()) continue;
        if(buffer == "ADD")
            phone.add();
        else if (buffer == "EXIT")
            exit(0);
        else if (buffer == "SEARCH")
            phone.search();
    }
}