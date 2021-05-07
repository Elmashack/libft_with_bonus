NAME = libft.so

SRCS = ft_strtrim.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror -I libft.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.clean
	gcc $(FLAGS) -c $< -shared -o $@

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all