# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 14:29:38 by ralfredi          #+#    #+#              #
#    Updated: 2021/09/15 00:14:24 by ralfredi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
CFILES = check_flag.c ft_atoi.c ft_strlen.c ft_tail.c num_lenth.c write_file.c
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

