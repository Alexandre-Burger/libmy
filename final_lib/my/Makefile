k##
## EPITECH PROJECT, 2019
## C POOL ~ Libmy
## File description:
## Makefile
##

NAME	= libmy.a

SRCS	= $(wildcard ./*.c)

OBJS	= $(SRCS:.c=.o)

CFLAGS = -O2 -pipe -Wall -Wextra -Wshadow -Wuninitialized -Wformat-security

all: $(NAME)

$(NAME): $(OBJS)
	 ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
