/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:22:43 by yojablao          #+#    #+#             */
/*   Updated: 2025/03/13 02:06:27 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char *av[])
{
    std::string tmp;
    
    if(ac < 2)
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n',1);
    for (size_t i = 1; i < ac && av[i]; i++)
    {
        tmp = av[i];
        std::transform(tmp.begin(),tmp.end(),tmp.begin(),toupper);
        std::cout << tmp;
    }
    std::cout << '\n';
    return(0);
    
}