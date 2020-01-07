# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/01 21:26:34 by akovalyo          #+#    #+#              #
#    Updated: 2020/01/06 21:02:18 by akovalyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c
SRC = ft_strlen.c \
      ft_strcpy.c \
      ft_strncpy.c \
      ft_strdup.c \
      ft_atoi.c

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

