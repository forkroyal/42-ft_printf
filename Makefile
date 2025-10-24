# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 08:48:43 by fsitter           #+#    #+#              #
#    Updated: 2025/10/24 10:42:22 by fsitter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCE = 	ft_printf.c \
			ft_putchar.c \
			ft_puthex.c \
			ft_putnbr.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_putuint.c

OBJECTS = $(SOURCE:.c=.o)

HEADER = ft_printf.h

LIBDIR = ./libft

LIB = ${LIBDIR}/libft.a

LIBHEADER = ${LIBDIR}/libft.h

CFLAGS += -Wall -Werror -Wextra

CC = cc

RM = rm -f

CREATION = ar rcs

%.o: %.c
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

${NAME}: ${OBJECTS} ${HEADER} ${LIB} ${LIBHEADER}
	${CREATION} ${NAME} ${OBJECTS}
	ar x ${LIB}
	${CREATION} ${NAME} *.o
	${RM} *.o

${LIB}:
	make -C ${LIBDIR} all

clean:
	make -C ${LIBDIR} clean
	${RM} ${OBJECTS}

fclean:
	make -C ${LIBDIR} fclean
	${RM} ${OBJECTS} ${NAME}
	
re: fclean all

all: ${NAME}

make: make all

.PHONY: clean fclean re all make


