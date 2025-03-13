/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:10:54 by yojablao          #+#    #+#             */
/*   Updated: 2025/03/13 03:35:44 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> 

#ifndef HEADER_HPP
#define HEADER_HPP

class Contacts
{
private:
    int id;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string secret;
public:
    Contacts(int id,std::string first_name,std::string last_name,std::string nickname,std::string secret): id(id) ,first_name(first_name),last_name(last_name),nickname(nickname),secret(secret){}
    Contacts(): id(-1) ,first_name(""),last_name(""),nickname(""),secret(""){}
    int get_id(){return(id);}
    void printf_info(){
        print_cage();
        std::cout<< "|";
        std::cout << std::left << std::setw(10) << id;
        std::cout<< "|";
        std::cout<<  std::left << std::setw(10)<<((first_name.length() < 10)? first_name : first_name.substr(0,9) + '.');
        std::cout<< "|";
        std::cout<<  std::left << std::setw(10) <<((last_name.length() < 10)? last_name : last_name.substr(0,9) + '.');
        std::cout<< "|";
        std::cout<<  std::left << std::setw(10) << ((nickname.length() < 10)? nickname : nickname.substr(0,9) + '.');
        std::cout<< "|";
        std::cout<<  std::left << std::setw(10) << ((secret.length() < 10)? secret : secret.substr(0,9) + '.');
        std::cout<< "|\n";
    }
};

class Phonebook
{
private:
    Contacts contact[8];
    int     conter;
public:
    Phonebook():conter(0){}
    void add(){
        std::string buffer[4];
        std::cout<<"      type firs name      \n";
        std::cin>>buffer[0];
        std::cout<<"      type last name      \n";
        std::cin>>buffer[1];
        std::cout<<"      type nickname      \n";
        std::cin>>buffer[2];
        std::cout<<"      type darkest secret     \n";
        std::cin>>buffer[3];
        contact[conter] =  Contacts(conter,buffer[0],buffer[1],buffer[2],buffer[3]);
    };
    void search(){
        for(size_t i = 0; contact[i].get_id() != -1 ; i++)
        {
            contact[i].printf_info();
        }
    };
};

#endif