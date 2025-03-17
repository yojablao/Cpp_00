# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 03:14:22 by yojablao          #+#    #+#              #
#    Updated: 2025/03/17 05:41:43 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

HEADER = header.hpp
SRC = main.cpp add.cpp
OBJ = $(SRC:.cpp=.o)
CC =c++ 
Cflag = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
all:$(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(Cflag) -c $< -o $@
	
$(NAME):$(OBJ)
	$(CC) $(Cflag) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all