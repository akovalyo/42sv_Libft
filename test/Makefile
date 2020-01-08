# **************************************************************************** #
#                                                                              #
#                                                __________________________    #
#    Makefile                                    _______ ______   ______ __    #
#                                                ___    |___  /   ___  //_/    #
#    By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<       #
#                                                _  ___ |_  / ___ _  /| |      #
#    Created: 2020/01/07 18:23:56 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|      #
#    Updated: 2020/01/07 18:24:00 by akovalyo    __________________________    #
#                                                                              #
# **************************************************************************** #

all:
	@echo "****** Library: ******"
	@echo
	@ar -t libft.a
	@echo
	@echo "************************"
	@gcc -o tmp_test bin/test.c bin/divider.c bin/test_ft_* libft.h -L. -lft
	@./tmp_test
	@rm -f tmp_test

clean:
	rm -f libft.a libft.h

