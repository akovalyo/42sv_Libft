# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/01 21:26:34 by akovalyo          #+#    #+#              #
#    Updated: 2020/01/08 20:29:13 by akovalyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c
SRC = ft_strlen.c \
      ft_strcpy.c \
      ft_strncpy.c \
      ft_strdup.c \
      ft_atoi.c \
      ft_isalpha.c \
      ft_isdigit.c \
      ft_isascii.c \
      ft_isalnum.c \
      ft_isprint.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strstr.c \
      ft_strcat.c \
      ft_strncat.c \
      ft_strlcat.c \
      ft_strnstr.c \
      ft_putchar.c

OF = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OF)
	@ar rc $(NAME) $(OF)
	@ranlib $(NAME)

$(OF):
	@gcc $(FLAGS) $(SRC)

clean:
	@rm -f $(OF)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

