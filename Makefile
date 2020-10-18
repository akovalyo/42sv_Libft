# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/01 21:26:34 by akovalyo          #+#    #+#              #
#    Updated: 2020/10/18 12:12:45 by akovalyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ****** #
# COLORS #
# ****** #

RED = \033[0;31m
BRED = \033[1;31m
GREEN = \033[0;32m
BGREEN = \033[1;32m
YELLOW = \033[0;33m
BELLOW = \033[1;33m
BLUE = \033[0;34m
BBLUE = \033[01;34m
MAGENTA = \033[0;35m
BMAGENTA = \033[1;35m
CYAN = \033[0;36m
BCYAN = \033[1;36m
RESET = \033[0m

# ********** #
# STATUS BAR #
# ********** #

TOTAL = $(shell find $(SRCS_DIR) -iname  "*.c" | wc -l | bc)
define status
	$(eval COUNT := $(shell find $(OBJS_DIR) -iname "*.o" 2> /dev/null | wc -l | bc))
	$(eval PER := $(shell awk "BEGIN {printf \"%.0f\n\", $(COUNT)/$(TOTAL) * 100}"))
	$(eval SIZE := $(shell echo $(PER)/10 | bc))
	printf "\r$(COLOR)"
	printf "█%.0s" $(shell seq 0 $(SIZE))
	printf "%s%%" $(PER)
	$(eval END := $(shell echo 10 - $(SIZE) | bc))
	printf "%$(END)s" "  Compiling libft...           "
	printf "\r$(RESET)"
endef

# ********** #

COLOR = $(GREEN)
NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c
SRCS_DIR = srcs
OBJS_DIR = objs
INCL_DIR = includes
SRCS = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(addprefix $(OBJS_DIR)/,$(notdir $(patsubst %.c,%.o,$(SRCS))))

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "\r$(COLOR)libft compiled                       "
	@printf "\r$(RESET)"
	@echo

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(OBJS_DIR)
	@gcc $(FLAGS) -I $(INCL_DIR) $< -o $@
	@$(call status)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

norm:
	@norminette -R CheckForbiddenSourceHeader $(SRCS) includes/libft.h includes/printf.h

memory:
	@gcc -g -o test main.c -L. -lft -I ./includes
	@valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./test
	@rm test
	@gcc -g -fsanitize=address -o test main.c -L. -lft -I ./includes
	@./test
	@rm test

test:
	@clang -o test main.c -L. -lft -I ./includes
	@./test
	@rm test

debug:
	@gcc -g -o test main.c -L. -lft -I ./includes
