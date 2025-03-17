/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:59:10 by yojablao          #+#    #+#             */
/*   Updated: 2025/03/17 05:38:52 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


void print_cage()
{
    std::cout << "┏";
    std::cout << "━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━"; 

    std::cout << "┓" << std::endl;
    std::cout<< "|";
    std::cout << std::setw(10) << "Index    "<<std::left;
    std::cout<< "|";
    std::cout<<"first name";
    std::cout<< "|";
    std::cout<<  "last name ";
    std::cout<< "|";
    std::cout<< std::setw(10) << " nickname";
    std::cout<< "|\n";

    std::cout << "┗";
    std::cout << "━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━"; 
    std::cout << "┛" << std::endl;
    
}
void Contacts::printf_info(int i)
{

    std::cout<< "|";
    std::cout << std::left << std::setw(10) << i +1;
    std::cout<< "|";
    std::cout<<  std::left << std::setw(10)<<((first_name.length() < 10)? first_name : first_name.substr(0,9) + '.');
    std::cout<< "|";
    std::cout<<  std::left << std::setw(10) <<((last_name.length() < 10)? last_name : last_name.substr(0,9) + '.');
    std::cout<< "|";
    std::cout<<  std::left << std::setw(10) << ((nickname.length() < 10)? nickname : nickname.substr(0,9) + '.');
    std::cout<< "|\n";
}

void   Contacts::fillit(int id,std::string first_name,std::string last_name,std::string nickname,std::string num,std::string secret)
{
    this->id = id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->num= num;
   this->secret = secret;
} 

void Phonebook::add()
{
    std::string buffer[5];
    std::string prompts[] = {
        "First name", "Last name", "Nickname", "Number", "Darkest secret"
    };

    for (int i = 0; i < 5; i++)
    {
         while (true)
         {
            std::cout << "Type " << prompts[i] << ": ";
            if (!std::getline(std::cin, buffer[i])) {return;}
            if (buffer[i].empty()) {std::cout << "Error: Input cannot be empty. Try again.\n";      continue;}
            if (i < 3 && (std::find_if(buffer[i].begin(), buffer[i].end(), isdigit) != buffer[i].end() || \
                std::find_if(buffer[i].begin(),buffer[i].end(),ispunct) != buffer[i].end())){
                std::cout << "Error: Must contain at least one letter. Try again.\n";
                continue;
            }
            if(i == 3 && (std::find_if(buffer[i].begin(), buffer[i].end(), isalpha ) != buffer[i].end()|| \
                std::find_if(buffer[i].begin(),buffer[i].end(),ispunct) != buffer[i].end()))
            {
                std::cout << "Error: Must contain NUMBERS. Try again.\n";
                continue;
            }
            break;
        }
    }
    if (conter > 7)
    {
        int i = -1;
        std::string tmp;
        while(++i < 7)
            contact[i] = contact[i + 1];
        contact[7].fillit(conter+1,buffer[0],buffer[1],buffer[2],buffer[3],buffer[4]);
        return;
    }
    contact[conter].fillit(conter+1,buffer[0],buffer[1],buffer[2],buffer[3],buffer[4]);
    conter += 1;
}
void Phonebook::search()
{
    std::string buffer;
    int i = 0;


    print_cage();
    for(size_t j = 0; contact[j].get_id() != -1 ; j++)
        contact[j].printf_info(j);
    if (!std::getline(std::cin, buffer)) {return;}
    if(buffer.length() > 1){std::cout << "invalide index\n";    return;}
    i = std::atoi(buffer.c_str());
    if(i <= 0 ||  i > 8) {std::cout << "invalide index\n";}
    else if(contact[i - 1].get_id() != -1) {contact[i - 1].prntfull();}
}
void Contacts::prntfull()
{
    std::cout<< "first name =" << first_name << std::endl;
    std::cout<< "last name =" << last_name << std::endl;
    std::cout<< "nickname =" << nickname << std::endl;
    std::cout<< "Number =" << num << std::endl;
    std::cout<< "Darkest secret =" << secret<< std::endl;
} 