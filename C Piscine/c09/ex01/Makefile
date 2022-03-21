# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 18:40:02 by ralfredi          #+#    #+#              #
#    Updated: 2021/09/13 19:37:04 by ralfredi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
PATH = srcs/
CFILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
HEADER = includes/
OBJ = $(CFILES:.c=.o)

all:$(NAME)

$(NAME): $(addprefix $(PATH), $(OBJ))
	ar rcs $(NAME) $(addprefix $(PATH), $(OBJ)) $?

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -f $(addprefix $(PATH), $(OBJ))

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re