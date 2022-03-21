# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 18:40:02 by ralfredi          #+#    #+#              #
#   Updated: 2021/11/09 17:28:48 by                  ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a
CC = 		cc
FLAGS = 	-Wall -Wextra -Werror
SRC =		ft_atoi.c		ft_bzero.c		ft_isalnum.c		ft_isalpha.c\
			ft_isascii.c	ft_isdigit.c	ft_isprint.c		ft_memchr.c\
			ft_memcmp.c		ft_memcpy.c		ft_memmove.c		ft_memset.c\
			ft_strchr.c		ft_strlcat.c	ft_strlcpy.c		ft_strlen.c\
			ft_strrchr.c	ft_strncmp.c	ft_strnstr.c		ft_toupper.c\
			ft_tolower.c	ft_calloc.c		ft_strdup.c			ft_substr.c\
			ft_strjoin.c	ft_strtrim.c	ft_split.c			ft_itoa.c\
			ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c		ft_putstr_fd.c\
			ft_putendl_fd.c	ft_putnbr_fd.c
OBJ = 		$(SRC:.c=.o)
D_FILES = 	$(SRC:.c=.d)

BONUS =		ft_lstnew.c			ft_lstadd_front.c			ft_lstsize.c\
			ft_lstlast.c		ft_lstadd_back.c			ft_lstdelone.c\
			ft_lstclear.c		ft_lstiter.c				ft_lstmap.c
BONUS_OBJ =	$(BONUS:.c=.o)
BONUS_D = 	$(BONUS:.c=.d)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean:
	rm -f $(OBJ) $(D_FILES) $(BONUS_OBJ) $(BONUS_D)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re bonus