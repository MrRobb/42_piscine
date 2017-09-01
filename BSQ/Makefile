NAME = bsq
FILES = bsq.c ft_bitset.c ftio.c funcs.c bitset_utils.c

.PHONY: all clean fclean re

all:
	@gcc -Wall -Wextra -Werror -o $(NAME) $(FILES)

clean:
	@rm -f *.o

fclean: clean
	@rm bsq

re: fclean all
