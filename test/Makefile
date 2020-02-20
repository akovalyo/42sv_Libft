# **************************************************************************** #
#                                                                              #
#                                                __________________________    #
#    Makefile                                    _______ ______   ______ __    #
#                                                ___    |___  /   ___  //_/    #
#    By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<       #
#                                                _  ___ |_  / ___ _  /| |      #
#    Created: 2020/01/07 18:23:56 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|      #
#    Updated: 2020/02/19 21:57:22 by akovalyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft.h -L. -lft

lib: 
	@echo "****** Library: ******"
	@echo
	@ar -t libft.a
	@echo
	@echo "************************"


part1: 
	@gcc -o tmp_test_part1 bin/test_part1.c bin/divider.c bin/part1/test_ft_* $(LIBFT)
	@./tmp_test_part1
	@rm -f tmp_test_part1

part2:
	@gcc -o tmp_test_part2 bin/test_part2.c bin/divider.c bin/part2/test_ft_* $(LIBFT)
	@./tmp_test_part2
	@rm -f tmp_test_part2
bonus: 
	@gcc -o tmp_test_bonus bin/bonus.c bin/divider.c bin/bonus/test_ft_* $(LIBFT)
	@./tmp_test_bonus
	@rm -f tmp_test_bonus

personal:
	@gcc -o tmp_test_personal bin/test_personal.c bin/divider.c bin/personal/test_ft_* $(LIBFT)
	@./tmp_test_personal
	@rm -f tmp_test_personal


all: lib part1 part2 bonus

clean:
	rm -f libft.a libft.h

