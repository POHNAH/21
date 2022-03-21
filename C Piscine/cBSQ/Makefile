# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 18:40:02 by ralfredi          #+#    #+#              #
#    Updated: 2021/09/19 20:46:59 by mlothair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cBSQ
CC = gcc
FLAGS = -Wall -Wextra -Werror
CFILES = *.c
OBJ = $(CFILES:.c=.o)

all:$(NAME)

$(NAME): $(CFILES)
	$(CC) $(FLAGS) -o $(NAME) $(CFILES) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re