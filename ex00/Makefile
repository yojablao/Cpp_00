NAME = megaphone

CC =c++ 
Cflag = -Wall -Wextra -Werror -std=c++98

obj = Megaphone.o
srs = Megaphone.c

all: NAME
.o:.c
	$(CC) $(Cflag) $@ -o $<

NAME: $(obj)
	$(CC) $(Cflag) $(obj) -o $(NAME)