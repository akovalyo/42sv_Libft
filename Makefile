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
      ft_strcmp.c \
      ft_strncmp.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_bzero.c \
      ft_memset.c \
      ft_memchr.c \
      ft_memcpy.c \
      ft_memccpy.c \
      ft_memcmp.c \
      ft_memmove.c \
      ft_putchar.c \
      ft_putstr.c \
      ft_putendl.c \
      ft_putnbr.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_strclr.c \
      ft_striter.c \
      ft_striteri.c \
      ft_strequ.c \
      ft_strnequ.c \
      ft_memalloc.c \
      ft_memdel.c \
      ft_strnew.c \
      ft_strdel.c

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

