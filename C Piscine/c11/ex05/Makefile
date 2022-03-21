# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 14:29:38 by ralfredi          #+#    #+#              #
#    Updated: 2021/09/15 23:34:52 by ralfredi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op
CFILES = do_op.c ft_atoi.c ft_putnbr.c ft_putstr.c ft_strcmp.c
OBJ = $(CFILES:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror

.PHONY: all, clean, fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

