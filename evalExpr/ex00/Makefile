# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/25 22:30:15 by rariosa-          #+#    #+#              #
#    Updated: 2017/08/27 00:51:44 by rariosa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FILES = main.c eval_expr.c ft.c stack.c cases.c

.PHONY: all clean fclean

all:
	@gcc -Wall -Werror -Wextra -o $(NAME) $(FILES)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
