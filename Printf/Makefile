# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 17:13:18 by lacucalo          #+#    #+#              #
#    Updated: 2023/06/02 16:23:06 by lacucalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

OBJ = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIB = ar rcs

SOURCES = ft_printf.c ft_printf_formats.c

RM = rm -f

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re