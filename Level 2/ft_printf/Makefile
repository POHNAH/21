NAME        =	libftprintf.a

SRCS        =	ft_printf.c				ft_uitoa.c				get_hex.c \
             	print_char.c			print_flag.c			print_hex.c \
              	print_int.c				print_pointer.c			print_str.c \
              	str_upcase.c			get_unsigned_long_long_hex.c \
              	print_unsigned_int.c	ft_putchar_fd.c			ft_strdup.c \
              	ft_itoa.c				ft_putstr_fd.c			ft_strlen.c \
				ft_toupper.c

OBJS        =	${SRCS:.c=.o}

HEADER      =	ft_printf.h

CC          =	cc

RM          =	rm -f

CFLAGS      =	-Wall -Werror -Wextra

%.o:		%.c ${HEADER}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:        ${NAME}

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:     clean
			${RM} ${NAME}

re:         fclean all

.PHONY:     all clean fclean re