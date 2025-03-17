/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:10:54 by yojablao          #+#    #+#             */
/*   Updated: 2025/03/17 05:39:00 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> 

#ifndef HEADER_HPP
#define HEADER_HPP

void print_cage();

class Contacts
{
    int id;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string num;
    std::string secret;
public:
    void fillit(int id,std::string first_name,std::string last_name,std::string nickname,std::string num,std::string secret);
    Contacts(): id(-1) ,first_name(""),last_name(""),nickname(""),num(""),secret(""){}
    int get_id(){return(id);}
    void printf_info(int i);
    void prntfull();
} ;  
 
class Phonebook
{
    Contacts contact[8];
    int     conter;
public:
    Phonebook():conter(0){}
    void add();
    void search();
};

#endif