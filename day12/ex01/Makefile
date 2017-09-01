# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 21:54:53 by rariosa-          #+#    #+#              #
#    Updated: 2017/08/24 18:54:53 by rariosa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
C_FILES = cat.c cat2.c

.PHONY: all clean fclean

all:
	@gcc -Wall -Wextra -Werror -o $(NAME) $(C_FILES)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
