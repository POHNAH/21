# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 14:29:38 by ralfredi          #+#    #+#              #
#    Updated: 2021/09/14 19:33:33 by ralfredi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
CFILES = ft_cat.c
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

