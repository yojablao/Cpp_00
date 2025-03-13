# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 03:14:22 by yojablao          #+#    #+#              #
#    Updated: 2025/03/13 03:30:20 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

HEADER = header.hpp
SRC = main.cpp
OBJ = main.o
CC =c++ 
Cflag = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
all:NAME

.o: $(HEADER) $(SRC)
	$(CC) $(Cflag) $< -o $@
	
NAME:$(OBJ)
	$(CC) $<  -o $(NAME)