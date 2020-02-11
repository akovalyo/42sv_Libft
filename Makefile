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
SRC = ft_memset.c \
      ft_bzero.c \
      ft_memcpy.c \
      ft_memccpy.c \
      ft_memmove.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strlen.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strnstr.c \
      ft_strncmp.c \
      ft_atoi.c \
      ft_isalpha.c \
      ft_isdigit.c \
      ft_isascii.c \
      ft_isalnum.c \
      ft_isprint.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_itoa.c \
      ft_strmapi.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstadd_back.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_putchar_bonus.c \
	ft_strcpy_bonus.c \
	ft_strncpy_bonus.c \
	ft_strstr_bonus.c \
	ft_strcat_bonus.c \
	ft_strncat_bonus.c \
	ft_strcmp_bonus.c \
	ft_putstr_bonus.c \
	ft_putendl_bonus.c \
	ft_putnbr_bonus.c \
	ft_strclr_bonus.c \
	ft_striter_bonus.c \
	ft_striteri_bonus.c \
	ft_strequ_bonus.c \
	ft_strnequ_bonus.c \
	ft_memalloc_bonus.c \
	ft_memdel_bonus.c \
	ft_strnew_bonus.c \
	ft_strdel_bonus.c \
	ft_strmap_bonus.c \
	ft_nbrlen_bonus.c \
	ft_strspn_bonus.c \
	ft_strcspn_bonus.c \
	ft_lstprint_str_bonus.c \

OF = $(SRC:%.c=%.o)

OF_BONUS = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRC) -I ./
	@ar rc $(NAME) $(OF)
	@ranlib $(NAME)

bonus: 
	@gcc $(FLAGS) $(BONUS)  -I ./
	@ar rc $(NAME) $(OF_BONUS)
	@ranlib $(NAME)

clean:
	@rm -f $(OF) $(OF_BONUS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

