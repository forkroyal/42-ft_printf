# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 08:48:43 by fsitter           #+#    #+#              #
#    Updated: 2025/10/24 11:50:25 by fsitter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCE = 	ft_printf.c \
			ft_putchar.c \
			ft_puthex.c \
			ft_putnbr.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_putuint.c \
			${addprefix ${LIBDIR}/, ${SOURCE_LIB}}

SOURCE_LIB = 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_split.c


OBJECTS = $(SOURCE:.c=.o)

HEADER = ft_printf.h

LIBDIR = ./libft

LIB = ${LIBDIR}/libft.a

LIBHEADER = ${LIBDIR}/libft.h

CFLAGS += -Wall -Werror -Wextra

CC = cc

RM = rm -f

CREATION = ar rcs

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

${NAME}: ${OBJECTS} ${HEADER} ${LIBHEADER}
	${CREATION} ${NAME} ${OBJECTS}
#	cp ${LIB} ${NAME} 

# ${LIB}:
# 	(cd libft && make all)

clean:
#	make -C ${LIBDIR} clean
	${RM} ${OBJECTS}

fclean:
# make -C ${LIBDIR} fclean
	${RM} ${OBJECTS} ${NAME}
	
re: fclean all

make: make all

.PHONY: clean fclean re all make


