/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:58:46 by yojablao          #+#    #+#             */
/*   Updated: 2025/03/17 05:53:09 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int main(void)
{
    Phonebook phone;
    std::string buffer;

    while(1)
    {
        std::cout << "-»> ";
        if (!std::getline(std::cin, buffer)) { 
            std::cout<< "\nExiting...]" << std::endl;
            break;
        }
        if (buffer.empty())
            std::cout << "is null\n";
        if(buffer == "ADD")
            phone.add();
        else if (buffer == "SEARCH")
            phone.search();
        else if (buffer == "EXIT")
            exit(0);
    }
} 