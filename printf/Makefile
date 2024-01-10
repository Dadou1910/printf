# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abremont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 17:00:10 by abremont          #+#    #+#              #
#    Updated: 2023/12/19 05:37:14 by abremont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_putstr.c ft_putunsign.c ft_putint.c ft_putptr.c ft_puthexa_min.c \
      ft_printf.c ft_puthexa_maj.c

OBJ = $(SRC:.c=.o)

CC = gcc
RM = rm -f

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
