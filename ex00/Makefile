# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/17 05:43:38 by yojablao          #+#    #+#              #
#    Updated: 2025/03/17 06:22:34 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC =c++ 
Cflag = -Wall -Wextra -Werror -std=c++98

obj = Megaphone.o
srs = Megaphone.c

all: $(NAME)

.o:.c
	$(CC) $(Cflag) $@ -o $<

$(NAME): $(obj)
	$(CC) $(Cflag) $(obj) -o $(NAME)

clean :
	rm -f $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all