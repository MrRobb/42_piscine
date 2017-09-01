NAME = libft.a
SRCS = srcs/
INCLUDES = includes/
FUNCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
BINS = $(patsubst %, %.o, $(FUNCTIONS))

.PHONY: clean fclean re all

all: $(NAME)

$(BINS):
	@gcc -Wall -Werror -Wextra -c $(patsubst %.o, $(SRCS)%.c, $@) -I $(INCLUDES)

$(NAME): $(BINS)
	@ar rc $(NAME) $(BINS);
	@ranlib $(NAME);

clean:
	@rm -f $(BINS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
